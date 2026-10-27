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

// 字体 data URL 缓存：路径不变不重复编码
static NSString *g_fontDataUrl = nil;
static NSString *g_fontDataUrlPath = nil;

static NSString *MioFontDataUrl(void) {
    NSString *path = [FontBeautifyConfig shared].fontBeautifyFilePath;
    if (path.length == 0) return nil;
    if (g_fontDataUrl && [g_fontDataUrlPath isEqualToString:path]) return g_fontDataUrl;
    NSData *data = [NSData dataWithContentsOfFile:path];
    if (data.length == 0) return nil;
    NSString *b64 = [data base64EncodedStringWithOptions:0];
    g_fontDataUrl = [NSString stringWithFormat:@"data:font/ttf;base64,%@", b64];
    g_fontDataUrlPath = path;
    WPLog(@"FontBeautify", @"[WEB] 字体已编码 data URL：%lu 字节", (unsigned long)data.length);
    return g_fontDataUrl;
}

// 注入 JS：FontFace 直接吃 data: URL（base64 由 WebKit 原生解码，避免
// JS 侧 atob + charCodeAt 千万级循环卡页面主线程）；文章页 CSP font-src
// 白名单含 data:（已抓头实锤），合规。已注册过则跳过，避免重复开销。
static NSString *MioFontJS(void) {
    NSString *url = MioFontDataUrl();
    if (!url) return nil;
    return [NSString stringWithFormat:
        @"(async()=>{try{"
        "if(document.fonts.check('12px MioCustomFont'))return;"
        "let f=new FontFace('MioCustomFont',\"url(%@)\");"
        "await f.load();document.fonts.add(f);"
        "let fs=document.createElement('style');"
        "fs.innerHTML=\"*{font-family:'MioCustomFont' !important;}\";"
        "(document.head||document.documentElement).appendChild(fs);"
        "}catch(e){}})()", url];
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
    NSValue *origBox = (NSValue *)objc_getAssociatedObject(object_getClass(self), "mioOrigDidFinish");
    IMP orig = origBox ? (IMP)origBox.pointerValue : NULL;
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
        objc_setAssociatedObject(cls, "mioOrigDidFinish", [NSValue valueWithPointer:orig], OBJC_ASSOCIATION_RETAIN);
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
