//
//  ThemeProbe.m
//  MioPlugin
//
//  探针模式：纯观测、零干预。probe.flag 存在时替代正常主题 hook 安装。
//  目的：观测微信助手（WXHelper）在暗色冷启动时到底走哪条取图链路——
//    ① 微信原始请求名（MMThemeManager 4 个取图变体 + WCSVGImage）
//    ② 引擎路径解析（pathOfResNamed:）
//    ③ 亮暗图对机制（DarkModeImageMgr 注册/对换）
//    ④ 主题文件读取（+[UIImage imageWithContentsOfFile:]，过滤 dark/theme 关键词）
//  所有日志带 [PROBE] 前缀，结果指纹：nil | 宽x高@scalex（file 加载的图通常 scale=1，
//  原生包图 scale=3——据此判断返回的图被谁换过）。
//

#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import "substrate.h"
#import "../../Core/LogManager.h"

// ── 原实现 ──────────────────────────────────────────────────────────────────
static UIImage *(*g_orig_imgNamed)(id, SEL, NSString *);
static UIImage *(*g_orig_imgNamedWarn)(id, SEL, NSString *, BOOL);
static UIImage *(*g_orig_imgNamedAlpha)(id, SEL, NSString *, double);
static UIImage *(*g_orig_imgNamedAlphaSuffix)(id, SEL, NSString *, float, NSString *);
static UIImage *(*g_orig_svgNamed)(id, SEL, NSString *, id);
static NSString *(*g_orig_pathOfRes)(id, SEL, NSString *);
static UIImage *(*g_orig_imgContOfFile)(id, SEL, NSString *);
static UIImage *(*g_orig_darkForImg)(id, SEL, id);
static UIImage *(*g_orig_lightForImg)(id, SEL, id);
static UIImage *(*g_orig_registerPair)(id, SEL, id, id);

// ── 计数与工具 ──────────────────────────────────────────────────────────────
static long _n_named, _n_file, _n_dark, _n_color;

static NSString *MioFp(UIImage *img) {
    if (!img) return @"nil";
    return [NSString stringWithFormat:@"%.0fx%.0f@%.0fx", img.size.width, img.size.height, img.scale];
}

static void MioP(NSString *fmt, ...) NS_FORMAT_FUNCTION(1, 2);
static void MioP(NSString *fmt, ...) {
    va_list ap; va_start(ap, fmt);
    NSString *msg = [[NSString alloc] initWithFormat:fmt arguments:ap];
    va_end(ap);
    WPLog(@"Theme", @"[PROBE] %@", msg);
}

// ── MMThemeManager 取图变体 ────────────────────────────────────────────────
static UIImage *mio_p_imgNamed(id self, SEL _cmd, NSString *name) {
    UIImage *r = g_orig_imgNamed(self, _cmd, name);
    if (++_n_named <= 400) MioP(@"[IMG] %@ → %@", name, MioFp(r));
    return r;
}
static UIImage *mio_p_imgNamedWarn(id self, SEL _cmd, NSString *name, BOOL warn) {
    UIImage *r = g_orig_imgNamedWarn(self, _cmd, name, warn);
    if (++_n_named <= 400) MioP(@"[IMG:w%@(nil)] %@ → %@", warn ? @"Y" : @"N", name, MioFp(r));
    return r;
}
static UIImage *mio_p_imgNamedAlpha(id self, SEL _cmd, NSString *name, double alpha) {
    UIImage *r = g_orig_imgNamedAlpha(self, _cmd, name, alpha);
    if (++_n_named <= 400) MioP(@"[IMG:a%.2f] %@ → %@", alpha, name, MioFp(r));
    return r;
}
static UIImage *mio_p_imgNamedAlphaSuffix(id self, SEL _cmd, NSString *name, float alpha, NSString *suffix) {
    UIImage *r = g_orig_imgNamedAlphaSuffix(self, _cmd, name, alpha, suffix);
    if (++_n_named <= 400) MioP(@"[IMG:a%.2f+%@] %@ → %@", alpha, suffix, name, MioFp(r));
    return r;
}

// ── SVG / 路径解析 ─────────────────────────────────────────────────────────
static UIImage *mio_p_svg(id self, SEL _cmd, NSString *name, id config) {
    UIImage *r = g_orig_svgNamed(self, _cmd, name, config);
    if (++_n_named <= 400) MioP(@"[SVG] %@ → %@", name, MioFp(r));
    return r;
}
static NSString *mio_p_pathOfRes(id self, SEL _cmd, NSString *name) {
    NSString *r = g_orig_pathOfRes(self, _cmd, name);
    if (++_n_named <= 400) MioP(@"[PATH] %@ → %@", name, r ?: @"nil");
    return r;
}

// ── 主题文件读取（WXHelper 读 D519 的必经之路）────────────────────────────
static UIImage *mio_p_imgContOfFile(id self, SEL _cmd, NSString *path) {
    UIImage *r = g_orig_imgContOfFile(self, _cmd, path);
    if (++_n_file <= 100000) {
        NSString *low = path.lowercaseString;
        if ([low containsString:@"dark"] || [low containsString:@"theme"] || [low containsString:@"d519"]) {
            MioP(@"[FILE] %@ ← %@", MioFp(r), path);
        }
    }
    return r;
}

// ── DarkModeImageMgr 亮暗图对 ─────────────────────────────────────────────
static UIImage *mio_p_darkForImg(id self, SEL _cmd, UIImage *img) {
    UIImage *r = g_orig_darkForImg(self, _cmd, img);
    if (++_n_dark <= 200) MioP(@"[PAIR] darkModeImageFor(%@) → %@", MioFp(img), MioFp(r));
    return r;
}
static UIImage *mio_p_lightForImg(id self, SEL _cmd, UIImage *img) {
    UIImage *r = g_orig_lightForImg(self, _cmd, img);
    if (++_n_dark <= 200) MioP(@"[PAIR] lightModeImageFor(%@) → %@", MioFp(img), MioFp(r));
    return r;
}
static UIImage *mio_p_registerPair(id self, SEL _cmd, UIImage *light, UIImage *dark) {
    UIImage *r = g_orig_registerPair(self, _cmd, light, dark);
    if (++_n_dark <= 200) MioP(@"[PAIR] register(亮%@ 暗%@) → %@", MioFp(light), MioFp(dark), MioFp(r));
    return r;
}

// ── 安装 ──────────────────────────────────────────────────────────────────
static void MioHookInst(Class cls, SEL sel, IMP newImp, IMP *orig) {
    if (!cls) { MioP(@"✗ 类不存在: (null)"); return; }
    if (!class_getInstanceMethod(cls, sel)) { MioP(@"✗ 方法不存在: %@ %@", NSStringFromClass(cls), NSStringFromSelector(sel)); return; }
    MSHookMessageEx(cls, sel, newImp, orig);
    MioP(@"✓ %@ %@", NSStringFromClass(cls), NSStringFromSelector(sel));
}

void MioThemeProbeInstall(void) {
    MioP(@"═══ 探针安装开始（纯观测，不做任何主题干预）═══");
    Class mgrCls = objc_getClass("MMThemeManager");
    MioHookInst(mgrCls, NSSelectorFromString(@"imageNamed:"), (IMP)mio_p_imgNamed, (IMP *)&g_orig_imgNamed);
    MioHookInst(mgrCls, NSSelectorFromString(@"imageNamed:warnIfNotFound:"), (IMP)mio_p_imgNamedWarn, (IMP *)&g_orig_imgNamedWarn);
    MioHookInst(mgrCls, NSSelectorFromString(@"imageNamed:alpha:"), (IMP)mio_p_imgNamedAlpha, (IMP *)&g_orig_imgNamedAlpha);
    MioHookInst(mgrCls, NSSelectorFromString(@"imageNamed:Alpha:Suffix:"), (IMP)mio_p_imgNamedAlphaSuffix, (IMP *)&g_orig_imgNamedAlphaSuffix);
    MioHookInst(mgrCls, NSSelectorFromString(@"pathOfResNamed:"), (IMP)mio_p_pathOfRes, (IMP *)&g_orig_pathOfRes);
    MioHookInst(objc_getClass("WCSVGImage"), NSSelectorFromString(@"imageNamed:fromConfig:"), (IMP)mio_p_svg, (IMP *)&g_orig_svgNamed);
    MioHookInst(objc_getMetaClass("UIImage"), NSSelectorFromString(@"imageWithContentsOfFile:"), (IMP)mio_p_imgContOfFile, (IMP *)&g_orig_imgContOfFile);
    Class dmCls = objc_getClass("DarkModeImageMgr");
    MioHookInst(dmCls, NSSelectorFromString(@"darkModeImageForImage:"), (IMP)mio_p_darkForImg, (IMP *)&g_orig_darkForImg);
    MioHookInst(dmCls, NSSelectorFromString(@"lightModeImageForImage:"), (IMP)mio_p_lightForImg, (IMP *)&g_orig_lightForImg);
    MioHookInst(dmCls, NSSelectorFromString(@"registerPairWithLightImage:darkImage:"), (IMP)mio_p_registerPair, (IMP *)&g_orig_registerPair);
    MioP(@"═══ 探针安装完成 ═══");
}
