#import "MomentsDualPanel.h"
#import <WebKit/WebKit.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "MomentsConfig.h"
#import "MioDualInboxVC.h"
#import "MioDualMediaService.h"
#import "MioDualTimelineStore.h"
#import "MioDualFeedBridge.h"
#import "MioDualDiagHUD.h"

#pragma mark - 图片服务（WKURLSchemeTask 读本地媒体文件，WCMAssetHandler 同职责）

// 媒体路径注册/解析全在 MioDualMediaService（MD5 稳定 key + 持久化 + itemID 反查）。
// 零破图架构：任何请求分支都返回有效图片响应——
//   ① 注册路径文件在 → 缩放返回真图（99% 常态）
//   ② 文件不在/读图失败 → 1x1 透明 PNG（HTTP 200，<img> 物理上不产生 onerror，
//      破图标不可能出现）+ 触发 WCMediaDownloader（微信原生管线：CDN+解密+落盘）
//      → 轮询文件到位 → mediaReadyForKey 通知 JS 重载该 img（二次请求命中 ①）
//   ③ 数据项不可得/下载超时 → 透明图为终态（卡片灰底占位，干净不破图）
// didFailWithError 全部移除——didFail 是破图标的唯一来源。
@interface MioDualSchemeHandler : NSObject <WKURLSchemeHandler>
@end
@implementation MioDualSchemeHandler

// 1x1 透明 PNG（硬编码字节，后台线程随时可用）
static NSData *MioDualPlaceholderPNG(void) {
    static NSData *d;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        NSString *b64 = @"iVBORw0KGgoAAAANSUhEUgAAAAEAAAABCAYAAAAfFcSJAAAADUlEQVR42mNkYPhfDwAChwGA60e6kgAAAABJRU5ErkJggg==";
        d = [[NSData alloc] initWithBase64EncodedString:b64 options:0];
    });
    return d;
}

// 渲染层备图（kickDownload/MioDualMediaItemForPath）已迁 MioDualMediaService
// ensureMediaForKey:——WCM exportImage 同构：备图是推送上屏（渲染）的职责，
// handler 只管读文件（WCMAssetHandler 实证同款纯读，文件不在即占位响应）

- (void)webView:(WKWebView *)webView startURLSchemeTask:(id<WKURLSchemeTask>)task {
    // key 取 path 末段（?r= cache-bust 参数在 query，不进 pathComponents）
    NSString *key = nil;
    for (NSString *comp in [task.request.URL.pathComponents reverseObjectEnumerator]) {
        if (comp.length && ![comp isEqualToString:@"/"]) { key = comp; break; }
    }
    // 文件名白名单 [A-Za-z0-9_] 且不以 _ 开头（WCMAssetHandler 实证同款），防路径穿越
    static NSPredicate *nameOK;
    static dispatch_once_t oncePred;
    dispatch_once(&oncePred, ^{
        nameOK = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", @"^[A-Za-z0-9][A-Za-z0-9_]*$"];
    });
    NSString *path = (key.length && nameOK && [nameOK evaluateWithObject:key])
        ? [[MioDualMediaService shared] resolveKey:key] : nil;
    if (!path.length) {
        // 文件缺失：透明图立即响应（下载触发归渲染层 ensureMediaForKey:）
        [self servePlaceholder:task];
        return;
    }
    NSValue *taskRef = [NSValue valueWithNonretainedObject:task];   // 取消标记（stop 与响应都在主线程比对）
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        UIImage *img = [UIImage imageWithContentsOfFile:path];
        if (!img) {
            // 文件在校验后半路被清/写一半：回占位（绝不 didFail）
            [self servePlaceholder:task];
            return;
        }
        [self serveScaledImage:img task:task ref:taskRef];
    });
}

// 占位响应（主线程提交；no-store 防 WebKit 缓存透明图挡住二次请求的真图）
- (void)servePlaceholder:(id<WKURLSchemeTask>)task {
    NSData *data = MioDualPlaceholderPNG();
    dispatch_async(dispatch_get_main_queue(), ^{
        NSMutableSet *cancelled = [self cancelledTasks];
        if ([cancelled containsObject:[NSValue valueWithNonretainedObject:task]]) {
            [cancelled removeObject:[NSValue valueWithNonretainedObject:task]];
            return;
        }
        NSHTTPURLResponse *resp = [[NSHTTPURLResponse alloc]
                                   initWithURL:task.request.URL
                                   statusCode:200
                                   HTTPVersion:@"HTTP/1.1"
                                   headerFields:@{@"Content-Type": @"image/png",
                                                  @"Content-Length": [NSString stringWithFormat:@"%lu", (unsigned long)data.length],
                                                  @"Cache-Control": @"no-store"}];
        [task didReceiveResponse:resp];
        [task didReceiveData:data];
        [task didFinish];
    });
}

// 解码后按列宽缩放返回（WCMAssetHandler 同款：不回原图，单图内存几MB→几十KB），
// 主线程提交（含取消检查）
- (void)serveScaledImage:(UIImage *)img task:(id<WKURLSchemeTask>)task ref:(NSValue *)taskRef {
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
            [self servePlaceholder:task];
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

#pragma mark - 内置双列瀑布流页面（纯静态，无格式化注入）

// 双列朋友圈页面（小红书式瀑布流，布局回归浏览器文档流）：
// 两列 flex 容器（.col）各自流式堆叠，卡片宽 100% 自适应，新卡按两列真实高度取短列
// 插入（colH 估高决策 + rAF 读 offsetHeight 校准）——顶部插入/删除/过滤全部由文档流
// 自然重排，不再有手写坐标引擎（colOf 仅记录分列决策；measuredH/绝对定位已删）。
// 滚动中（scrollY>600）到达的新帖暂存 pendingFresh 并弹「N 条新动态」浮标，回顶自动插入
// ——防滚动跳变（原生同款）；下拉刷新必然在顶部，新帖即时可见。
// dataKey 整条 JSON 去重保留（增量 DOM 卡片复用不重建）；aspect-ratio 预锁（--aspect 变量）。
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
"#grid { display:flex; gap:12px; padding:2px 14px 20px; align-items:flex-start; }"
".col { flex:1; min-width:0; display:flex; flex-direction:column; gap:12px; }"
".card { background:var(--card-bg); border-radius:19px; overflow:hidden; contain:layout paint style; box-shadow:var(--shadow); }"
"#newTip { position:fixed; top:64px; left:50%; transform:translateX(-50%); background:var(--pill); backdrop-filter:blur(10px); padding:7px 16px; border-radius:17px; font-size:12px; color:#fff; z-index:40; display:none; }"
".card:active { opacity:0.75; }"
".card.text-only .card-info { min-height:214px; }"
".card-media { width:100%; aspect-ratio:var(--aspect,1); position:relative; background:var(--control); overflow:hidden; }"
".card-media::after { content:''; position:absolute; inset:0; z-index:3; pointer-events:none;"
"background:linear-gradient(100deg,transparent 32%,rgba(255,255,255,.32) 50%,transparent 68%);"
"transform:translateX(-100%); animation:mioshimmer 1.5s ease-in-out 3; }"
"@keyframes mioshimmer { to { transform:translateX(100%); } }"
".card-media img { width:100%; height:100%; display:block; object-fit:cover; position:relative; z-index:2; }"
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
"#staleTag { position:fixed; left:50%; bottom:28px; transform:translateX(-50%); z-index:150; background:rgba(255,204,0,.92); color:#5a4a00; font-size:12px; padding:5px 14px; border-radius:14px; display:none; box-shadow:0 2px 12px rgba(0,0,0,.14); white-space:nowrap; }"
"@media (prefers-color-scheme:dark) {"
":root { --bg-color:#000; --card-bg:#1C1C1E; --text-main:#F5F5F7; --secondary:#AEAEB2; --tertiary:#98989D; --control:#2C2C2E; --glass:rgba(20,20,23,.76); --button-glass:rgba(70,70,78,.42); --glass-edge:rgba(255,255,255,.1); --glass-highlight:rgba(255,255,255,.16); --pill:rgba(125,125,135,.38); --shadow:none; --icon-fill:#CCC; }"
".top-bar h1 { color:#F5F5F7; } .avatar { background:#2A2A2A; } .card-media img { background:#242424; } .card-media::after { background:linear-gradient(100deg,transparent 32%,rgba(255,255,255,.12) 50%,transparent 68%); }"
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
"<div id=\"grid\"><div class=\"col\" id=\"c0\"></div><div class=\"col\" id=\"c1\"></div></div>"
"<div id=\"newTip\" style=\"display:none\"></div>"
"<div id=\"empty\" style=\"display:none\">暂无内容，下拉刷新</div>"
"<div id=\"staleTag\">快照内容 · 更新中</div>"
"<script>"
"(function(){"
"var HEART='<svg viewBox=\"0 0 24 24\"><path d=\"M12 21.35l-1.45-1.32C5.4 15.36 2 12.28 2 8.5 2 5.42 4.42 3 7.5 3c1.74 0 3.41.81 4.5 2.09C13.09 3.81 14.76 3 16.5 3 19.58 3 22 5.42 22 8.5c0 3.78-3.4 6.86-8.55 11.54L12 21.35z\"/></svg>';"
"var BUB='<svg viewBox=\"0 0 24 24\"><path d=\"M20 2H4c-1.1 0-2 .9-2 2v18l4-4h14c1.1 0 2-.9 2-2V4c0-1.1-.9-2-2-2zm0 14H6l-2 2V4h16v12z\"/></svg>';"
"var PLAY='<svg viewBox=\"0 0 24 24\" width=\"10\" height=\"10\" fill=\"currentColor\"><path d=\"M8 5v14l11-7z\"/></svg>';"
"var AV='data:image/svg+xml;utf8,<svg xmlns=\"http://www.w3.org/2000/svg\" fill=\"%23ddd\"><rect width=\"100\" height=\"100\"/></svg>';"
"var grid=document.getElementById('grid'),empty=document.getElementById('empty'),pullTip=document.getElementById('pull');"
"var cols=[document.getElementById('c0'),document.getElementById('c1')],newTip=document.getElementById('newTip');"
"var cards={},ratios={},colOf={},ALL=[],byId={},stale=false,q='',tab='all',colH=[0,0],pendingFresh=[];"
"function fmtTime(t){if(!t)return '';var d=new Date(t*1000),n=new Date();"
"var p=function(x){return x<10?'0'+x:''+x;};var hm=p(d.getHours())+':'+p(d.getMinutes());"
"var sd=function(a,b){return a.getFullYear()==b.getFullYear()&&a.getMonth()==b.getMonth()&&a.getDate()==b.getDate();};"
"var y=new Date(n.getTime()-86400000);"
"if(sd(d,n))return '今天 '+hm;if(sd(d,y))return '昨天 '+hm;"
"var md=(d.getMonth()+1)+'月'+d.getDate()+'日';"
"return d.getFullYear()==n.getFullYear()?md:d.getFullYear()+'年'+md;}"
"function el(t,c){var e=document.createElement(t);if(c)e.className=c;return e;}"
"function stat(svg,n){return '<div class=\"stat\">'+svg+' '+(n||0)+'</div>';}"
"function calib(){requestAnimationFrame(function(){colH[0]=cols[0].offsetHeight;colH[1]=cols[1].offsetHeight;});}"
"function createCard(item){"
"var card=el('div','card');card.dataset.id=item.id;card.parts={};"
"if(item.img){"
"var media=el('div','card-media');"
"var img=el('img');img.loading='lazy';img.decoding='async';img.dataset.miokey=item.img.split('/').pop();"
"img.onload=function(){if(!ratios[item.id]&&img.naturalWidth>0){ratios[item.id]=img.naturalWidth/img.naturalHeight;media.style.setProperty('--aspect',String(ratios[item.id]));calib();}};"
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
"if(item.img){var s=card.parts.img.getAttribute('src');if(s!==item.img){card.parts.img.dataset.fb='';card.parts.img.src=item.img;}}"
"card.className=item.img?'card':'card text-only';"
"card.parts.tt.className='title'+((!item.img||item.isLargeText)?' large':'');"
"card.parts.tt.textContent=item.content||'';"
"card.parts.tt.style.display=item.content?'':'none';"
"var avSrc=item.avatar||AV;if(card.parts.av.getAttribute('src')!==avSrc)card.parts.av.src=avSrc;"
"card.parts.nm.textContent=item.name||'';"
"card.parts.rt.innerHTML='<span style=\"font-size:12px;color:#999;\">'+fmtTime(item.time)+'</span>'+stat(HEART,item.likes)+stat(BUB,item.cmt);"
"}"
"function render(){"
"var list=visibleList(),keep={},idx={};"
"list.forEach(function(it,i){keep[it.id]=1;idx[it.id]=i;});"
"Object.keys(cards).forEach(function(id){if(!keep[id]){cards[id].remove();delete cards[id];delete colOf[id];}});"
"list.forEach(function(it){"
"var c=cards[it.id];"
"if(!c){"
"c=createCard(it);cards[it.id]=c;"
"var col=colOf[it.id];"
"if(col===undefined){col=colH[0]<=colH[1]?0:1;colOf[it.id]=col;var r=it.ratio>0?it.ratio:(ratios[it.id]||1);colH[col]+=(window.innerWidth-40)/2/r+96;}"
"var ce=cols[col],ref=null;"
"for(var ch=ce.firstChild;ch;ch=ch.nextSibling){if(idx[ch.dataset.id]!==undefined&&idx[ch.dataset.id]>idx[it.id]){ref=ch;break;}}"
"ce.insertBefore(c,ref);"
"}"
"updateCard(c,it);"
"});"
"empty.style.display=list.length?'none':'block';"
"calib();"
"}"
"function updateStale(){var t=document.getElementById('staleTag');if(t)t.style.display=stale?'block':'none';}"
"window.__mioFeedSnapshot=function(p){"
"ALL=(p&&p.items)||[];byId={};"
"for(var i=0;i<ALL.length;i++)byId[ALL[i].id]=ALL[i];"
"stale=ALL.length>0;render();updateStale();};"
"window.__mioFeedPatch=function(p){"
"var ups=(p&&p.upsert)||[],rm=(p&&p.remove)||[],i,id;"
"for(i=0;i<rm.length;i++)delete byId[rm[i]];"
"var known={};for(i=0;i<ALL.length;i++)known[ALL[i].id]=1;"
"var fresh=[];"
"for(i=0;i<ups.length;i++){id=ups[i].id;if(!byId[id]&&!known[id])fresh.push(id);byId[id]=ups[i];}"
"if(p&&p.order){ALL=p.order.map(function(k){return byId[k];}).filter(Boolean);}"
"else{ALL=ALL.map(function(it){return byId[it.id];}).filter(Boolean);"
"for(i=fresh.length-1;i>=0;i--)ALL.unshift(byId[fresh[i]]);}"
"stale=false;updateStale();"
"if((window.scrollY||0)>600&&tab==='all'&&!q){"
"for(i=0;i<fresh.length;i++){if(pendingFresh.indexOf(fresh[i])<0)pendingFresh.push(fresh[i]);}"
"if(pendingFresh.length){newTip.style.display='block';newTip.textContent=pendingFresh.length+' 条新动态';}"
"}"
"render();};"
"window.__mioMediaReady=function(k){var i=document.querySelector('img[data-miokey=\"'+k+'\"]');if(i)i.src='mioimg://local/'+k+'?r='+(Date.now());};"
"window.__mioDiag=function(){try{var g=document.getElementById('grid');var sus=[];"
"for(var i=0;i<ALL.length&&sus.length<4;i++){var it=ALL[i];var c=(it.content||'');"
"if(c.indexOf('<')>=0||c.indexOf('http')>=0||(!it.img&&it.imgCount>0)){"
"sus.push({i:i,c:c.substring(0,160),img:(it.img||'').substring(0,40),n:it.imgCount,v:!!it.isVideo,lt:!!it.isLargeText});}}"
"return JSON.stringify({all:ALL.length,cards:Object.keys(cards).length,dom:g?g.childElementCount:-1,"
"emp:(document.getElementById('empty')||{style:{}}).style.display||'?',sus:sus});}catch(e){return 'DIAG-EXC:'+e.message;}};"
"function visibleList(){"
"var l=ALL;"
"if(pendingFresh.length&&tab==='all'&&!q)l=l.filter(function(it){return pendingFresh.indexOf(it.id)<0;});"
"if(tab==='liked')l=l.filter(function(it){return it.liked>0;});"
"if(q)l=l.filter(function(it){return ((it.name||'')+' '+(it.content||'')).toLowerCase().indexOf(q)>=0;});"
"return l;"
"}"
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
"newTip.addEventListener('click',function(){window.scrollTo({top:0,behavior:'smooth'});});"
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
"var moreActive=false;"
"function mioTailCheck(){"
"var nb=window.scrollY+window.innerHeight>document.body.scrollHeight-600;"
"if(nb&&!moreActive){moreActive=true;mio({action:'more'});}"
"else if(!nb&&moreActive){moreActive=false;mio({action:'tailStop'});}}"
"window.addEventListener('scroll',function(){"
"updateSearchChrome();"
"if(pendingFresh.length&&(window.scrollY||0)<100){pendingFresh=[];newTip.style.display='none';render();}"
"mioTailCheck();"
"},{passive:true});"
"mioTailCheck();"
"})();"
"</script>"
"</body>"
"</html>"
);

#pragma mark - 面板 VC

@interface MomentsDualPanel () <WKScriptMessageHandler, WKNavigationDelegate>
@property (nonatomic, strong) WKWebView *webView;
@property (nonatomic, assign) BOOL pageReady;
@end

static char kDualPanelAssocKey;

// 常驻面板（WCM showCachedFeed 同语义，根治「打开慢一步」）：
// Close 只摘视图不释放，WebView 已渲染态保留，重开秒显。发现页 VC 每次进入可能是
// 新实例，assoc 只当「开着」标记，常驻实例放进程级强持有；内存警告时降级置 nil。
static MomentsDualPanel *g_dualPanel = nil;
static __weak UIViewController *g_dualPanelHost = nil;

@implementation MomentsDualPanel

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

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
    // 页面就绪：挂推送桥 → 首推（快照秒显 + 增量 patch 全在 Bridge 内）
    [MioDualFeedBridge attachWebView:self.webView];
    [MioDualFeedBridge pushNow];
    [self updateBellBadge];
}

// 数据刷新为纯事件驱动：微信 timeline 变更 → onTimelineDataChanged hook
// （MomentsDualHook）→ MioDualFeedBridge notifyDataChanged（0.5s 尾沿防抖）→
// 行级 diff 增量推送。快照协议/让位轮询兜底见 MioDualFeedBridge。

- (void)dealloc {
    // addScriptMessageHandler 强持 self，必须解绑才能断开 webview→controller→webview 环
    [self.webView.configuration.userContentController removeScriptMessageHandlerForName:@"mio"];
}

// 内存警告兜底：系统吃紧时放弃常驻（WCM 同款边界），下次 Open 走冷建降级路径。
// 仅置 nil：dealloc 里 removeScriptMessageHandler 自动解绑，无泄漏
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    g_dualPanel = nil;
    [MioDualFeedBridge detachWebView];
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

#pragma mark JS 桥：面板交互

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
        // 进滚底区（WCMoments requestTimelineMore 同款语义）：启动 tail 自驱循环——
        // 循环主动重发 updateTimelineTail，不等滚动事件；新数据落库后推送上面板
        [[MioDualTimelineStore shared] loadTail];
        return;
    }
    if ([action isEqualToString:@"tailStop"]) {
        // 滚离底部：停 tail 循环（关面板 endSession 亦停）
        [[MioDualTimelineStore shared] stopTailLoop];
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
        // 数据由 InboxVC 自己拉（facade getAllMessages），此处只管 present/关闭
        UIViewController *host = self.hostVC;
        if (!host) return;
        MioDualInboxVC *vc = [[MioDualInboxVC alloc] init];
        UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
        nav.modalPresentationStyle = UIModalPresentationFullScreen;
        // 返回钮（WCM 真机同款：细 chevron 图标 + 灰字，非系统 back 粗箭头/非"‹"字符）
        UIButton *backBtn = [UIButton buttonWithType:UIButtonTypeSystem];
        backBtn.tintColor = [UIColor secondaryLabelColor];
        UIImage *chev = [UIImage systemImageNamed:@"chevron.left"];
        if (chev) [backBtn setImage:chev forState:UIControlStateNormal];
        [backBtn setTitle:@"  发现" forState:UIControlStateNormal];   // 两空格 ≈ WCM 箭头与文字间距
        [backBtn setTitleColor:[UIColor secondaryLabelColor] forState:UIControlStateNormal];
        backBtn.titleLabel.font = [UIFont systemFontOfSize:17];
        [backBtn addTarget:vc action:@selector(goBack) forControlEvents:UIControlEventTouchUpInside];
        [backBtn sizeToFit];
        UIBarButtonItem *back = [[UIBarButtonItem alloc] initWithCustomView:backBtn];
        vc.navigationItem.leftBarButtonItem = back;
        vc.navigationItem.title = @"消息";
        id obsPost = [[NSNotificationCenter defaultCenter]
            addObserverForName:@"MioDualInboxOpenPost" object:nil queue:NSOperationQueue.mainQueue
            usingBlock:^(__unused NSNotification *n) {
                if (self.hostVC) MioDualPanelClose(self.hostVC);
            }];
        vc.userOnDismiss = ^{
            [[NSNotificationCenter defaultCenter] removeObserver:obsPost];
        };
        [host presentViewController:nav animated:YES completion:nil];
        return;
    }
    if (![action isEqualToString:@"refresh"]) return;
    // 下拉刷新 → updateTimelineHead（探针实证：主动调用成功，等价下拉）；
    // 新数据落库后 onTimelineDataChanged hook 自动推面板
    [[MioDualTimelineStore shared] refreshHead];
}


@end

#pragma mark - 面板挂载/移除（WCMoments coverHost/restoreChrome 复刻）

void MioDualPanelOpen(UIViewController *host) {
    if ([objc_getAssociatedObject(host, &kDualPanelAssocKey) isKindOfClass:[MomentsDualPanel class]]) return;
    // 常驻复用优先：有常驻实例直接复用（WebView 已渲染、数据已在 JS），无则新建
    MomentsDualPanel *panel = g_dualPanel;
    if (!panel) {
        panel = [[MomentsDualPanel alloc] init];
        g_dualPanel = panel;
    }
    g_dualPanelHost = host;
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
    [MioDualDiagHUD attachToView:host.view];   // 诊断悬浮窗（数据源深度/tail 状态）
    // 复用时 pageReady 已 YES：挂推送桥立即推上屏（无变化时 Bridge 内 no-op，零等待首屏）；
    // 首开 pageReady NO：此处不推，didFinishNavigation 后自动首推
    if (panel.pageReady) {
        [MioDualFeedBridge attachWebView:panel.webView];
        [MioDualFeedBridge pushNow];
        [panel updateBellBadge];
    }
    // 开会话 + 本地库重载（beginTimeline + reloadTimelineDataItems）：count 立即非零；
    // 入口预热已 begin 过，此处再调幂等无害
    [[MioDualTimelineStore shared] beginSession];
    // 会话内 updateTimelineHead 才真正走网络：拉新帖（不阻塞显示）
    [[MioDualTimelineStore shared] refreshHead];
    WPLog(@"Dual", @"[Dual] panel opened (%@) on %@", panel.pageReady ? @"reuse" : @"cold",
          NSStringFromClass([host class]));
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
    [[MioDualTimelineStore shared] endSession];   // endTimeline 关会话（对齐 WCM；不影响原生页自身）
    [MioDualFeedBridge detachWebView];   // 不可见即停推送目标；常驻实例仍活着，重开复用
    [MioDualDiagHUD detach];   // 诊断悬浮窗随面板摘除
    [panel.view removeFromSuperview];   // 只摘视图：g_dualPanel 强持有，WebView 已渲染态保留（秒显）
    // WCMoments restoreChrome：还原发现页 chrome
    host.edgesForExtendedLayout = panel.prevEdges;
    host.extendedLayoutIncludesOpaqueBars = panel.prevOpaqueBars;
    if (!panel.prevNavHidden) {
        [host.navigationController setNavigationBarHidden:NO animated:NO];
    }
    WPLog(@"Dual", @"[Dual] panel hidden (instance kept)");
}

void MioDualPanelToggle(UIViewController *host) {
    if (MioDualPanelIsOpen(host)) MioDualPanelClose(host);
    else MioDualPanelOpen(host);
}

BOOL MioDualPanelIsOpen(UIViewController *host) {
    return [objc_getAssociatedObject(host, &kDualPanelAssocKey) isKindOfClass:[MomentsDualPanel class]];
}
