#import "FontBeautifyWebView.h"
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "../../Core/LogManager.h"
#import "FontBeautifyConfig.h"

// ── 文章页字体注入（照抄锤子助手 CZHelper 反编译实现）──
// 机制：字体文件整体 base64 → 内嵌进 JS（atob→Uint8Array→FontFace 内存注册）
//      → evaluateJavaScript 打进"已经活着"的 WebView → 全局 font-family !important
// 优点：完全免疫页面 CSP（evaluateJavaScript 不受管，FontFace 内存数据不过 font-src）
//      且能覆盖已存在的 WebView（scheme handler / WKUserScript 方案均覆盖不到）
// 触发点：hook setNavigationDelegate: 截获微信的代理对象，再在其
//      webView:didFinishNavigation: 上补一层（页面就绪后注入，与 CZ 同型）

// base64 缓存：字体路径没变就不重复编码（11MB → 15MB 字符串，编码不便宜）
static NSString *g_b64Font = nil;
static NSString *g_b64Path = nil;

static NSString *MioFontBase64(void) {
    NSString *path = [FontBeautifyConfig shared].fontBeautifyFilePath;
    if (path.length == 0) return nil;
    if (g_b64Font && [g_b64Path isEqualToString:path]) return g_b64Font;
    NSData *data = [NSData dataWithContentsOfFile:path];
    if (data.length == 0) return nil;
    g_b64Font = [data base64EncodedStringWithOptions:0];
    g_b64Path = path;
    WPLog(@"FontBeautify", @"[WEB] 字体已编码 base64：%lu 字节 → %lu 字符",
          (unsigned long)data.length, (unsigned long)g_b64Font.length);
    return g_b64Font;
}

// 锤子助手同款 JS 模板（函数名从 afont 改为 mio 前缀，逻辑一致）
static NSString *MioFontJS(void) {
    NSString *b64 = MioFontBase64();
    if (!b64) return nil;
    return [NSString stringWithFormat:
        @"function mio642buf(b64){var bs=window.atob(b64);var len=bs.length;"
        "var bytes=new Uint8Array(len);for(var i=0;i<len;i++){bytes[i]=bs.charCodeAt(i);}"
        "return bytes.buffer;}"
        "(async()=>{try{"
        "let f=new FontFace('MioCustomFont',mio642buf('%@'));"
        "await f.load();document.fonts.add(f);"
        "let fs=document.createElement('style');"
        "fs.innerHTML=\"*{font-family:'MioCustomFont' !important;}\";"
        "(document.head||document.documentElement).appendChild(fs);"
        "}catch(e){}})()", b64];
}

static void MioInjectIfEnabled(id webView) {
    @try {
        FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
        if (!cfg.enableFontBeautify || cfg.fontBeautifyFilePath.length == 0) return;
        NSString *js = MioFontJS();
        if (!js) return;
        ((void (*)(id, SEL, id, id))objc_msgSend)(
            webView, NSSelectorFromString(@"evaluateJavaScript:completionHandler:"), js, nil);
        WPLog(@"FontBeautify", @"[WEB] ✓ evaluateJavaScript 注入完成");
    } @catch (NSException *e) {
        WPLog(@"FontBeautify", @"[WEB] inject exception: %@", e);
    }
}

// ── hook setNavigationDelegate: 捕获微信的导航代理 ──

static IMP g_orig_setNavDelegate = NULL;

// 已挂钩的代理类集合（一个类只挂一次；orig IMP 存在类的关联对象上，
// 支持微信使用多个不同代理类的情况）
static NSMutableSet *g_hookedClasses = nil;

static id repl_didFinishNavigation(id self, SEL _cmd, id webView, id navigation) {
    // 调原实现（页面正常加载完成）
    IMP orig = (IMP)objc_getAssociatedObject(object_getClass(self), "mioOrigDidFinish");
    if (orig) ((void (*)(id, SEL, id, id))orig)(self, _cmd, webView, navigation);
    // 注入字体（开关关闭时 MioInjectIfEnabled 内部直接跳过）
    MioInjectIfEnabled(webView);
    return nil;
}

static id repl_setNavigationDelegate(id self, SEL _cmd, id delegate) {
    id result = ((id (*)(id, SEL, id))g_orig_setNavDelegate)(self, _cmd, delegate);
    @try {
        if (!delegate) return result;
        FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
        if (!cfg.enableFontBeautify || cfg.fontBeautifyFilePath.length == 0) return result;

        if (!g_hookedClasses) g_hookedClasses = [NSMutableSet set];
        Class cls = object_getClass(delegate);
        if ([g_hookedClasses containsObject:cls]) return result;

        SEL sel = NSSelectorFromString(@"webView:didFinishNavigation:");
        Method m = class_getInstanceMethod(cls, sel);
        if (!m) {
            WPLog(@"FontBeautify", @"[WEB] 代理类 %@ 无 didFinishNavigation，跳过", NSStringFromClass(cls));
            [g_hookedClasses addObject:cls]; // 标记已检查，避免重复探测
            return result;
        }
        IMP orig = method_getImplementation(m);
        objc_setAssociatedObject(cls, "mioOrigDidFinish", (__bridge id)(void *)orig, OBJC_ASSOCIATION_RETAIN);
        MSHookMessageEx(cls, sel, (IMP)repl_didFinishNavigation, NULL);
        [g_hookedClasses addObject:cls];
        WPLog(@"FontBeautify", @"[WEB] ✓ 已挂钩代理类 %@ 的 didFinishNavigation", NSStringFromClass(cls));
    } @catch (NSException *e) {
        WPLog(@"FontBeautify", @"[WEB] setNavDelegate exception: %@", e);
    }
    return result;
}

@implementation FontBeautifyWebView

+ (void)install {
    Class wkCls = objc_getClass("WKWebView");
    SEL sel = NSSelectorFromString(@"setNavigationDelegate:");
    if (!wkCls || ![wkCls instancesRespondToSelector:sel]) {
        WPLog(@"FontBeautify", @"[WEB] WKWebView setNavigationDelegate: 不存在，未安装");
        return;
    }
    MSHookMessageEx(wkCls, sel, (IMP)repl_setNavigationDelegate, &g_orig_setNavDelegate);
    WPLog(@"FontBeautify", @"[WEB] ✓ 锤子助手同款注入已安装（base64 内嵌 + evaluateJavaScript）");
}

@end
