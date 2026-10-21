#import "MomentsDualPanel.h"
#import <WebKit/WebKit.h>
#import <ImageIO/ImageIO.h>
#import <MobileCoreServices/MobileCoreServices.h>   // kUTTypeJPEG/kUTTypePNG（ImageIO 重编码目标）
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "MomentsConfig.h"
#import "MioDualInboxVC.h"
#import "MioDualMediaService.h"
#import "MioDualTimelineStore.h"
#import "MioDualTimelineEngine.h"
#import "MioDualFeedBridge.h"
#import "MioDualDiagHUD.h"
#import "MioDualPanelAssets.h"

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

// displayCache 单例（读取/写入共用一份；定义在下方，前置声明供 startURLSchemeTask 用）
static NSCache *MioDualDispCache(void);

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

// 解码队列（WCMAssetHandler decodeQueue 反编译实证同款：专属串行队列——同一时刻
// 只解一张，CPU/内存曲线平滑。旧实现 global 并发队列：快速滚动 20 张齐解=CPU 峰值
// + 并发位图内存峰值，滚动掉帧元凶之一）
static NSOperationQueue *MioDualDecodeQueue(void) {
    static NSOperationQueue *q = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        q = [[NSOperationQueue alloc] init];
        q.maxConcurrentOperationCount = 1;
        q.name = @"mio.dual.decode";
        // QOS UTILITY（WCM 未设 QOS=default 同构）：解码不抢渲染线程的核——
        // USER_INITIATED 优先级在快滚连续解码时会饿死 WebKit 渲染（rAF 冻结）
        q.qualityOfService = NSQualityOfServiceUtility;
    });
    return q;
}

// 渲染层备图（kickDownload/MioDualMediaItemForPath）已迁 MioDualMediaService
// ensureMediaForKey:——WCM exportImage 同构：备图是推送上屏（渲染）的职责，
// handler 只管读文件（WCMAssetHandler 实证同款纯读，文件不在即占位响应）

// activeTasks 活动任务表（WCM 同款 @synchronized 登记）：解码 block 开头查表，
// 已停任务直接跳过解码——滚过去的图不解码省 CPU；stopURLSchemeTask 移除
- (NSMutableSet<NSValue *> *)activeTasks {
    static NSMutableSet *set = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ set = [NSMutableSet set]; });
    return set;
}

- (void)webView:(WKWebView *)webView startURLSchemeTask:(id<WKURLSchemeTask>)task {
    // 三层校验（WCM @0x41e0 实证同款）：① host == mediaToken（SHA256 账号摘要，
    // 防跨账号串图）② key 字符白名单 ③ 不以 _ 开头。任一不过 → 占位响应（zero-fail，
    // 他家 fail-fast 是 NSURLError -1100 didFail——行为差异保留项，补拉链路已对齐）
    NSURL *url = task.request.URL;
    NSString *hostOK = [url.host isEqualToString:[MioDualMediaService mediaToken]] ? @"1" : @"";
    // key 取 path 末段（?r= cache-bust 参数在 query，不进 pathComponents）：
    // 完整文件名 <sha256>.<ext>（WCM 同款 handler 级 key）
    NSString *key = nil;
    for (NSString *comp in [url.pathComponents reverseObjectEnumerator]) {
        if (comp.length && ![comp isEqualToString:@"/"]) { key = comp; break; }
    }
    // ②③ 白名单 [A-Za-z0-9_] + 可选扩展名 .jpg/.jpeg/.png，禁 _ 开头（防路径穿越）
    static NSPredicate *nameOK;
    static dispatch_once_t oncePred;
    dispatch_once(&oncePred, ^{
        nameOK = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",
                  @"^[A-Za-z0-9][A-Za-z0-9_]*(\\.(jpg|jpeg|png))?$"];
    });
    NSString *path = (hostOK && key.length && nameOK && [nameOK evaluateWithObject:key])
        ? [[MioDualMediaService shared] resolveKey:key] : nil;
    if (!path.length) {
        // 文件缺失：透明图立即响应（下载触发归渲染层 ensureMediaForKey:）
        [self servePlaceholder:task];
        return;
    }
    NSValue *taskRef = [NSValue valueWithNonretainedObject:task];   // 取消标记（stop 与响应都在主线程比对）
    // displayCache（WCM @0x4968 同款）：URL → {data, mime} 双值缓存，cost = 字节数，
    // 同 key 二次请求（mediaReady 二载/滚动回看）免读盘免解码免缩放免重编码
    NSDictionary *cached = [MioDualDispCache() objectForKey:url.absoluteString];
    if (cached[@"data"].length) {
        [self serveData:cached[@"data"] mime:cached[@"mime"] ?: @"image/jpeg"
                   task:task ref:taskRef cacheHit:YES];
        return;
    }
    // 缩放目标主线程算好（WCM 同款：block capture target，后台不碰 UIScreen）
    CGFloat scale = [UIScreen mainScreen].scale;
    CGFloat target = MAX(512, ([UIScreen mainScreen].bounds.size.width - 40) * scale / 2 + 64);
    // 登记活动任务（WCM 同款 @synchronized）：解码 block 据此判取消
    @synchronized ([self activeTasks]) {
        [[self activeTasks] addObject:taskRef];
    }
    // 重活（读文件+ImageIO 解码+缩放+重编码）全进专属串行队列（WCM decodeQueue 同款）
    [MioDualDecodeQueue() addOperationWithBlock:^{
        @synchronized ([self activeTasks]) {
            if (![[self activeTasks] containsObject:taskRef]) return;   // 已停：跳过解码
        }
        NSData *raw = [NSData dataWithContentsOfFile:path options:NSDataReadingMappedIfSafe error:nil];
        if (!raw.length) {
            // 文件在校验后半路被清/写一半：占位 + 标记副本丢失（下轮重导，自愈）
            [[MioDualMediaService shared] noteExportLost:key];
            [self servePlaceholder:task];
            return;
        }
        [self serveScaledData:raw url:url.absoluteString target:target task:task ref:taskRef];
    }];
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

// 魔数 mime（WCM @0x4968 同款按源格式分流：jpg→jpeg / png→png，其余源在导出层
// 已转码 JPEG，原路径回落兜底也按此判定）
static NSString *MioDualMimeForData(NSData *d) {
    const unsigned char *b = (const unsigned char *)d.bytes;
    if (d.length >= 4) {
        if (b[0] == 0xFF && b[1] == 0xD8) return @"image/jpeg";
        if (b[0] == 0x89 && b[1] == 0x50 && b[2] == 0x4E && b[3] == 0x47) return @"image/png";
    }
    return @"image/jpeg";
}

// ImageIO 解码管线（WCM @0x4968 解码块同构，替换旧 UIImage drawInRect——不整图
// 解码、低峰内存、EXIF 方向自动处理）：CGImageSourceCreateThumbnailAtIndex
// （FromImageAlways + WithTransform + CacheImmediately）+ maxPixel clamp [1024,2048]
// → CGImageDestination 重编码（Lossy 0.8）→ displayCache {data,mime} → 主线程交付
- (void)serveScaledData:(NSData *)raw url:(NSString *)url target:(CGFloat)target
                   task:(id<WKURLSchemeTask>)task ref:(NSValue *)taskRef {
    NSString *mime = MioDualMimeForData(raw);
    BOOL isPNG = [mime isEqualToString:@"image/png"];
    CGImageSourceRef src = CGImageSourceCreateWithData((CFDataRef)raw, NULL);
    if (!src) {
        [self serveData:nil mime:mime task:task ref:taskRef cacheHit:NO];
        return;
    }
    // 目标像素 clamp（WCM 同款 [1024, 2048]；target 由屏幕宽/scale 主线程算好传入）
    double maxPixel = MIN(MAX((double)target, 1024.0), 2048.0);
    CFStringRef keys[4] = { kCGImageSourceCreateThumbnailFromImageAlways,
                            kCGImageSourceCreateThumbnailWithTransform,
                            kCGImageSourceShouldCacheImmediately,
                            kCGImageSourceThumbnailMaxPixelSize };
    CFTypeRef vals[4] = { kCFBooleanTrue, kCFBooleanTrue, kCFBooleanTrue,
                          (__bridge CFTypeRef)@(maxPixel) };
    CFDictionaryRef opts = CFDictionaryCreate(NULL, (const void **)keys, (const void **)vals, 4,
                                              &kCFTypeDictionaryKeyCallBacks,
                                              &kCFTypeDictionaryValueCallBacks);
    CGImageRef thumb = CGImageSourceCreateThumbnailAtIndex(src, 0, opts);
    CFRelease(opts);
    CFRelease(src);
    if (!thumb) {
        [self serveData:nil mime:mime task:task ref:taskRef cacheHit:NO];
        return;
    }
    NSMutableData *out = [NSMutableData data];
    CGImageDestinationRef dst = CGImageDestinationCreateWithData(
        (CFMutableDataRef)out, isPNG ? kUTTypePNG : kUTTypeJPEG, 1, NULL);
    if (dst) {
        CGImageDestinationAddImage(dst, thumb, (__bridge CFDictionaryRef)@{
            kCGImageDestinationLossyCompressionQuality : isPNG ? @1.0 : @0.8
        });
        CGImageDestinationFinalize(dst);
        CFRelease(dst);
    }
    CFRelease(thumb);
    if (!out.length) {
        [self serveData:nil mime:mime task:task ref:taskRef cacheHit:NO];
        return;
    }
    [self displayCacheStore:out mime:mime url:url];
    [self serveData:out mime:mime task:task ref:taskRef cacheHit:NO];
}

// displayCache 写入 {data, mime} 双值，cost = 字节数（WCM 同款；URL 含 ?r=
// cache-bust 时按完整 URL 存——同 key 变体会多存一份，240 上限自动淘汰，可接受）
- (void)displayCacheStore:(NSData *)data mime:(NSString *)mime url:(NSString *)url {
    if (data.length) {
        [MioDualDispCache() setObject:@{@"data": data, @"mime": mime} forKey:url cost:data.length];
    }
}

static NSCache<NSString *, NSData *> *MioDualDispCache(void) {
    static NSCache *c = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        c = [[NSCache alloc] init];
        c.countLimit = 240;
    });
    return c;
}

// 统一响应提交（主线程；取消检查 + data 空回落占位）
- (void)serveData:(NSData *)data mime:(NSString *)mime
             task:(id<WKURLSchemeTask>)task ref:(NSValue *)taskRef cacheHit:(BOOL)hit {
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
                                   headerFields:@{@"Content-Type": mime,
                                                  @"Content-Length": [NSString stringWithFormat:@"%lu", (unsigned long)data.length],
                                                  @"Cache-Control": @"max-age=86400"}];
        [task didReceiveResponse:resp];
        [task didReceiveData:data];
        [task didFinish];
        @synchronized ([self activeTasks]) {   // 提交完成：出登记表防膨胀（activeTasks 仅登记进解码队列的任务）
            [[self activeTasks] removeObject:taskRef];
        }
    });
}

- (void)webView:(WKWebView *)webView stopURLSchemeTask:(id<WKURLSchemeTask>)task {
    NSValue *ref = [NSValue valueWithNonretainedObject:task];
    [[self cancelledTasks] addObject:ref];   // 提交时防崩（对已停 task 回调 WebKit 断言）
    @synchronized ([self activeTasks]) {     // 解码跳过（WCM 同款 activeTasks 查表）
        [[self activeTasks] removeObject:ref];
    }
}

// 已取消任务表（主线程专用）
- (NSMutableSet<NSValue *> *)cancelledTasks {
    static NSMutableSet *set = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ set = [NSMutableSet set]; });
    return set;
}

@end

// miosnap:// 快照 scheme 流（首屏秒开，WCM restore 同构）：JS boot 主动 fetch，
// 数据走 WebKit 网络栈流式回来（零脚本编译）。内联 evaluateJavaScript 方案
// 每次冷启动都要 WKWebView 把 1~2MB JSON 当 JS 编译（100-300ms 主线程）——废止
@interface MioSnapHandler : NSObject <WKURLSchemeHandler>
@end
@implementation MioSnapHandler
- (void)webView:(WKWebView *)webView startURLSchemeTask:(id<WKURLSchemeTask>)task {
    NSString *file = [MioDualTimelineStore snapshotFilePath];
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        NSData *data = [NSData dataWithContentsOfFile:file];
        dispatch_async(dispatch_get_main_queue(), ^{
            if (!data.length) {
                // 无快照文件（首次安装）：404，JS catch 后等原生推送（双保险路径）
                NSHTTPURLResponse *resp = [[NSHTTPURLResponse alloc]
                                           initWithURL:task.request.URL statusCode:404
                                           HTTPVersion:@"HTTP/1.1" headerFields:@{}];
                [task didReceiveResponse:resp];
                [task didFinish];
                return;
            }
            NSHTTPURLResponse *resp = [[NSHTTPURLResponse alloc]
                                       initWithURL:task.request.URL statusCode:200
                                       HTTPVersion:@"HTTP/1.1"
                                       headerFields:@{@"Content-Type": @"application/json",
                                                      @"Content-Length": [NSString stringWithFormat:@"%lu", (unsigned long)data.length],
                                                      @"Access-Control-Allow-Origin": @"*",   // loadHTMLString 透明源 fetch 必需
                                                      @"Cache-Control": @"no-store"}];
            [task didReceiveResponse:resp];
            [task didReceiveData:data];
            [task didFinish];
        });
    });
}
- (void)webView:(WKWebView *)webView stopURLSchemeTask:(id<WKURLSchemeTask>)task {}
@end

#pragma mark - 内置双列瀑布流页面（纯静态，无格式化注入）

// 双列朋友圈页面（WCM layoutCards 同构布局引擎，反编译 ui_extract/js_02 实证移植）：
// 卡片绝对定位（.card position:absolute），每卡只 getBoundingClientRect 测一次高
// （mh 缓存 + layoutDirty 失效），rAF 合帧 layoutCards：列宽计算 → 脏卡重测 →
// 按 DOM 序（=新→旧）逐卡定列（colOf 稳定分配，新卡取当时短列）→ left/top 差量写
// → grid 显式高度。插入/删卡/锁高只重排自己，绝无 flex 整列 reflow——几千行时
// 动画/滚动不被布局阻塞（WCM 丝滑的主菜；旧 flex 文档流方案整体废止）。
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
// 资产化：HTML/CSS/JS 源文件在 assets/panel.{html,css,js}（可高亮/格式化/注释），
// 由 scripts/gen_panel_assets.py 拼装生成 MioDualPanelAssets.h（build.py commit 自动执行）。

#pragma mark - 面板 VC

@interface MomentsDualPanel () <WKScriptMessageHandler, WKNavigationDelegate>
@property (nonatomic, strong) WKWebView *webView;
@property (nonatomic, assign) BOOL pageReady;
@end

static char kDualPanelAssocKey;

// 常驻面板（WCM showCachedFeed 同语义，根治「打开慢一步」）：Close 只摘视图不释放，
// WebView 已渲染态保留（JS 里的 feed 还活着），重开零重载秒显。发现页 VC 每次进入
// 可能是新实例，assoc 只当「开着」标记，常驻实例放进程级强持有。
// 内存警告不放弃常驻（旧策略在微信高频内存压力下等于每次都冷建重载——实证根因）：
// 面板 WebView 是核心资产，丢弃的重建成本远超省下的内存
static MomentsDualPanel *g_dualPanel = nil;
static __weak UIViewController *g_dualPanelHost = nil;

@implementation MomentsDualPanel

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    WKWebViewConfiguration *cfg = [[WKWebViewConfiguration alloc] init];
    [cfg setURLSchemeHandler:[[MioDualSchemeHandler alloc] init] forURLScheme:@"mioimg"];
    [cfg setURLSchemeHandler:[[MioSnapHandler alloc] init] forURLScheme:@"miosnap"];
    [cfg.userContentController addScriptMessageHandler:self name:@"mio"];

    self.webView = [[WKWebView alloc] initWithFrame:self.view.bounds configuration:cfg];
    self.webView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.webView.scrollView.bounces = YES;
    self.webView.navigationDelegate = self;
    self.webView.backgroundColor = [UIColor colorWithWhite:0.93 alpha:1];
    [self.view addSubview:self.webView];

    [self.webView loadHTMLString:[NSString stringWithUTF8String:MioDualPanelHTML] baseURL:nil];
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
        [[MioDualTimelineEngine shared] loadTail];
        return;
    }
    if ([action isEqualToString:@"tailStop"]) {
        // 滚离底部：停 tail 循环（关面板 stop 亦停）
        [[MioDualTimelineEngine shared] stopLoadTail];
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
    if ([action isEqualToString:@"visible"]) {
        // 可见性上报（WCM visible→scheduleMediaReload 同构，02 L1230-1244）：JS
        // visiblePass 把视口±2屏的媒体 key 报上来，原生只备看得到的图
        NSString *ids = params[@"ids"] ?: @"";
        if (ids.length) {
            for (NSString *k in [ids componentsSeparatedByString:@","]) {
                if (k.length) [[MioDualMediaService shared] ensureMediaForKey:k];
            }
        }
        return;
    }
    if ([action isEqualToString:@"assetMiss"]) {
        // 二线保险（WCM assetMiss script message 同构：JS img onerror 上报 →
        // native 补拉）。zero-fail 下正常不触发——WebKit 层异常（解码失败等）兜底，
        // 与 visible 主动备图互为双腿，链路与 WCM 对齐
        NSString *k = params[@"k"] ?: @"";
        if (k.length) [[MioDualMediaService shared] ensureMediaForKey:k];
        return;
    }
    if (![action isEqualToString:@"refresh"]) return;
    // 下拉刷新 → updateTimelineHead（探针实证：主动调用成功，等价下拉）；
    // 新数据落库后 onTimelineDataChanged hook 自动推面板
    [[MioDualTimelineEngine shared] refreshHead];
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
    [[MioDualTimelineEngine shared] start];
    // 会话内 updateTimelineHead 才真正走网络：拉新帖（不阻塞显示）
    [[MioDualTimelineEngine shared] refreshHead];
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
    [[MioDualTimelineEngine shared] stop];   // endTimeline 关会话+停循环+清状态（对齐 WCM；不影响原生页自身）
    [MioDualFeedBridge detachWebView];   // 不可见即停推送目标；常驻实例仍活着，重开复用
    [MioDualDiagHUD detach];   // 诊断悬浮窗随面板摘除
    [panel.view removeFromSuperview];   // 只摘视图：g_dualPanel 强持有，WebView 已渲染态保留（重开零重载秒显）
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
