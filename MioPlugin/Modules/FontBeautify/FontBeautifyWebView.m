#import "FontBeautifyWebView.h"
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "../../Core/LogManager.h"
#import "FontBeautifyConfig.h"

// ── 文章页字体注入（照抄锤子助手 CZHelper，0x0079aed8 安装器 + 0x007a0a88 注入函数实锤）──
// 触发点：hook WKWebView 自己的私有导航回调 "_didFinishLoadForMainFrame:" /
//        "_didFinishNavigation:"（WebKit 内部机制，不依赖 delegate，
//        每次主框架导航完成恰好一次，self 就是 WebView 本身）
// 注入方式：字体整体 base64 → JS 里 atob→Uint8Array→new FontFace(内存字节)
//        → document.fonts.add → 全局 font-family !important
//        （不用 data: URL —— 微信自装的 WKContentRuleList 会拦资源加载）

// base64 缓存：字体路径没变就不重复编码（11MB → 15MB 字符串）
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
    WPLog(@"FontBeautify", @"[WEB] 字体已编码 base64：%lu 字节", (unsigned long)data.length);
    return g_b64Font;
}

// 锤子助手同款 JS（0x007a0918 内嵌格式串还原；另加 fonts.check 防同页重复注册）
static NSString *MioFontJS(void) {
    NSString *b64 = MioFontBase64();
    if (!b64) return nil;
    return [NSString stringWithFormat:
        @"function mio642buf(b64){var bs=window.atob(b64);var len=bs.length;"
        "var bytes=new Uint8Array(len);for(var i=0;i<len;i++){bytes[i]=bs.charCodeAt(i);}"
        "return bytes.buffer;}"
        "(async()=>{try{"
        // 不能用 document.fonts.check 判重：字体族未注册时 check() 返回 true
        // （规范语义"现有字体可渲染"），会把首次注册也短路掉。改用页面级标志。
        "if(window.__mioFontDone)return;window.__mioFontDone=1;"
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

// ── 两个私有导航回调的替换函数（self = WKWebView 本身）──

static IMP g_orig_didFinishLoad = NULL;
static IMP g_orig_didFinishNav = NULL;

static void repl_didFinishLoadForMainFrame(id self, SEL _cmd, id navigation) {
    ((void (*)(id, SEL, id))g_orig_didFinishLoad)(self, _cmd, navigation);
    MioInjectIfEnabled(self);
}

static void repl_didFinishNavigation(id self, SEL _cmd, id navigation) {
    ((void (*)(id, SEL, id))g_orig_didFinishNav)(self, _cmd, navigation);
    MioInjectIfEnabled(self);
}

@implementation FontBeautifyWebView

+ (void)install {
    Class wkCls = objc_getClass("WKWebView");
    if (!wkCls) {
        WPLog(@"FontBeautify", @"[WEB] WKWebView 不存在，未安装");
        return;
    }
    SEL sel1 = NSSelectorFromString(@"_didFinishLoadForMainFrame:");
    SEL sel2 = NSSelectorFromString(@"_didFinishNavigation:");
    BOOL ok1 = [wkCls instancesRespondToSelector:sel1];
    BOOL ok2 = [wkCls instancesRespondToSelector:sel2];
    if (ok1) {
        MSHookMessageEx(wkCls, sel1, (IMP)repl_didFinishLoadForMainFrame, &g_orig_didFinishLoad);
    }
    if (ok2) {
        MSHookMessageEx(wkCls, sel2, (IMP)repl_didFinishNavigation, &g_orig_didFinishNav);
    }
    WPLog(@"FontBeautify", @"[WEB] ✓ 锤子助手同款已安装：_didFinishLoadForMainFrame:%@ _didFinishNavigation:%@",
          ok1 ? @"✓" : @"✗", ok2 ? @"✓" : @"✗");
}

@end
