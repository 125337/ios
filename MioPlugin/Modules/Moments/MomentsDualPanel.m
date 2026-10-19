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

// 贪心双列：每次追加到当前较矮列；单图原比例、多图九宫格；
// 下拉刷新 → mio 桥发 refresh → 原生调 facade updateTimelineHead 后推新数据
// 双列朋友圈页面（UI 对齐 WCMoments 0.6.49 截图版）：大标题+搜索框+三tab+贪心双列。
// 已接交互：搜索框=过滤已加载缓存；「全部动态/我赞过的」=tab 过滤（likeFlag）；
// 「…」圆钮=切回原生朋友圈；下拉刷新=facade updateTimelineHead。
// 死 UI（无数据支撑，点击无反应）：铃铛、加号、tab「我的关注」。
// ratio 由原生媒体宽高 ivar 提供（KVC m64_width/m64_height），缺省时 JS onload 锁高防跳动。
// 注意：整段为单行拼接，JS 内禁用 // 行注释，双引号一律 \" 转义。
static NSString * const kDualPageHTML = @(
"<!DOCTYPE html>"
"<html lang=\"zh-CN\">"
"<head>"
"<meta charset=\"utf-8\">"
"<meta name=\"viewport\" content=\"width=device-width, initial-scale=1, maximum-scale=1, user-scalable=no, viewport-fit=cover\">"
"<title>朋友圈瀑布流</title>"
"<style>"
":root { --bg-color:#F7F7F7; --card-bg:#FFFFFF; --text-main:#1A1A1A; --search-bg:#EBEBEB; --icon-fill:#333; --tab-bg:#F0F0F0; }"
"* { margin:0; padding:0; box-sizing:border-box; -webkit-tap-highlight-color:transparent; }"
"body { background:var(--bg-color); font-family:-apple-system,\"PingFang SC\",\"Helvetica Neue\",sans-serif; padding-top:env(safe-area-inset-top); overflow-x:hidden; color:var(--text-main); }"
".header { position:sticky; top:0; z-index:100; background:var(--bg-color); padding:10px 16px 8px; }"
".top-bar { display:flex; justify-content:space-between; align-items:center; margin-bottom:16px; margin-top:8px; }"
".top-bar h1 { font-size:28px; font-weight:800; color:#000; letter-spacing:0.5px; }"
".icons { display:flex; gap:10px; }"
".icon-btn { width:36px; height:36px; border-radius:50%; background:var(--card-bg); display:flex; justify-content:center; align-items:center; box-shadow:0 1px 3px rgba(0,0,0,0.05); }"
".icon-btn:active { transform:scale(0.92); }"
".icon-btn svg { width:20px; height:20px; fill:var(--icon-fill); }"
".search-box { display:flex; align-items:center; background:var(--search-bg); height:36px; border-radius:6px; padding:0 12px; margin-bottom:16px; }"
".search-box svg { width:16px; height:16px; fill:#999; margin-right:6px; flex:none; }"
".search-box input { flex:1; border:0; outline:0; background:transparent; font-size:15px; color:var(--text-main); }"
".search-box input::placeholder { color:#999; }"
".tabs { display:flex; justify-content:space-between; align-items:center; background:var(--tab-bg); border-radius:20px; padding:4px; margin-bottom:12px; }"
".tab { flex:1; text-align:center; padding:8px 0; border-radius:16px; font-size:14px; color:var(--text-main); font-weight:500; }"
".tab.active { background:var(--card-bg); font-weight:600; color:#000; box-shadow:0 1px 4px rgba(0,0,0,0.08); }"
".waterfall { display:flex; align-items:flex-start; padding:0 12px 30px; gap:10px; }"
".col { width:calc(50% - 5px); display:flex; flex-direction:column; gap:10px; }"
".card { background:var(--card-bg); border-radius:12px; overflow:hidden; display:flex; flex-direction:column; }"
".card-media { width:100%; position:relative; }"
".card-media img { width:100%; display:block; object-fit:cover; }"
".mtag { position:absolute; right:8px; bottom:8px; background:rgba(0,0,0,0.3); color:white; font-size:10px; padding:3px 6px; border-radius:4px; backdrop-filter:blur(4px); display:flex; align-items:center; gap:2px; }"
".card-info { padding:10px 12px 12px; display:flex; flex-direction:column; flex:1; }"
".title { font-size:14px; color:var(--text-main); font-weight:500; line-height:1.5; margin-bottom:10px; display:-webkit-box; -webkit-line-clamp:4; -webkit-box-orient:vertical; overflow:hidden; white-space:pre-wrap; }"
".title.large { font-size:22px; font-weight:700; line-height:1.35; margin-bottom:12px; -webkit-line-clamp:6; }"
".user-row { display:flex; align-items:center; justify-content:space-between; margin-top:auto; }"
".user-left { display:flex; align-items:center; gap:6px; overflow:hidden; }"
".avatar { width:20px; height:20px; border-radius:50%; object-fit:cover; background:#EEE; flex-shrink:0; }"
".name { font-size:12px; color:#666; white-space:nowrap; overflow:hidden; text-overflow:ellipsis; max-width:100px; }"
".user-right { display:flex; align-items:center; gap:12px; flex-shrink:0; }"
".stat { display:flex; align-items:center; gap:3px; font-size:12px; color:#999; }"
".stat svg { width:14px; height:14px; fill:#999; }"
"#empty { text-align:center; color:#b3b3b3; font-size:13px; padding:70px 0; }"
"#pull { position:fixed; top:-30px; left:0; right:0; text-align:center; font-size:12px; color:#9b9b9b; transition:top .2s; z-index:99; pointer-events:none; }"
"@media (prefers-color-scheme:dark) {"
":root { --bg-color:#0E0E0E; --card-bg:#1B1B1B; --text-main:#EAEAEA; --search-bg:#1D1D1D; --icon-fill:#CCC; --tab-bg:#1D1D1D; }"
".top-bar h1 { color:#F2F2F2; } .tab.active { color:#F0F0F0; } .avatar { background:#2A2A2A; } .name { color:#8A8A8A; } .card-media img { background:#242424; }"
"}"
"</style>"
"</head>"
"<body>"
"<div id=\"pull\">刷新中…</div>"
"<div class=\"header\">"
"<div class=\"top-bar\">"
"<h1>朋友圈</h1>"
"<div class=\"icons\">"
"<div class=\"icon-btn\" id=\"ibBell\"><svg viewBox=\"0 0 24 24\"><path d=\"M12 22c1.1 0 2-.9 2-2h-4c0 1.1.9 2 2 2zm6-6v-5c0-3.07-1.64-5.64-4.5-6.32V4c0-.83-.67-1.5-1.5-1.5s-1.5.67-1.5 1.5v.68C7.63 5.36 6 7.92 6 11v5l-2 2v1h16v-1l-2-2z\"/></svg></div>"
"<div class=\"icon-btn\" id=\"ibAdd\"><svg viewBox=\"0 0 24 24\"><path d=\"M19 13h-6v6h-2v-6H5v-2h6V5h2v6h6v2z\"/></svg></div>"
"<div class=\"icon-btn\" id=\"ibMore\"><svg viewBox=\"0 0 24 24\"><path d=\"M6 10c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2zm12 0c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2zm-6 0c-1.1 0-2 .9-2 2s.9 2 2 2 2-.9 2-2-.9-2-2-2z\"/></svg></div>"
"</div>"
"</div>"
"<div class=\"search-box\">"
"<svg viewBox=\"0 0 24 24\"><path d=\"M15.5 14h-.79l-.28-.27C15.41 12.59 16 11.11 16 9.5 16 5.91 13.09 3 9.5 3S3 5.91 3 9.5 5.91 16 9.5 16c1.61 0 3.09-.59 4.23-1.57l.27.28v.79l5 4.99L20.49 19l-4.99-5zm-6 0C7.01 14 5 11.99 5 9.5S7.01 5 9.5 5 14 7.01 14 9.5 11.99 14 9.5 14z\"/></svg>"
"<input id=\"q\" placeholder=\"搜索朋友或动态\">"
"</div>"
"<div class=\"tabs\">"
"<div class=\"tab active\" id=\"tab-all\">全部动态</div>"
"<div class=\"tab\" id=\"tab-liked\">我赞过的</div>"
"<div class=\"tab\" id=\"tab-follow\">我的关注</div>"
"</div>"
"</div>"
"<div class=\"waterfall\">"
"<div class=\"col\" id=\"col-left\"></div>"
"<div class=\"col\" id=\"col-right\"></div>"
"</div>"
"<div id=\"empty\" style=\"display:none\">暂无内容，下拉刷新</div>"
"<script>"
"(function(){"
"var HEART='<svg viewBox=\"0 0 24 24\"><path d=\"M12 21.35l-1.45-1.32C5.4 15.36 2 12.28 2 8.5 2 5.42 4.42 3 7.5 3c1.74 0 3.41.81 4.5 2.09C13.09 3.81 14.76 3 16.5 3 19.58 3 22 5.42 22 8.5c0 3.78-3.4 6.86-8.55 11.54L12 21.35z\"/></svg>';"
"var BUB='<svg viewBox=\"0 0 24 24\"><path d=\"M20 2H4c-1.1 0-2 .9-2 2v18l4-4h14c1.1 0 2-.9 2-2V4c0-1.1-.9-2-2-2zm0 14H6l-2 2V4h16v12z\"/></svg>';"
"var PLAY='<svg viewBox=\"0 0 24 24\" width=\"10\" height=\"10\" fill=\"currentColor\"><path d=\"M8 5v14l11-7z\"/></svg>';"
"var AV='data:image/svg+xml;utf8,<svg xmlns=\"http://www.w3.org/2000/svg\" fill=\"%23ddd\"><rect width=\"100\" height=\"100\"/></svg>';"
"var colL=document.getElementById('col-left'),colR=document.getElementById('col-right');"
"var empty=document.getElementById('empty'),pullTip=document.getElementById('pull');"
"var ALL=[],q='',tab='all';"
"function fmtTime(t){if(!t)return '';var d=new Date(t*1000),n=new Date();"
"var p=function(x){return x<10?'0'+x:''+x;};var hm=p(d.getHours())+':'+p(d.getMinutes());"
"var sd=function(a,b){return a.getFullYear()==b.getFullYear()&&a.getMonth()==b.getMonth()&&a.getDate()==b.getDate();};"
"var y=new Date(n.getTime()-86400000);"
"if(sd(d,n))return '今天 '+hm;if(sd(d,y))return '昨天 '+hm;"
"var md=(d.getMonth()+1)+'月'+d.getDate()+'日';"
"return d.getFullYear()==n.getFullYear()?md:d.getFullYear()+'年'+md;}"
"function el(t,c){var e=document.createElement(t);if(c)e.className=c;return e;}"
"function stat(svg,n){return '<div class=\"stat\">'+svg+' '+(n||0)+'</div>';}"
"function render(list){"
"var sy=window.scrollY;"
"colL.innerHTML='';colR.innerHTML='';"
"var hL=0,hR=0,colW=(document.body.clientWidth-34)/2;"
"list.forEach(function(item){"
"var card=el('div','card');"
"if(item.img){"
"var media=el('div','card-media');"
"var img=el('img');img.src=item.img;img.loading='lazy';"
"if(item.ratio>0){img.dataset.locked=1;img.style.height=(colW/item.ratio)+'px';}"
"else{img.onload=function(){if(!img.dataset.locked&&img.naturalWidth>0){img.dataset.locked=1;img.style.height=(colW/img.naturalWidth*img.naturalHeight)+'px';}};}"
"media.appendChild(img);"
"if(item.isVideo){var vt=el('div','mtag');vt.innerHTML=PLAY+' 视频';media.appendChild(vt);}"
"else if(item.imgCount>1){var it2=el('div','mtag');it2.textContent=item.imgCount+'图';media.appendChild(it2);}"
"card.appendChild(media);"
"}"
"var info=el('div','card-info');"
"if(item.content){"
"var tt=el('div','title'+(item.isLargeText?' large':''));"
"tt.textContent=item.content;info.appendChild(tt);"
"}"
"var ur=el('div','user-row'),ul=el('div','user-left');"
"var av=el('img','avatar');av.src=item.avatar||AV;ul.appendChild(av);"
"var nm=el('div','name');nm.textContent=item.name||'';ul.appendChild(nm);"
"var rt=el('div','user-right');"
"rt.innerHTML='<span style=\"font-size:12px;color:#999;\">'+fmtTime(item.time)+'</span>'+stat(HEART,item.likes)+stat(BUB,item.cmt);"
"ur.appendChild(ul);ur.appendChild(rt);"
"info.appendChild(ur);card.appendChild(info);"
"var target=(hL<=hR)?colL:colR;"
"target.appendChild(card);"
"var ch=card.offsetHeight+10;"
"if(target===colL)hL+=ch;else hR+=ch;"
"});"
"empty.style.display=list.length?'none':'block';"
"window.scrollTo(0,Math.min(sy,Math.max(0,document.body.scrollHeight-window.innerHeight)));"
"pullTip.style.top='-30px';"
"}"
"function applyFilter(){"
"var l=ALL;"
"if(tab==='liked')l=l.filter(function(it){return it.liked>0;});"
"if(q)l=l.filter(function(it){return ((it.name||'')+' '+(it.content||'')).toLowerCase().indexOf(q)>=0;});"
"return l;"
"}"
"window.__mioSetFeed=function(payload){ALL=(payload&&payload.items)||[];render(applyFilter());};"
"var qEl=document.getElementById('q');"
"qEl.addEventListener('input',function(){q=this.value.trim().toLowerCase();render(applyFilter());window.scrollTo(0,0);});"
"document.getElementById('tab-all').addEventListener('click',function(){"
"tab='all';this.classList.add('active');document.getElementById('tab-liked').classList.remove('active');"
"render(applyFilter());window.scrollTo(0,0);});"
"document.getElementById('tab-liked').addEventListener('click',function(){"
"tab='liked';this.classList.add('active');document.getElementById('tab-all').classList.remove('active');"
"render(applyFilter());window.scrollTo(0,0);});"
"document.getElementById('ibMore').addEventListener('click',function(){"
"window.webkit.messageHandlers.mio.postMessage({action:'back'});});"
"var tsy=0,pulled=false;"
"document.addEventListener('touchstart',function(e){tsy=e.touches[0].clientY;},{passive:true});"
"document.addEventListener('touchmove',function(e){"
"var dy=e.touches[0].clientY-tsy;"
"if(!pulled&&window.scrollY<=0&&dy>80){pulled=true;pullTip.style.top='0px';"
"window.webkit.messageHandlers.mio.postMessage({action:'refresh'});}"
"},{passive:true});"
"document.addEventListener('touchend',function(){setTimeout(function(){pulled=false;if(pullTip.style.top==='0px')pullTip.style.top='-30px';},2500);},false);"
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
    NSString *action = ((NSDictionary *)message.body)[@"action"];
    if ([action isEqualToString:@"back"]) {
        // 「…」圆钮：切回原生朋友圈（面板覆盖移除）
        UIViewController *host = self.parentViewController;
        if (host) MioDualPanelClose(host);
        return;
    }
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
