#import "MomentsDualPanel.h"
#import <WebKit/WebKit.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "MomentsConfig.h"
#import "MioDualInboxVC.h"

#pragma mark - 图片服务（WKURLSchemeTask 读本地媒体文件，WCMAssetHandler 同职责）

// 路径表：pushFeed 时把微信本地媒体路径注册成 mioimg://local/<key>，
// handler 按 key 回读。start/stop 与注册均在主线程（WebKit scheme 回调在主线程），
// 无需加锁；响应体在后台队列读盘后回主线程提交。
static NSMutableDictionary<NSString *, NSString *> *gDualPaths = nil;

static NSLock *MioDualPathsLock(void) {
    static NSLock *lock = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ lock = [[NSLock alloc] init]; });
    return lock;
}

static NSString *MioDualRegisterMediaPath(NSString *path) {
    static NSUInteger counter = 0;
    MioDualPathsLock();
    if (!gDualPaths) gDualPaths = [NSMutableDictionary dictionary];
    counter++;
    NSString *key = [NSString stringWithFormat:@"f%lu", (unsigned long)counter];
    gDualPaths[key] = path;
    MioDualPathsLock();
    return key;
}

static NSString *MioDualLookupMediaPath(NSString *key) {
    MioDualPathsLock();
    NSString *p = gDualPaths[key];
    MioDualPathsLock();
    return p;
}

@interface MioDualSchemeHandler : NSObject <WKURLSchemeHandler>
@end
@implementation MioDualSchemeHandler

- (void)webView:(WKWebView *)webView startURLSchemeTask:(id<WKURLSchemeTask>)task {
    NSString *key = task.request.URL.lastPathComponent;
    // 文件名白名单 [A-Za-z0-9_] 且不以 _ 开头（WCMAssetHandler 实证同款），防路径穿越
    static NSPredicate *nameOK;
    static dispatch_once_t oncePred;
    dispatch_once(&oncePred, ^{
        nameOK = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", @"^[A-Za-z0-9][A-Za-z0-9_]*$"];
    });
    NSString *path = (key.length && nameOK && [nameOK evaluateWithObject:key])
        ? MioDualLookupMediaPath(key) : nil;
    if (!path.length) {
        [task didFailWithError:[NSError errorWithDomain:NSURLErrorDomain
                                                   code:NSURLErrorFileDoesNotExist
                                               userInfo:nil]];
        return;
    }
    NSValue *taskRef = [NSValue valueWithNonretainedObject:task];   // 取消标记（stop 与响应都在主线程比对）
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        // 解码后按列宽缩放返回（WCMAssetHandler 同款：不回原图，单图内存几MB→几十KB）
        UIImage *img = [UIImage imageWithContentsOfFile:path];
        if (!img) {
            [self finishFail:task ref:taskRef code:NSURLErrorCannotOpenFile];
            return;
        }
        CGFloat scale = [UIScreen mainScreen].scale;
        CGFloat target = MAX(512, ([UIScreen mainScreen].bounds.size.width - 40) * scale / 2 + 64);
        CGFloat maxSide = MAX(img.size.width, img.size.height);
        if (maxSide > target) {
            CGFloat k = target / maxSide;
            UIGraphicsBeginImageContextWithOptions(CGSizeMake(img.size.width * k, img.size.height * k), NO, scale);
            [img drawInRect:CGRectMake(0, 0, img.size.width * k, img.size.height * k)];
            UIImage *small = UIGraphicsGetImageFromCurrentImageContext();
            UIGraphicsEndImageContext();
            if (small) img = small;
        }
        NSData *data = UIImageJPEGRepresentation(img, 0.8);
        dispatch_async(dispatch_get_main_queue(), ^{
            // stopURLSchemeTask 已到必须先检查：对已停 task 回任何回调
            // WebKit 直接断言崩溃（"called after the task was stopped"）
            NSMutableSet *cancelled = [self cancelledTasks];
            if ([cancelled containsObject:taskRef]) {
                [cancelled removeObject:taskRef];
                return;
            }
            if (!data.length) {
                [self finishFail:task ref:taskRef code:NSURLErrorCannotOpenFile];
                return;
            }
            NSHTTPURLResponse *resp = [[NSHTTPURLResponse alloc]
                                       initWithURL:task.request.URL
                                       statusCode:200
                                       HTTPVersion:@"HTTP/1.1"
                                       headerFields:@{@"Content-Type": @"image/jpeg",
                                                      @"Content-Length": [NSString stringWithFormat:@"%lu", (unsigned long)data.length],
                                                      @"Cache-Control": @"max-age=86400"}];
            [task didReceiveResponse:resp];
            [task didReceiveData:data];
            [task didFinish];
        });
    });
}

// 后台线程结果统一走主线程回调（含取消检查）
- (void)finishFail:(id<WKURLSchemeTask>)task ref:(NSValue *)taskRef code:(NSInteger)code {
    dispatch_async(dispatch_get_main_queue(), ^{
        NSMutableSet *cancelled = [self cancelledTasks];
        if ([cancelled containsObject:taskRef]) {
            [cancelled removeObject:taskRef];
            return;
        }
        [task didFailWithError:[NSError errorWithDomain:NSURLErrorDomain code:code userInfo:nil]];
    });
}

- (void)webView:(WKWebView *)webView stopURLSchemeTask:(id<WKURLSchemeTask>)task {
    [[self cancelledTasks] addObject:[NSValue valueWithNonretainedObject:task]];
}

// 已取消任务表（主线程专用）
- (NSMutableSet<NSValue *> *)cancelledTasks {
    static NSMutableSet *set = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ set = [NSMutableSet set]; });
    return set;
}

@end

#pragma mark - facade 数据访问（阶段0 探针实证的链路）

// facade：MMContext activeUserContext getService:WCFacade.class（WCMoments _Service 同款；
// 8.0.60 的 MMContext 无 activeUserContext 时回退 currentContext）。单例稳定，缓存命中。
static id MioDualFacade(void) {
    static id cached = nil;
    if (cached) return cached;
    Class fCls = objc_getClass("WCFacade");
    Class ctxCls = objc_getClass("MMContext");
    if (!fCls || !ctxCls) return nil;
    id ctx = nil;
    SEL activeSel = NSSelectorFromString(@"activeUserContext");
    SEL curSel = NSSelectorFromString(@"currentContext");
    if ([ctxCls respondsToSelector:activeSel]) {
        ctx = ((id(*)(id, SEL))objc_msgSend)(ctxCls, activeSel);
    }
    if (!ctx && [ctxCls respondsToSelector:curSel]) {
        ctx = ((id(*)(id, SEL))objc_msgSend)(ctxCls, curSel);
    }
    if (!ctx || ![ctx respondsToSelector:@selector(getService:)]) return nil;
    cached = ((id(*)(id, SEL, Class))objc_msgSend)(ctx, @selector(getService:), fCls);
    return cached;
}

static NSArray *MioDualTimelineCache(id facade) {
    if (!facade) return nil;
    id mgr = nil;
    SEL mgrSel = NSSelectorFromString(@"timelineMgr");
    if ([facade respondsToSelector:mgrSel]) {
        mgr = ((id(*)(id, SEL))objc_msgSend)(facade, mgrSel);
    }
    if (!mgr) return nil;
    SEL cacheSel = NSSelectorFromString(@"getCache");
    if (![mgr respondsToSelector:cacheSel]) return nil;
    return ((id(*)(id, SEL))objc_msgSend)(mgr, cacheSel);
}

// WCDataItem 的 createtime/likeCount/commentCount 是标量 getter（ULL/uint），
// 禁止用 id 接裸 msgSend 返回值（WXSafeIntegerGet 同款）：x0 原始整数被当指针
// 发 respondsToSelector 必 SIGSEGV（127.log 点双列闪退实证）。
// 阶段0 探针实证的 KVC 装箱路径：valueForKey 自动装箱 NSNumber，未知 key @try 兜住。
static long long MioDualScalarGet(id obj, NSString *key, long long def) {
    if (!obj || !key.length) return def;
    @try {
        id v = [obj valueForKey:key];
        if ([v isKindOfClass:[NSNumber class]]) return [(NSNumber *)v longLongValue];
    } @catch (NSException *e) {
    }
    return def;
}

#pragma mark - 内置双列瀑布流页面（纯静态，无格式化注入）

// 双列朋友圈页面（增量渲染版，机制对齐 WCMoments _WCMHTML 反编译实证）：
// 绝对定位网格 + aspect-ratio 预锁（--aspect 变量）+ cards/colOf Map 增量更新（DOM 永不重建）
// + measuredHeight 缓存 + 列归属终身不变 + dataKey 整条 JSON 去重——根治滑动跳顶。
// 顶栏对齐 WCMoments：玻璃拟态 header + 滚动收缩搜索框（--collapse 16/72px 联动 + focus 钉住）
// + 铃铛未读角标（getSnsMessageCount）+ 菜单浮层（刷新/发文字帖/切回）。
// 按钮交互（原生方法 8.0.78 头文件实证）：铃铛=切回原生（消息入口在原生页）；＋=openAlbumAndPublish:
// 发图文帖；菜单·发文字朋友圈=openAlbumAndPublishText:（duck-typing，push 页在面板之上，返回面板还在）。
// 已接交互：搜索框=过滤已加载缓存；「全部动态/我赞过的」=tab 过滤（likeFlag）；
// 下拉刷新=facade updateTimelineHead；滚底=facade updateTimelineTail 翻页。
// 死 UI（无数据支撑，点击无反应）：tab「我的关注」、大标题（WCM 点标题进我的相册，需路由后补）。
// ratio：原生媒体宽高（item.ratio）优先，onload naturalWidth 兜底，都无则 1:1 占位。
// 注意：整段为单行拼接，JS 内禁用 // 行注释，双引号一律 \" 转义。
static NSString * const kDualPageHTML = @(
"<!DOCTYPE html>"
"<html lang=\"zh-CN\">"
"<head>"
"<meta charset=\"utf-8\">"
"<meta name=\"viewport\" content=\"width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no, viewport-fit=cover\">"
"<title>朋友圈瀑布流</title>"
"<style>"
":root { color-scheme:light dark; --bg-color:#F2F2F7; --card-bg:#FFFFFF; --text-main:#1C1C1E; --secondary:#63636A; --tertiary:#8E8E93; --control:#E5E5EA; --glass:rgba(242,242,247,.76); --button-glass:rgba(255,255,255,.5); --glass-edge:rgba(255,255,255,.28); --glass-highlight:rgba(255,255,255,.58); --pill:rgba(255,255,255,.72); --shadow:0 2px 12px rgba(0,0,0,.035); --icon-fill:#333; }"
"* { margin:0; padding:0; box-sizing:border-box; -webkit-tap-highlight-color:transparent; }"
"body { background:var(--bg-color); font-family:-apple-system,\"PingFang SC\",\"Helvetica Neue\",sans-serif; font-size:15px; -webkit-font-smoothing:antialiased; padding-top:env(safe-area-inset-top); overflow-x:hidden; color:var(--text-main); }"
".header { position:sticky; top:0; z-index:100; padding:calc(env(safe-area-inset-top) + 12px) 18px 14px; background:transparent; isolation:isolate; --collapse:0; }"
".header::before { content:''; position:absolute; left:0; right:0; top:0; height:calc(env(safe-area-inset-top) + 212px); transform:translateY(calc(-56px * var(--collapse))); z-index:-1; pointer-events:none; background:var(--glass); -webkit-backdrop-filter:blur(12px) saturate(120%); backdrop-filter:blur(12px) saturate(120%); -webkit-mask-image:linear-gradient(to bottom,#000 calc(100% - 86px),transparent); mask-image:linear-gradient(to bottom,#000 calc(100% - 86px),transparent); }"
".top-bar { display:flex; justify-content:space-between; align-items:center; min-height:50px; position:relative; z-index:6; }"
".top-bar h1 { font-size:34px; font-weight:700; letter-spacing:-1.25px; line-height:1.15; transform:scale(calc(1 - .16 * var(--collapse))); transform-origin:left center; }"
".tools { display:flex; align-items:center; gap:9px; transform:translateX(calc(-51px * var(--collapse))); }"
".tool { width:42px; height:42px; border-radius:50%; display:flex; justify-content:center; align-items:center; position:relative; background:linear-gradient(145deg,var(--glass-highlight),transparent 72%),var(--button-glass); border:1px solid var(--glass-edge); box-shadow:inset 0 .5px 0 rgba(255,255,255,.4),inset 0 -.5px 0 rgba(255,255,255,.12),0 3px 14px rgba(0,0,0,.02); transition:transform .18s ease; }"
".tool:active { transform:scale(0.94); }"
".tool svg { width:19px; height:19px; fill:var(--text-main); }"
".badge { position:absolute; right:-3px; top:-4px; min-width:16px; height:16px; padding:0 4px; border-radius:9px; background:#FF3B30; color:#fff; font-size:10px; font-weight:600; line-height:16px; text-align:center; box-shadow:0 0 0 2px var(--bg-color); box-sizing:border-box; }"
".badge.hide { display:none; }"
".search-slot { position:relative; z-index:4; height:calc(56px * (1 - var(--collapse))); overflow:visible; }"
".search { position:absolute; right:0; top:calc(16px - 62px * var(--collapse)); width:calc(100% * (1 - var(--collapse)) + 42px * var(--collapse)); height:calc(40px + 2px * var(--collapse)); display:flex; align-items:center; gap:calc(8px * (1 - var(--collapse))); background:linear-gradient(155deg,var(--glass-highlight),transparent 65%),var(--button-glass); border:1px solid var(--glass-edge); border-radius:22px; padding:0 calc(12px - var(--collapse) * 1px); box-shadow:inset 0 .5px 0 rgba(255,255,255,.4),0 3px 14px rgba(0,0,0,.015); cursor:text; }"
".search svg { width:18px; height:18px; fill:var(--tertiary); flex:none; transform:rotate(calc(-12deg * (1 - var(--collapse)))); }"
".search input { flex:1; min-width:0; height:100%; border:0; outline:0; background:none; font-size:16px; letter-spacing:-.25px; color:var(--text-main); opacity:calc(1 - var(--collapse)); }"
".search input::placeholder { color:var(--tertiary); }"
".str::before { transition:transform .28s cubic-bezier(.22,.8,.25,1); }"
".str .search-slot { transition:height .28s cubic-bezier(.22,.8,.25,1); }"
".str .search { transition:width .28s cubic-bezier(.22,.8,.25,1),top .28s cubic-bezier(.22,.8,.25,1),height .28s cubic-bezier(.22,.8,.25,1),padding .28s cubic-bezier(.22,.8,.25,1); }"
".str .search svg { transition:transform .32s cubic-bezier(.22,.8,.25,1); }"
".str .search input { transition:opacity .2s ease; }"
".str .tools { transition:transform .28s cubic-bezier(.22,.8,.25,1); }"
".str .top-bar h1 { transition:transform .28s cubic-bezier(.22,.8,.25,1); }"
"#menu { position:absolute; top:calc(env(safe-area-inset-top) + 12px + 50px); right:18px; z-index:200; width:190px; background:rgba(255,255,255,.82); -webkit-backdrop-filter:blur(24px) saturate(145%); backdrop-filter:blur(24px) saturate(145%); border:1px solid var(--glass-edge); border-radius:22px; padding:6px; box-shadow:inset 0 1px 0 rgba(255,255,255,.33),0 12px 40px rgba(0,0,0,.125); overflow:hidden; display:none; }"
"#menu.show { display:block; }"
".mi { padding:13px 12px; font-size:15px; color:var(--text-main); display:block; border-radius:10px; }"
".mi:active { background:var(--control); }"
".tabs { display:flex; background:var(--button-glass); border:1px solid var(--glass-edge); padding:3px; border-radius:22px; margin-top:13px; position:relative; box-shadow:inset 0 .5px 0 rgba(255,255,255,.33),0 3px 14px rgba(0,0,0,.015); }"
".tabs::before { content:''; position:absolute; left:3px; top:3px; bottom:3px; width:calc((100% - 6px) / 3); border-radius:19px; background:linear-gradient(150deg,var(--glass-highlight),transparent 75%),var(--pill); border:1px solid var(--glass-edge); box-shadow:inset 0 .5px 0 rgba(255,255,255,.53),0 2px 9px rgba(0,0,0,.03); transform:translateX(calc(var(--ti,0) * 100%)); transition:transform .23s cubic-bezier(.22,.8,.25,1); z-index:0; pointer-events:none; }"
".tab { flex:1; min-height:30px; text-align:center; line-height:30px; border-radius:19px; font-size:13px; font-weight:500; color:var(--text-main); position:relative; z-index:1; white-space:nowrap; transition:color .16s ease,transform .16s ease; }"
".tab:active { transform:scale(0.96); }"
".tab.active { font-weight:650; background:transparent; }"
"#grid { position:relative; }"
".card { position:absolute; background:var(--card-bg); border-radius:19px; overflow:hidden; contain:layout paint style; box-shadow:var(--shadow); }"
".card:active { opacity:0.75; }"
".card.text-only .card-info { min-height:214px; }"
".card-media { width:100%; aspect-ratio:var(--aspect,1); position:relative; background:var(--control); overflow:hidden; }"
".card-media img { width:100%; height:100%; display:block; object-fit:cover; }"
".mtag { position:absolute; right:8px; bottom:8px; background:rgba(0,0,0,0.3); color:white; font-size:10px; padding:3px 6px; border-radius:4px; backdrop-filter:blur(4px); display:flex; align-items:center; gap:2px; }"
".card-info { padding:12px 12px 13px; display:flex; flex-direction:column; flex:1; }"
".title { font-size:14px; color:var(--text-main); font-weight:500; letter-spacing:-.15px; line-height:1.55; margin-bottom:13px; display:-webkit-box; -webkit-line-clamp:4; -webkit-box-orient:vertical; overflow:hidden; white-space:pre-wrap; overflow-wrap:anywhere; }"
".title.large { font-size:20px; font-weight:600; letter-spacing:-.5px; line-height:1.5; margin-bottom:24px; -webkit-line-clamp:6; }"
".user-row { display:flex; align-items:center; justify-content:space-between; margin-top:auto; }"
".user-left { display:flex; align-items:center; gap:7px; overflow:hidden; min-width:0; }"
".avatar { width:26px; height:26px; border-radius:50%; object-fit:cover; background:var(--control); flex-shrink:0; }"
".name { font-size:12px; color:var(--secondary); white-space:nowrap; overflow:hidden; text-overflow:ellipsis; font-weight:500; }"
".user-right { display:flex; align-items:center; gap:8px; flex-shrink:0; margin-left:auto; font-variant-numeric:tabular-nums; }"
".stat { display:flex; align-items:center; gap:4px; font-size:11px; color:var(--secondary); }"
".stat svg { width:12px; height:12px; fill:var(--secondary); }"
"#empty { text-align:center; color:#b3b3b3; font-size:13px; padding:70px 0; }"
"#pull { position:fixed; top:-30px; left:0; right:0; text-align:center; font-size:12px; color:#9b9b9b; transition:top .2s; z-index:99; pointer-events:none; }"
"@media (prefers-color-scheme:dark) {"
":root { --bg-color:#000; --card-bg:#1C1C1E; --text-main:#F5F5F7; --secondary:#AEAEB2; --tertiary:#98989D; --control:#2C2C2E; --glass:rgba(20,20,23,.76); --button-glass:rgba(70,70,78,.42); --glass-edge:rgba(255,255,255,.1); --glass-highlight:rgba(255,255,255,.16); --pill:rgba(125,125,135,.38); --shadow:none; --icon-fill:#CCC; }"
".top-bar h1 { color:#F5F5F7; } .avatar { background:#2A2A2A; } .card-media img { background:#242424; }"
"#menu { background:rgba(28,28,30,.84); box-shadow:inset 0 1px 0 rgba(255,255,255,.12),0 12px 42px rgba(0,0,0,.31); }"
"}"
"</style>"
"</head>"
"<body>"
"<div id=\"pull\">刷新中…</div>"
"<div class=\"header\" id=\"hd\">"
"<div class=\"top-bar\">"
"<h1>朋友圈</h1>"
"<div class=\"tools\">"
"<div class=\"tool\" id=\"ibBell\"><svg viewBox=\"0 0 24 24\"><path d=\"M12 22c1.1 0 2-.9 2-2h-4c0 1.1.9 2 2 2zm6-6v-5c0-3.07-1.64-5.64-4.5-6.32V4c0-.83-.67-1.5-1.5-1.5s-1.5.67-1.5 1.5v.68C7.63 5.36 6 7.92 6 11v5l-2 2v1h16v-1l-2-2z\"/></svg><span class=\"badge hide\" id=\"bellBadge\"></span></div>"
"<div class=\"tool\" id=\"ibAdd\"><svg viewBox=\"0 0 24 24\"><path d=\"M19 13h-6v6h-2v-6H5v-2h6V5h2v6h6v2z\"/></svg></div>"
"<div class=\"tool\" id=\"ibMore\"><svg viewBox=\"0 0 24 24\"><path d=\"M6 10c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2zm12 0c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2zm-6 0c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2z\"/></svg></div>"
"</div>"
"</div>"
"<div class=\"search-slot\" id=\"sw\"><div class=\"search\" id=\"sb\">"
"<svg viewBox=\"0 0 24 24\"><path d=\"M15.5 14h-.79l-.28-.27C15.41 12.59 16 11.11 16 9.5 16 5.91 13.09 3 9.5 3S3 5.91 3 9.5 5.91 16 9.5 16c1.61 0 3.09-.59 4.23-1.57l.27.28v.79l5 4.99L20.49 19l-4.99-5zm-6 0C7.01 14 5 11.99 5 9.5S7.01 5 9.5 5 14 7.01 14 9.5 11.99 14 9.5 14z\"/></svg>"
"<input id=\"q\" placeholder=\"搜索朋友或动态\">"
"</div></div>"
"<div class=\"tabs\">"
"<div class=\"tab active\" id=\"tab-all\">全部动态</div>"
"<div class=\"tab\" id=\"tab-liked\">我赞过的</div>"
"<div class=\"tab\" id=\"tab-follow\">我的关注</div>"
"</div>"
"<div id=\"menu\">"
"<div class=\"mi\" id=\"mi-native\">打开微信朋友圈</div>"
"<div class=\"mi\" id=\"mi-refresh\">刷新动态</div>"
"<div class=\"mi\" id=\"mi-text\">发文字朋友圈</div>"
"</div>"
"</div>"
"<div id=\"grid\"></div>"
"<div id=\"empty\" style=\"display:none\">暂无内容，下拉刷新</div>"
"<script>"
"(function(){"
"var HEART='<svg viewBox=\"0 0 24 24\"><path d=\"M12 21.35l-1.45-1.32C5.4 15.36 2 12.28 2 8.5 2 5.42 4.42 3 7.5 3c1.74 0 3.41.81 4.5 2.09C13.09 3.81 14.76 3 16.5 3 19.58 3 22 5.42 22 8.5c0 3.78-3.4 6.86-8.55 11.54L12 21.35z\"/></svg>';"
"var BUB='<svg viewBox=\"0 0 24 24\"><path d=\"M20 2H4c-1.1 0-2 .9-2 2v18l4-4h14c1.1 0 2-.9 2-2V4c0-1.1-.9-2-2-2zm0 14H6l-2 2V4h16v12z\"/></svg>';"
"var PLAY='<svg viewBox=\"0 0 24 24\" width=\"10\" height=\"10\" fill=\"currentColor\"><path d=\"M8 5v14l11-7z\"/></svg>';"
"var AV='data:image/svg+xml;utf8,<svg xmlns=\"http://www.w3.org/2000/svg\" fill=\"%23ddd\"><rect width=\"100\" height=\"100\"/></svg>';"
"var grid=document.getElementById('grid'),empty=document.getElementById('empty'),pullTip=document.getElementById('pull');"
"var cards={},ratios={},colOf={},ALL=[],q='',tab='all',colW=0,layoutFrame=0;"
"function fmtTime(t){if(!t)return '';var d=new Date(t*1000),n=new Date();"
"var p=function(x){return x<10?'0'+x:''+x;};var hm=p(d.getHours())+':'+p(d.getMinutes());"
"var sd=function(a,b){return a.getFullYear()==b.getFullYear()&&a.getMonth()==b.getMonth()&&a.getDate()==b.getDate();};"
"var y=new Date(n.getTime()-86400000);"
"if(sd(d,n))return '今天 '+hm;if(sd(d,y))return '昨天 '+hm;"
"var md=(d.getMonth()+1)+'月'+d.getDate()+'日';"
"return d.getFullYear()==n.getFullYear()?md:d.getFullYear()+'年'+md;}"
"function el(t,c){var e=document.createElement(t);if(c)e.className=c;return e;}"
"function stat(svg,n){return '<div class=\"stat\">'+svg+' '+(n||0)+'</div>';}"
"function scheduleLayout(){if(layoutFrame)return;layoutFrame=requestAnimationFrame(function(){layoutFrame=0;layoutCards();});}"
"function createCard(item){"
"var card=el('div','card');card.dataset.id=item.id;card.parts={};"
"if(item.img){"
"var media=el('div','card-media');"
"var img=el('img');img.loading='lazy';img.decoding='async';"
"img.onload=function(){if(!ratios[item.id]&&img.naturalWidth>0){ratios[item.id]=img.naturalWidth/img.naturalHeight;media.style.setProperty('--aspect',String(ratios[item.id]));card.dirty=1;scheduleLayout();}};"
"media.appendChild(img);card.appendChild(media);card.parts.media=media;card.parts.img=img;"
"if(item.isVideo){var vt=el('div','mtag');vt.innerHTML=PLAY+' 视频';media.appendChild(vt);}"
"else if(item.imgCount>1){var it2=el('div','mtag');it2.textContent=item.imgCount+'图';media.appendChild(it2);}"
"}"
"var info=el('div','card-info');"
"var tt=el('div','title');info.appendChild(tt);"
"var ur=el('div','user-row'),ul=el('div','user-left');"
"var av=el('img','avatar');ul.appendChild(av);"
"var nm=el('div','name');ul.appendChild(nm);"
"var rt=el('div','user-right');"
"ur.appendChild(ul);ur.appendChild(rt);info.appendChild(ur);card.appendChild(info);"
"card.parts={img:img||null,media:media||null,tt:tt,av:av,nm:nm,rt:rt};"
"return card;"
"}"
"function updateCard(card,item){"
"var key=JSON.stringify(item);if(card.dataKey===key)return;card.dataKey=key;"
"if(item.ratio>0&&!ratios[item.id])ratios[item.id]=item.ratio;"
"if(ratios[item.id]&&card.parts.media)card.parts.media.style.setProperty('--aspect',String(ratios[item.id]));"
"if(item.img){var s=card.parts.img.getAttribute('src');if(s!==item.img)card.parts.img.src=item.img;}"
"card.className=item.img?'card':'card text-only';"
"card.parts.tt.className='title'+((!item.img||item.isLargeText)?' large':'');"
"card.parts.tt.textContent=item.content||'';"
"card.parts.tt.style.display=item.content?'':'none';"
"var avSrc=item.avatar||AV;if(card.parts.av.getAttribute('src')!==avSrc)card.parts.av.src=avSrc;"
"card.parts.nm.textContent=item.name||'';"
"card.parts.rt.innerHTML='<span style=\"font-size:12px;color:#999;\">'+fmtTime(item.time)+'</span>'+stat(HEART,item.likes)+stat(BUB,item.cmt);"
"}"
"function render(){"
"var list=visibleList(),keep={};"
"list.forEach(function(it){keep[it.id]=1;});"
"Object.keys(cards).forEach(function(id){if(!keep[id]){cards[id].remove();delete cards[id];delete colOf[id];}});"
"list.forEach(function(it){var c=cards[it.id];if(!c){c=createCard(it);grid.appendChild(c);cards[it.id]=c;}updateCard(c,it);});"
"empty.style.display=list.length?'none':'block';"
"scheduleLayout();"
"}"
"function layoutCards(){"
"var list=Object.keys(cards).map(function(k){return cards[k];});"
"var w=(document.body.clientWidth-40)/2;"
"if(w!==colW){colW=w;list.forEach(function(c){c.dirty=1;});}"
"if(!list.length){grid.style.height='';return;}"
"list.forEach(function(c){if(c.dirty||!c.measuredH)c.style.width=w+'px';});"
"list.forEach(function(c){if(c.dirty||!c.measuredH){c.measuredH=Math.ceil(c.getBoundingClientRect().height);c.dirty=0;}});"
"var y0=2,y1=2;"
"list.forEach(function(c){var col=colOf[c.dataset.id];if(col===undefined){col=y0<=y1?0:1;colOf[c.dataset.id]=col;}"
"c.style.left=(14+col*(w+12))+'px';c.style.top=(col===0?y0:y1)+'px';"
"if(col===0)y0+=c.measuredH+12;else y1+=c.measuredH+12;});"
"var h=(Math.max(y0,y1)+20)+'px';if(grid.style.height!==h)grid.style.height=h;"
"}"
"function visibleList(){"
"var l=ALL;"
"if(tab==='liked')l=l.filter(function(it){return it.liked>0;});"
"if(q)l=l.filter(function(it){return ((it.name||'')+' '+(it.content||'')).toLowerCase().indexOf(q)>=0;});"
"return l;"
"}"
"window.__mioSetFeed=function(payload){ALL=(payload&&payload.items)||[];render();};"
"window.__mioSetBadge=function(n){var b=document.getElementById('bellBadge');"
"if(!b)return;if(n>0){b.textContent=n>99?'99+':n;b.classList.remove('hide');}else{b.classList.add('hide');}};"
"var qEl=document.getElementById('q');"
"qEl.addEventListener('input',function(){q=this.value.trim().toLowerCase();render();window.scrollTo(0,0);});"
"var hd=document.getElementById('hd'),menu=document.getElementById('menu'),sb=document.getElementById('sb');"
"function closeMenu(){menu.classList.remove('show');}"
"document.getElementById('tab-all').addEventListener('click',function(){"
"tab='all';this.classList.add('active');document.getElementById('tab-liked').classList.remove('active');"
"document.querySelector('.tabs').style.setProperty('--ti',0);"
"render();window.scrollTo(0,0);});"
"document.getElementById('tab-liked').addEventListener('click',function(){"
"tab='liked';this.classList.add('active');document.getElementById('tab-all').classList.remove('active');"
"document.querySelector('.tabs').style.setProperty('--ti',1);"
"render();window.scrollTo(0,0);});"
"var mio=function(o){window.webkit.messageHandlers.mio.postMessage(o);};"
"document.getElementById('ibMore').addEventListener('click',function(e){e.stopPropagation();menu.classList.toggle('show');});"
"document.getElementById('ibBell').addEventListener('click',function(){mio({action:'inbox'});});"
"document.getElementById('ibAdd').addEventListener('click',function(){mio({action:'publish'});});"
"sb.addEventListener('click',function(){"
"if(window.scrollY>72)window.scrollTo({top:0,behavior:'smooth'});"
"setTimeout(function(){qEl.focus();},90);});"
"document.getElementById('mi-refresh').addEventListener('click',function(){closeMenu();mio({action:'refresh'});});"
"document.getElementById('mi-text').addEventListener('click',function(){closeMenu();mio({action:'publishText'});});"
"document.getElementById('mi-native').addEventListener('click',function(){closeMenu();mio({action:'back'});});"
"document.addEventListener('click',function(e){if(!menu.contains(e.target))closeMenu();});"
"var searchPinned=false;"
"qEl.addEventListener('focus',function(){searchPinned=true;setCollapse(0);});"
"qEl.addEventListener('blur',function(){searchPinned=false;setCollapse((window.scrollY||0)>=72?1:0);});"
"var curC=0,trTimer=0;"
"function setCollapse(v){"
"if(v===curC)return;"
"hd.classList.add('str');"
"if(trTimer)clearTimeout(trTimer);"
"trTimer=setTimeout(function(){hd.classList.remove('str');},380);"
"curC=v;hd.style.setProperty('--collapse',v);"
"}"
"function updateSearchChrome(){"
"var y=window.scrollY||0;"
"setCollapse(searchPinned?0:(y>=72?1:(y<=16?0:curC)));"
"}"
"var tsy=0,pulled=false;"
"document.addEventListener('touchstart',function(e){tsy=e.touches[0].clientY;},{passive:true});"
"document.addEventListener('touchmove',function(e){"
"var dy=e.touches[0].clientY-tsy;"
"if(!pulled&&window.scrollY<=0&&dy>80){pulled=true;pullTip.style.top='0px';"
"mio({action:'refresh'});}"
"},{passive:true});"
"document.addEventListener('touchend',function(){setTimeout(function(){pulled=false;if(pullTip.style.top==='0px')pullTip.style.top='-30px';},2500);},false);"
"var moreLock=false;"
"window.addEventListener('scroll',function(){"
"updateSearchChrome();"
"if(moreLock)return;"
"if(window.scrollY+window.innerHeight>document.body.scrollHeight-600){"
"moreLock=true;mio({action:'more'});"
"setTimeout(function(){moreLock=false;},2000);}"
"},{passive:true});"
"})();"
"</script>"
"</body>"
"</html>"
);

#pragma mark - 面板 VC

@interface MomentsDualPanel () <WKScriptMessageHandler, WKNavigationDelegate>
@property (nonatomic, strong) WKWebView *webView;
@property (nonatomic, strong) NSTimer *pollTimer;
@property (nonatomic, copy) NSString *lastJson;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSString *> *avatarCache;
@property (nonatomic, assign) BOOL pageReady;
- (void)stopPolling;
@end

static char kDualPanelAssocKey;

@implementation MomentsDualPanel

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    self.avatarCache = [NSMutableDictionary dictionary];

    WKWebViewConfiguration *cfg = [[WKWebViewConfiguration alloc] init];
    [cfg setURLSchemeHandler:[[MioDualSchemeHandler alloc] init] forURLScheme:@"mioimg"];
    [cfg.userContentController addScriptMessageHandler:self name:@"mio"];

    self.webView = [[WKWebView alloc] initWithFrame:self.view.bounds configuration:cfg];
    self.webView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.webView.scrollView.bounces = YES;
    self.webView.navigationDelegate = self;
    self.webView.backgroundColor = [UIColor colorWithWhite:0.93 alpha:1];
    [self.view addSubview:self.webView];

    [self.webView loadHTMLString:kDualPageHTML baseURL:nil];
}

- (void)webView:(WKWebView *)webView didFinishNavigation:(WKNavigation *)navigation {
    self.pageReady = YES;
    [self pushFeedNow];
}

// 轮询推数据：缓存由原生刷新（updateTimelineHead/后台同步）变更后 3s 内跟上面板。
// block 定时器 + weak self：面板被 Close 硬摘除时不会走 viewWillDisappear，
// 靠 stopPolling 兜底，防 runloop 持 timer→target 强持成僵尸
- (void)viewDidAppear:(BOOL)animated {
    [super viewDidAppear:animated];
    [self stopPolling];
    __weak typeof(self) wself = self;
    self.pollTimer = [NSTimer timerWithTimeInterval:3.0 repeats:YES block:^(NSTimer *t) {
        [wself pushFeedNow];
    }];
    [[NSRunLoop mainRunLoop] addTimer:self.pollTimer forMode:NSRunLoopCommonModes];
}

- (void)viewWillDisappear:(BOOL)animated {
    [super viewWillDisappear:animated];
    [self stopPolling];
}

- (void)stopPolling {
    [self.pollTimer invalidate];
    self.pollTimer = nil;
}

- (void)dealloc {
    [self.pollTimer invalidate];
    // addScriptMessageHandler 强持 self，必须解绑才能断开 webview→controller→webview 环
    [self.webView.configuration.userContentController removeScriptMessageHandlerForName:@"mio"];
}

#pragma mark 数据桥：WCDataItem → JSON → window.__mioSetFeed

- (void)pushFeedNow {
    if (!self.pageReady || !self.webView) return;
    [self updateBellBadge];
    NSMutableArray *arr = [NSMutableArray array];
    @try {
        NSArray *cache = MioDualTimelineCache(MioDualFacade());
        for (id item in cache) {
            if (arr.count >= 300) break;   // 上限 300：滚底翻页（updateTimelineTail）后 cache 超百条
            NSDictionary *d = [self itemDict:item];
            if (d) [arr addObject:d];
        }
    } @catch (NSException *e) {
        WPLog(@"Dual", @"[Dual] read cache error: %@", e);
    }
    NSData *data = [NSJSONSerialization dataWithJSONObject:@{@"items": arr} options:0 error:nil];
    if (!data) return;
    NSString *json = [[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding];
    // U+2028/2029 在 JS 字面量里是行终止符，JSONSerialization 不转义，直接 eval 会语法错误
    json = [json stringByReplacingOccurrencesOfString:@"\u2028" withString:@"\\u2028"];
    json = [json stringByReplacingOccurrencesOfString:@"\u2029" withString:@"\\u2029"];
    if ([json isEqualToString:self.lastJson]) return;   // 无变化不重渲（防滚动位置跳动）
    self.lastJson = json;
    [self.webView evaluateJavaScript:
        [NSString stringWithFormat:@"window.__mioSetFeed(%@);", json]
        completionHandler:nil];
}

// 铃铛角标：getSnsMessageCount（发现页头文件实证，朋友圈互动未读数；头文件声明返回 id）
// 点击铃铛 = 面板内消息列表（WCMoments openMessages 复刻）
- (void)updateBellBadge {
    UIViewController *host = self.hostVC;
    SEL cntSel = NSSelectorFromString(@"getSnsMessageCount");
    if (!host || ![host respondsToSelector:cntSel]) return;
    @try {
        id v = ((id(*)(id, SEL))objc_msgSend)(host, cntSel);
        NSInteger n = [v respondsToSelector:@selector(intValue)] ? [v intValue] : 0;
        [self.webView evaluateJavaScript:
            [NSString stringWithFormat:@"window.__mioSetBadge(%ld);", (long)n]
            completionHandler:nil];
    } @catch (NSException *e) {}
}

#pragma mark 消息页数据（WCMoments WCMInboxController 复刻，全静态实证）

// WCMoments 消息对象是 Call: 代理（duck-typing 命令总线，与 facade 同构），字段统一走动态分发
static id MioMsgCall(id msg, NSString *method) {
    if (!msg || method.length == 0) return nil;
    SEL call = NSSelectorFromString(@"Call:");
    if (![msg respondsToSelector:call]) return nil;
    @try {
        return ((id(*)(id, SEL, id))objc_msgSend)(msg, call, method);
    } @catch (NSException *e) { return nil; }
}

static NSString *MioCallStr(id msg, NSString *method) {
    id v = MioMsgCall(msg, method);
    if ([v isKindOfClass:[NSString class]]) return v;
    if ([v isKindOfClass:[NSNumber class]]) return [v stringValue];
    return nil;
}

// 消息数组解析（WCMInboxController 复刻）：字段优先真 getter（KVC），miss 走 Call: 代理；
// type 有真 getter 保留。type 1=赞 2/3/8=评论（changeCategory）。
// 帖子归属 dataItemUsrName，空则 facade getDataItemByID: 取真 WCDataItem（信息流已实证
// createtime/username 全小写可用），比逐字段戳代理更可靠。
- (NSArray<NSDictionary *> *)inboxItems {
    id facade = MioDualFacade();
    SEL allSel = NSSelectorFromString(@"getAllMessages");
    if (!facade || ![facade respondsToSelector:allSel]) return @[];
    NSArray *msgs = @[];
    @try {
        msgs = ((id(*)(id, SEL))objc_msgSend)(facade, allSel);
        if (![msgs isKindOfClass:[NSArray class]]) msgs = @[];
    } @catch (NSException *e) { return @[]; }

    NSString *selfUsr = WXSafeStringGet(WXGetSelfContact(), @"m_nsUsrName") ?: @"";
    SEL byIDSel = NSSelectorFromString(@"getDataItemByID:");
    NSMutableArray *arr = [NSMutableArray array];
    for (id msg in msgs) {
        if (arr.count >= 200) break;
        @try {
            NSString *actor = WXSafeStringGet(msg, @"username") ?: MioCallStr(msg, @"username") ?: @"";
            if ([actor isEqualToString:selfUsr]) continue;   // 自己的操作不进消息页（WCM 同款）
            NSInteger type = WXSafeIntegerGet(msg, @"type", 0);
            id objID = MioMsgCall(msg, @"objID") ?: [msg valueForKey:@"objID"];
            NSString *owner = MioCallStr(msg, @"dataItemUsrName") ?: @"";
            id dataItem = nil;
            if (owner.length == 0 && [facade respondsToSelector:byIDSel]) {
                // 帖主空 → objID 反查真 WCDataItem（isMine 兜底同款）
                dataItem = objID ? ((id(*)(id, SEL, id))objc_msgSend)(facade, byIDSel, objID) : nil;
                owner = WXSafeStringGet(dataItem, @"username") ?: @"";
            }
            NSString *text = WXSafeStringGet(msg, @"content") ?: MioCallStr(msg, @"content") ?: @"";
            id objIDStr = [objID isKindOfClass:NSString.class] ? objID : [NSString stringWithFormat:@"%@", objID ?: @""];
            [arr addObject:@{
                @"id": objIDStr,
                @"name": WXSafeStringGet(msg, @"nickname") ?: MioCallStr(msg, @"nickname") ?: actor,
                @"actor": actor,
                @"kind": (type == 1) ? @"like" : @"cmt",                // 1=赞 2/3/8=评论
                @"text": text,
                @"t": @([MioMsgCall(msg, @"createTime") longLongValue] ?: WXSafeIntegerGet(msg, @"createtime", 0)),
                @"mine": @([owner isEqualToString:selfUsr]),
                @"refSelf": @([MioCallStr(msg, @"refUserName") ?: @"" isEqualToString:selfUsr])}];
        } @catch (NSException *e) { continue; }
    }
    return arr;
}

- (NSDictionary *)itemDict:(id)item {
    if (!item) return nil;
    NSString *username = WXSafeStringGet(item, @"username") ?: @"";
    NSString *content = WXSafeStringGet(item, @"contentDesc") ?: @"";
    NSMutableArray *media = [NSMutableArray array];
    BOOL isVideo = NO;
    double ratio = 0;   // 宽/高，JS 预锁卡片高度防瀑布流跳动；拿不到留 0 由 JS onload 锁高
    @try {
        if ([item respondsToSelector:@selector(getMediaWraps)]) {
            NSArray *wraps = ((id(*)(id, SEL))objc_msgSend)(item, @selector(getMediaWraps));
            for (id wrap in wraps) {
                if (media.count >= 9) break;
                id mi = nil;
                if ([wrap respondsToSelector:@selector(mediaItem)]) {
                    mi = ((id(*)(id, SEL))objc_msgSend)(wrap, @selector(mediaItem));
                }
                NSString *src = [self mediaSrc:mi];
                if (src) [media addObject:@{@"src": src}];
                if (mi && !isVideo) {
                    // 视频条目 mediaItem 为 WCVideoMediaItem 类变体，类名匹配避开拼写差异
                    NSString *cls = NSStringFromClass([mi class]);
                    isVideo = [cls rangeOfString:@"ideo"].location != NSNotFound;
                }
                if (mi && media.count == 1 && ratio == 0) {
                    // 宽高 ivar 名未探针实证，KVC 失败即回落 JS onload 锁高
                    @try {
                        double w = [(NSNumber *)[mi valueForKey:@"m64_width"] doubleValue];
                        double h = [(NSNumber *)[mi valueForKey:@"m64_height"] doubleValue];
                        if (w > 1 && h > 1) ratio = w / h;
                    } @catch (NSException *e) {}
                }
            }
        }
    } @catch (NSException *e) {
        WPLog(@"Dual", @"[Dual] media read error: %@", e);
    }
    NSString *firstImg = media.firstObject[@"src"] ?: @"";
    return @{@"id": WXSafeStringGet(item, @"itemID") ?: @"",
             @"name": WXSafeStringGet(item, @"nickname") ?: username,
             @"avatar": [self avatarFor:username] ?: @"",
             @"time": @(MioDualScalarGet(item, @"createtime", 0)),
             @"likes": @(MioDualScalarGet(item, @"likeCount", 0)),
             @"cmt": @(MioDualScalarGet(item, @"commentCount", 0)),
             @"liked": @(MioDualScalarGet(item, @"likeFlag", 0)),
             @"content": content,
             @"img": firstImg,
             @"imgCount": @(media.count),
             @"isVideo": isVideo ? @YES : @NO,
             @"ratio": @(ratio),
             @"isLargeText": media.count ? @NO : @YES};
}

// 媒体源：本地路径（微信自带方法，探针实证可直接调）走 mioimg 服务，缺文件回落 CDN URL
- (NSString *)mediaSrc:(id)mi {
    if (!mi) return nil;
    SEL pathSels[4] = { @selector(getThumbImagePath), @selector(pathForPreview),
                        @selector(pathForData), @selector(pathForHdData) };
    for (int i = 0; i < 4; i++) {
        if (![mi respondsToSelector:pathSels[i]]) continue;
        NSString *p = ((id(*)(id, SEL))objc_msgSend)(mi, pathSels[i]);
        if ([p isKindOfClass:[NSString class]] && p.length > 0 &&
            [[NSFileManager defaultManager] fileExistsAtPath:p]) {
            return [NSString stringWithFormat:@"mioimg://local/%@", MioDualRegisterMediaPath(p)];
        }
    }
    NSString *url = WXSafeStringGet(mi, @"attachThumbUrl");
    if (url.length == 0) url = WXSafeStringGet(mi, @"dataUrl");
    return (url.length > 4 && [url hasPrefix:@"http"]) ? url : nil;
}

// 头像：按 wxid 走 CContactMgr 查（面板会话内缓存，避免 3s 轮询重复查询）
- (NSString *)avatarFor:(NSString *)wxid {
    if (wxid.length == 0) return nil;
    NSString *hit = self.avatarCache[wxid];
    if (hit) return hit;
    NSString *url = WXContactHeadImageURL(WXGetContactForWxid(wxid));
    if (url.length > 0) self.avatarCache[wxid] = url;
    return url;
}

#pragma mark JS 桥：下拉刷新

- (void)userContentController:(WKUserContentController *)userContentController
      didReceiveScriptMessage:(WKScriptMessage *)message {
    if (![message.body isKindOfClass:[NSDictionary class]]) return;
    NSDictionary *params = (NSDictionary *)message.body;
    NSString *action = params[@"action"];
    if ([action isEqualToString:@"back"]) {
        // 「…」圆钮：切回原生朋友圈（面板覆盖移除）。面板不挂 childVC，host 用弱引用存
        if (self.hostVC) MioDualPanelClose(self.hostVC);
        return;
    }
    if ([action isEqualToString:@"more"]) {
        // WCMoments requestTimelineMore 同款（反编译实证）：滚到底 → facade updateTimelineTail
        // 翻页拉更多，原生落 cache 后复查推送；与 updateTimelineHead 成对
        id facade = MioDualFacade();
        SEL tailSel = NSSelectorFromString(@"updateTimelineTail");
        if (facade && [facade respondsToSelector:tailSel]) {
            ((void(*)(id, SEL))objc_msgSend)(facade, tailSel);
        }
        [self scheduleFeedChecks];
        return;
    }
    if ([action isEqualToString:@"publish"] || [action isEqualToString:@"publishText"]) {
        // WCMoments publish 同款 duck-typing（反编译实证 publish → 调 host 原生方法）：
        // 发现页方法 openAlbumAndPublish:/openAlbumAndPublishText:（8.0.78 头文件实证）
        // 不关面板：push 的新页面在面板之上，返回时面板还在（体验连贯）
        UIViewController *host = self.hostVC;
        SEL sel = NSSelectorFromString(
            [action isEqualToString:@"publish"] ? @"openAlbumAndPublish:" : @"openAlbumAndPublishText:");
        if (host && [host respondsToSelector:sel]) {
            ((void(*)(id, SEL, id))objc_msgSend)(host, sel, nil);
        }
        return;
    }
    if ([action isEqualToString:@"inbox"]) {
        // 铃铛 → 原生消息页（WCMInboxController 原生复刻：present 全屏，导航栏「‹ 发现/消息」）
        UIViewController *host = self.hostVC;
        if (!host) return;
        MioDualInboxVC *vc = [[MioDualInboxVC alloc] initWithItems:[self inboxItems]];
        UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
        nav.modalPresentationStyle = UIModalPresentationFullScreen;
        UIBarButtonItem *back = [[UIBarButtonItem alloc] initWithTitle:@"‹ 发现"
                                            style:UIBarButtonItemStylePlain
                                           target:vc action:@selector(goBack)];
        vc.navigationItem.leftBarButtonItem = back;
        vc.navigationItem.title = @"消息";
        __weak typeof(self) ws = self;
        id obsReload = [[NSNotificationCenter defaultCenter]
            addObserverForName:@"MioDualInboxReload" object:nil queue:NSOperationQueue.mainQueue
            usingBlock:^(NSNotification *n) { [vc updateItems:[ws inboxItems]]; }];
        id obsPost = [[NSNotificationCenter defaultCenter]
            addObserverForName:@"MioDualInboxOpenPost" object:nil queue:NSOperationQueue.mainQueue
            usingBlock:^(__unused NSNotification *n) {
                if (ws.hostVC) MioDualPanelClose(ws.hostVC);
            }];
        vc.userOnDismiss = ^{
            [[NSNotificationCenter defaultCenter] removeObserver:obsReload];
            [[NSNotificationCenter defaultCenter] removeObserver:obsPost];
        };
        [host presentViewController:nav animated:YES completion:nil];
        return;
    }
    if (![action isEqualToString:@"refresh"]) return;
    id facade = MioDualFacade();
    SEL refreshSel = NSSelectorFromString(@"updateTimelineHead");
    if (facade && [facade respondsToSelector:refreshSel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, refreshSel);   // 探针实证：主动调用成功，等价下拉
    }
    [self scheduleFeedChecks];
}

// 刷新/翻页落库有时延：短周期复查推送（WCMoments syncPaging 状态机同款思想）
- (void)scheduleFeedChecks {
    __weak typeof(self) wself = self;
    for (NSNumber *delay in @[ @1.0, @2.5, @4.0 ]) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay.doubleValue * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{ [wself pushFeedNow]; });
    }
}

@end

#pragma mark - 面板挂载/移除（WCMoments coverHost/restoreChrome 复刻）

void MioDualPanelOpen(UIViewController *host) {
    if ([objc_getAssociatedObject(host, &kDualPanelAssocKey) isKindOfClass:[MomentsDualPanel class]]) return;
    MomentsDualPanel *panel = [[MomentsDualPanel alloc] init];
    objc_setAssociatedObject(host, &kDualPanelAssocKey, panel, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    panel.hostVC = host;
    // WCMoments coverHost 同款：capture chrome → host 全屏化 + 藏导航栏 → 面板 view 挂 host.view 顶层。
    // 面板随宿主 view 走（切 tab 自动消失）；不能上 window（childVC/独立 view 都会脱离 tab 生命周期）
    if (!panel.chromeCaptured) {
        panel.chromeCaptured = YES;
        panel.prevNavHidden = host.navigationController.isNavigationBarHidden;
        panel.prevEdges = host.edgesForExtendedLayout;
        panel.prevOpaqueBars = host.extendedLayoutIncludesOpaqueBars;
    }
    host.edgesForExtendedLayout = UIRectEdgeAll;
    host.extendedLayoutIncludesOpaqueBars = YES;
    [host.navigationController setNavigationBarHidden:YES animated:NO];
    panel.view.frame = host.view.bounds;
    panel.view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [host.view addSubview:panel.view];
    [host.view bringSubviewToFront:panel.view];
    // 发现页直接打开时朋友圈缓存可能为空（尚未进过朋友圈），先主动拉一次
    id facade = MioDualFacade();
    SEL refreshSel = NSSelectorFromString(@"updateTimelineHead");
    if (facade && [facade respondsToSelector:refreshSel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, refreshSel);
    }
    WPLog(@"Dual", @"[Dual] panel opened on %@", NSStringFromClass([host class]));
}

void MioDualPanelReassertChrome(UIViewController *host) {
    MomentsDualPanel *panel = objc_getAssociatedObject(host, &kDualPanelAssocKey);
    if (![panel isKindOfClass:[MomentsDualPanel class]]) return;
    host.edgesForExtendedLayout = UIRectEdgeAll;
    host.extendedLayoutIncludesOpaqueBars = YES;
    [host.navigationController setNavigationBarHidden:YES animated:NO];
}

void MioDualPanelClose(UIViewController *host) {
    MomentsDualPanel *panel = objc_getAssociatedObject(host, &kDualPanelAssocKey);
    if (![panel isKindOfClass:[MomentsDualPanel class]]) return;
    objc_setAssociatedObject(host, &kDualPanelAssocKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    // 硬摘除不会触发 viewWillDisappear（非容器协调移除），必须手动停轮询
    [panel stopPolling];
    [panel.view removeFromSuperview];
    // WCMoments restoreChrome：还原发现页 chrome
    host.edgesForExtendedLayout = panel.prevEdges;
    host.extendedLayoutIncludesOpaqueBars = panel.prevOpaqueBars;
    if (!panel.prevNavHidden) {
        [host.navigationController setNavigationBarHidden:NO animated:NO];
    }
    WPLog(@"Dual", @"[Dual] panel closed");
}

void MioDualPanelToggle(UIViewController *host) {
    if (MioDualPanelIsOpen(host)) MioDualPanelClose(host);
    else MioDualPanelOpen(host);
}

BOOL MioDualPanelIsOpen(UIViewController *host) {
    return [objc_getAssociatedObject(host, &kDualPanelAssocKey) isKindOfClass:[MomentsDualPanel class]];
}
