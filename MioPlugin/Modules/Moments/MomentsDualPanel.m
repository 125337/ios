#import "MomentsDualPanel.h"
#import <WebKit/WebKit.h>
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "MomentsConfig.h"

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

// 魔数嗅探 Content-Type（微信本地文件常无扩展名）
static NSString *MioDualSniffMime(NSData *d) {
    if (d.length < 12) return @"application/octet-stream";
    const unsigned char *b = (const unsigned char *)d.bytes;
    if (b[0] == 0xFF && b[1] == 0xD8) return @"image/jpeg";
    if (b[0] == 0x89 && b[1] == 0x50 && b[2] == 0x4E && b[3] == 0x47) return @"image/png";
    if (b[0] == 0x47 && b[1] == 0x49 && b[2] == 0x46) return @"image/gif";
    if (b[0] == 0x52 && b[1] == 0x49 && b[2] == 0x46 && b[3] == 0x46 &&
        b[8] == 0x57 && b[9] == 0x45 && b[10] == 0x42 && b[11] == 0x50) return @"image/webp";
    if (b[4] == 'f' && b[5] == 't' && b[6] == 'y' && b[7] == 'p') return @"video/mp4";
    return @"application/octet-stream";
}

@interface MioDualSchemeHandler : NSObject <WKURLSchemeHandler>
@end
@implementation MioDualSchemeHandler

- (void)webView:(WKWebView *)webView startURLSchemeTask:(id<WKURLSchemeTask>)task {
    NSString *key = task.request.URL.lastPathComponent;
    NSString *path = MioDualLookupMediaPath(key);
    if (!path.length) {
        [task didFailWithError:[NSError errorWithDomain:NSURLErrorDomain
                                                   code:NSURLErrorFileDoesNotExist
                                               userInfo:nil]];
        return;
    }
    NSValue *taskRef = [NSValue valueWithNonretainedObject:task];   // 取消标记（stop 与响应都在主线程比对）
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        NSData *data = [NSData dataWithContentsOfFile:path];
        NSString *mime = MioDualSniffMime(data);
        dispatch_async(dispatch_get_main_queue(), ^{
            // stopURLSchemeTask 已到必须先检查：对已停 task 回任何回调
            // WebKit 直接断言崩溃（"called after the task was stopped"）
            NSMutableSet *cancelled = [self cancelledTasks];
            if ([cancelled containsObject:taskRef]) {
                [cancelled removeObject:taskRef];
                return;
            }
            if (!data.length) {
                [task didFailWithError:[NSError errorWithDomain:NSURLErrorDomain
                                                           code:NSURLErrorCannotOpenFile
                                                       userInfo:nil]];
                return;
            }
            NSHTTPURLResponse *resp = [[NSHTTPURLResponse alloc]
                                       initWithURL:task.request.URL
                                       statusCode:200
                                       HTTPVersion:@"HTTP/1.1"
                                       headerFields:@{@"Content-Type": mime,
                                                      @"Content-Length": [NSString stringWithFormat:@"%lu", (unsigned long)data.length],
                                                      @"Cache-Control": @"max-age=86400"}];
            [task didReceiveResponse:resp];
            [task didReceiveData:data];
            [task didFinish];
        });
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

#pragma mark - 内置双列瀑布流页面（纯静态，无格式化注入）

// 贪心双列：每次追加到当前较矮列；单图原比例、多图九宫格；
// 下拉刷新 → mio 桥发 refresh → 原生调 facade updateTimelineHead 后推新数据
static NSString * const kDualPageHTML = @(
"<!DOCTYPE html><html><head><meta charset='utf-8'>"
"<meta name='viewport' content='width=device-width,initial-scale=1,viewport-fit=cover,user-scalable=no'>"
"<style>"
"*{margin:0;padding:0;box-sizing:border-box;-webkit-text-size-adjust:100%}"
"body{background:#ededed;font-family:-apple-system,'PingFang SC',sans-serif;padding-top:52px}"
"#bar{position:fixed;top:0;left:0;right:0;height:52px;padding-top:env(safe-area-inset-top);"
"background:#ededed;display:flex;align-items:center;justify-content:center;z-index:9;"
"box-shadow:0 1px 0 rgba(0,0,0,0.05)}"
"#bar span{font-size:15px;color:#1a1a1a;font-weight:500}"
"#wrap{display:flex;align-items:flex-start;padding:6px 4px 20px}"
".col{width:50%;padding:0 3px}"
".card{background:#fff;border-radius:10px;margin-bottom:9px;overflow:hidden;"
"box-shadow:0 1px 3px rgba(0,0,0,0.06)}"
".head{display:flex;align-items:center;padding:8px 10px 6px}"
".avatar{width:26px;height:26px;border-radius:5px;background:#d5d5d5;flex:none;object-fit:cover}"
".name{font-size:12px;color:#576b95;margin-left:6px;white-space:nowrap;overflow:hidden;text-overflow:ellipsis}"
".text{font-size:13.5px;color:#1a1a1a;line-height:1.45;padding:2px 10px 6px;"
"white-space:pre-wrap;word-break:break-word}"
".m1{width:100%;display:block;min-height:100px;background:#f4f4f4}"
".grid{display:grid;grid-template-columns:repeat(3,1fr);gap:2px;padding:2px 10px 6px}"
".grid img{width:100%;height:96px;object-fit:cover;border-radius:4px;background:#f4f4f4}"
".foot{display:flex;justify-content:space-between;align-items:center;padding:0 10px 8px}"
".time{font-size:11px;color:#9b9b9b}"
".stats{font-size:11px;color:#9b9b9b}"
"#empty{text-align:center;color:#9b9b9b;font-size:13px;padding:60px 0}"
"#pull{position:fixed;top:-30px;left:0;right:0;text-align:center;font-size:12px;color:#9b9b9b;"
"transition:top .2s;z-index:8;pointer-events:none}"
"@media (prefers-color-scheme:dark){"
"body{background:#111}#bar{background:#111}#bar span{color:#eee}"
".card{background:#1e1e1e;box-shadow:none}.name{color:#7d90b0}"
".text{color:#e6e6e6}.m1,.grid img{background:#2a2a2a}}"
"</style></head><body>"
"<div id='bar'><span id='btitle'>双列朋友圈</span></div>"
"<div id='pull'>刷新中…</div>"
"<div id='wrap'><div class='col' id='c1'></div><div class='col' id='c2'></div></div>"
"<div id='empty' style='display:none'>暂无内容，下拉刷新</div>"
"<script>"
"var pullTip=document.getElementById('pull'),btitle=document.getElementById('btitle');"
"function fmtTime(t){var s=Date.now()/1000-t;if(s<60)return '刚刚';"
"if(s<3600)return Math.floor(s/60)+'分钟前';"
"if(s<86400)return Math.floor(s/3600)+'小时前';"
"if(s<86400*30)return Math.floor(s/86400)+'天前';"
"var d=new Date(t*1000);return (d.getMonth()+1)+'-'+d.getDate();}"
"function el(t,c,x){var e=document.createElement(t);if(c)e.className=c;if(x!=null)e.textContent=x;return e;}"
"function mediaBox(list){var box=el('div'),n=list.length;"
"if(n===1){var im=el('img','m1');im.src=list[0].src;im.loading='lazy';box.appendChild(im);}"
"else{var g=el('div','grid');for(var i=0;i<n&&i<9;i++){var im2=el('img');"
"im2.src=list[i].src;im2.loading='lazy';g.appendChild(im2);}box.appendChild(g);}"
"return box;}"
"window.__mioSetFeed=function(payload){"
"var items=(payload&&payload.items)||[];"
"var sy=window.scrollY,c1=document.getElementById('c1'),c2=document.getElementById('c2');"
"c1.innerHTML='';c2.innerHTML='';"
"document.getElementById('empty').style.display=items.length?'none':'block';"
"var h=[0,0],cols=[c1,c2];"
"items.forEach(function(it){"
"var card=el('div','card'),head=el('div','head');"
"var av=el('img','avatar');if(it.avatar)av.src=it.avatar;head.appendChild(av);"
"head.appendChild(el('div','name',it.name||''));card.appendChild(head);"
"if(it.media&&it.media.length)card.appendChild(mediaBox(it.media));"
"if(it.content)card.appendChild(el('div','text',it.content));"
"var foot=el('div','foot');"
"var st=(it.like>0?it.like+'赞':'')+((it.like>0&&it.cmt>0)?' · ':'')+(it.cmt>0?it.cmt+'评':'');"
"foot.appendChild(el('span','time',fmtTime(it.time||0)));"
"foot.appendChild(el('span','stats',st));card.appendChild(foot);"
"var idx=h[0]<=h[1]?0:1;cols[idx].appendChild(card);h[idx]+=card.offsetHeight+9;"
"});"
"window.scrollTo(0,Math.min(sy,Math.max(0,document.body.scrollHeight-window.innerHeight)));"
"pullTip.style.top='-30px';btitle.textContent='双列朋友圈';"
"};"
"/* 下拉刷新：顶部下拉超 80px → 通知原生走 facade updateTimelineHead */"
"var tsy=0,pulled=false;""document.addEventListener('touchstart',function(e){tsy=e.touches[0].clientY;},{passive:true});"
"document.addEventListener('touchmove',function(e){"
"var dy=e.touches[0].clientY-tsy;"
"if(!pulled&&window.scrollY<=0&&dy>80){pulled=true;"
"pullTip.style.top='0px';btitle.textContent='刷新中…';"
"window.webkit.messageHandlers.mio.postMessage({action:'refresh'});}"
"},{passive:true});"
"document.addEventListener('touchend',function(){"
"setTimeout(function(){pulled=false;if(pullTip.style.top==='0px')pullTip.style.top='-30px';},2500);}"
",false);"
"</script></body></html>"
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
    NSMutableArray *arr = [NSMutableArray array];
    @try {
        NSArray *cache = MioDualTimelineCache(MioDualFacade());
        for (id item in cache) {
            if (arr.count >= 100) break;   // 面板首轮只取前 100 条
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

- (NSDictionary *)itemDict:(id)item {
    if (!item) return nil;
    NSString *username = WXSafeStringGet(item, @"username") ?: @"";
    NSString *content = WXSafeStringGet(item, @"contentDesc") ?: @"";
    NSMutableArray *media = [NSMutableArray array];
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
            }
        }
    } @catch (NSException *e) {
        WPLog(@"Dual", @"[Dual] media read error: %@", e);
    }
    return @{@"id": WXSafeStringGet(item, @"itemID") ?: @"",
             @"name": WXSafeStringGet(item, @"nickname") ?: username,
             @"avatar": [self avatarFor:username] ?: @"",
             @"time": @(WXSafeIntegerGet(item, @"createtime", 0)),
             @"like": @(WXSafeIntegerGet(item, @"likeCount", 0)),
             @"cmt": @(WXSafeIntegerGet(item, @"commentCount", 0)),
             @"content": content,
             @"media": media};
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
    NSString *action = ((NSDictionary *)message.body)[@"action"];
    if (![action isEqualToString:@"refresh"]) return;
    id facade = MioDualFacade();
    SEL refreshSel = NSSelectorFromString(@"updateTimelineHead");
    if (facade && [facade respondsToSelector:refreshSel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, refreshSel);   // 探针实证：主动调用成功，等价下拉
    }
    // 刷新落盘有时延：短周期复查推送，命中变更后 3s 轮询自然接管
    __weak typeof(self) wself = self;
    for (NSNumber *delay in @[ @1.0, @2.5, @4.0 ]) {
        dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(delay.doubleValue * NSEC_PER_SEC)),
                       dispatch_get_main_queue(), ^{ [wself pushFeedNow]; });
    }
}

@end

#pragma mark - 面板挂载/移除（childVC 覆盖 host 内容区，导航栏保留）

void MioDualPanelOpen(UIViewController *host) {
    if ([objc_getAssociatedObject(host, &kDualPanelAssocKey) isKindOfClass:[MomentsDualPanel class]]) return;
    MomentsDualPanel *panel = [[MomentsDualPanel alloc] init];
    objc_setAssociatedObject(host, &kDualPanelAssocKey, panel, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    [host addChildViewController:panel];
    panel.view.frame = host.view.bounds;
    panel.view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [host.view addSubview:panel.view];
    [panel didMoveToParentViewController:host];
    WPLog(@"Dual", @"[Dual] panel opened on %@", NSStringFromClass([host class]));
}

void MioDualPanelClose(UIViewController *host) {
    MomentsDualPanel *panel = objc_getAssociatedObject(host, &kDualPanelAssocKey);
    if (![panel isKindOfClass:[MomentsDualPanel class]]) return;
    objc_setAssociatedObject(host, &kDualPanelAssocKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    // 硬摘除不会触发 viewWillDisappear（非容器协调移除），必须手动停轮询
    [panel stopPolling];
    [panel willMoveToParentViewController:nil];
    [panel.view removeFromSuperview];
    [panel removeFromParentViewController];
    WPLog(@"Dual", @"[Dual] panel closed");
}

void MioDualPanelToggle(UIViewController *host) {
    if (MioDualPanelIsOpen(host)) MioDualPanelClose(host);
    else MioDualPanelOpen(host);
}

BOOL MioDualPanelIsOpen(UIViewController *host) {
    return [objc_getAssociatedObject(host, &kDualPanelAssocKey) isKindOfClass:[MomentsDualPanel class]];
}
