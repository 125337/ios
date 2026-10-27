#import "FontBeautifyWebView.h"
#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <substrate.h>
#import "../../Core/LogManager.h"
#import "FontBeautifyConfig.h"

// ── 自定义 scheme handler：把本机字体文件回吐给网页 ──
// 网页里 @font-face 指向 miofont://xxx，由本类提供字节流
@interface MioFontSchemeHandler : NSObject
@end

@implementation MioFontSchemeHandler

- (void)webView:(id)webView startURLSchemeTask:(id)task {
    @try {
        // WCR 反编译同款：URL 走 task.request.URL（task 上没有 URL 属性）
        NSURLRequest *req = ((NSURLRequest *(*)(id, SEL))objc_msgSend)(task, NSSelectorFromString(@"request"));
        NSURL *url = req.URL;
        NSString *path = [FontBeautifyConfig shared].fontBeautifyFilePath;
        NSData *data = path.length ? [NSData dataWithContentsOfFile:path] : nil;
        if (data.length == 0) {
            // WCR 同款：读不到文件回 404 错误，让网页走字体回退
            NSError *err = [NSError errorWithDomain:@"MioFont" code:404 userInfo:nil];
            ((void (*)(id, SEL, id))objc_msgSend)(task, NSSelectorFromString(@"didFailWithError:"), err);
            WPLog(@"FontBeautify", @"[WEB] 字体文件读取失败 → didFailWithError 404");
            return;
        }
        WPLog(@"FontBeautify", @"[WEB] ✓ 网页请求字体 %@ → 回吐 %lu 字节", path.lastPathComponent, (unsigned long)data.length);
        NSHTTPURLResponse *resp = [[NSHTTPURLResponse alloc]
            initWithURL:url
               statusCode:200
              HTTPVersion:@"HTTP/1.1"
             headerFields:@{ @"Content-Type": @"font/ttf",
                             @"Content-Length": [NSString stringWithFormat:@"%lu", (unsigned long)data.length],
                             @"Access-Control-Allow-Origin": @"*",
                             @"Cache-Control": @"no-cache" }];
        ((void (*)(id, SEL, id))objc_msgSend)(task, NSSelectorFromString(@"didReceiveResponse:"), resp);
        ((void (*)(id, SEL, id))objc_msgSend)(task, NSSelectorFromString(@"didReceiveData:"), data);
        // 收尾选择器运行时探测：WCR 反编译发的是 didFinish（此运行时的
        // WKURLSchemeTaskImpl 不认公开协议的 didFinishLoading），有则优先
        SEL finishSel = NSSelectorFromString(@"didFinish");
        if ([(id)task respondsToSelector:finishSel]) {
            ((void (*)(id, SEL))objc_msgSend)(task, finishSel);
        } else {
            SEL fallbackSel = NSSelectorFromString(@"didFinishLoading");
            if ([(id)task respondsToSelector:fallbackSel]) {
                ((void (*)(id, SEL))objc_msgSend)(task, fallbackSel);
            } else {
                WPLog(@"FontBeautify", @"[WEB] ⚠️ didFinish/didFinishLoading 均不可用");
            }
        }
    } @catch (NSException *e) {
        WPLog(@"FontBeautify", @"[WEB] scheme task exception: %@", e);
    }
}

- (void)webView:(id)webView stopURLSchemeTask:(id)task {
    // 一次性小响应，无需取消逻辑
}

@end

// ── WKWebView init hook：注册 scheme + 注入 @font-face 样式 ──

static IMP g_orig_wkInit = NULL;

static NSString * const kFontJS =
    @"(function(){"
    "try{"
    "var s=document.createElement('style');"
    "s.textContent=\"@font-face{font-family:'MioCustomFont';src:url('miofont://local/font.ttf') format('truetype');}"
    "*{font-family:'MioCustomFont' !important;}\";"
    "(document.head||document.documentElement).appendChild(s);"
    "}catch(e){}"
    "})();";

static id repl_wkInit(id self, SEL _cmd, CGRect frame, id config) {
    // 每次建 WebView 时检查开关（切换开关后新页面立即生效）
    FontBeautifyConfig *cfg = [FontBeautifyConfig shared];
    if (cfg.enableFontBeautify && cfg.fontBeautifyFilePath.length > 0) {
        @try {
            if (!config) {
                config = ((id (*)(id, SEL))objc_msgSend)(objc_getClass("WKWebViewConfiguration"), NSSelectorFromString(@"alloc"));
                config = ((id (*)(id, SEL))objc_msgSend)(config, NSSelectorFromString(@"init"));
            }
            SEL handlerSel = NSSelectorFromString(@"setURLSchemeHandler:forURLScheme:");
            if ([config respondsToSelector:handlerSel]) {
                id handler = [[MioFontSchemeHandler alloc] init];
                ((void (*)(id, SEL, id, NSString *))objc_msgSend)(config, handlerSel, handler, @"miofont");
            }
            // 注入样式：documentEnd 挂载（晚于页面样式表，等特异性 !important 后写者胜）
            Class scriptCls = objc_getClass("WKUserScript");
            SEL scriptSel = NSSelectorFromString(@"initWithSource:injectionTime:forMainFrameOnly:");
            WPLog(@"FontBeautify", @"[WEB] 注入 webview config=%@ scheme=%@ script=%@",
                  NSStringFromClass([config class]),
                  [config respondsToSelector:handlerSel] ? @"OK" : @"不支持",
                  (scriptCls && [scriptCls instancesRespondToSelector:scriptSel]) ? @"OK" : @"不支持");
            if (scriptCls && [scriptCls instancesRespondToSelector:scriptSel]) {
                id script = ((id (*)(id, SEL, NSString *, NSInteger, BOOL))objc_msgSend)(
                    ((id (*)(id, SEL))objc_msgSend)(scriptCls, NSSelectorFromString(@"alloc")),
                    scriptSel, kFontJS, 1 /* atDocumentEnd */, NO);
                id ucc = ((id (*)(id, SEL))objc_msgSend)(config, NSSelectorFromString(@"userContentController"));
                ((void (*)(id, SEL, id))objc_msgSend)(ucc, NSSelectorFromString(@"addUserScript:"), script);
            }
        } @catch (NSException *e) {
            WPLog(@"FontBeautify", @"[WEB] inject exception: %@", e);
        }
    }
    return ((id (*)(id, SEL, CGRect, id))g_orig_wkInit)(self, _cmd, frame, config);
}

@implementation FontBeautifyWebView

+ (void)install {
    Class wkCls = objc_getClass("WKWebView");
    SEL initSel = NSSelectorFromString(@"initWithFrame:configuration:");
    if (!wkCls || ![wkCls instancesRespondToSelector:initSel]) {
        WPLog(@"FontBeautify", @"[WEB] WKWebView initWithFrame:configuration: 不存在，未安装");
        return;
    }
    MSHookMessageEx(wkCls, initSel, (IMP)repl_wkInit, &g_orig_wkInit);
    WPLog(@"FontBeautify", @"[WEB] ✓ WKWebView init hook 已安装（@font-face + miofont:// scheme）");
}

@end
