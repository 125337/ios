# WCMoments 数据链反编译 · 索引

来源：WCMoments反编译 全量记录（4367 函数）

## 00_安装与启动 — 插件安装、会话启动/停止、状态追踪、屏蔽用户同步
  - start @0x39718
  - stop @0x3b5f4
  - syncHiddenUsers @0x442a4
  - _Install @0x5c58c
  - _InstallMessageStyleHooks @0x606fc
  - ___Install_block_invoke @0x60ba8
  - ___Install_block_invoke_2 @0x60dac
  - ___Install_block_invoke_3 @0x60e14
  - ___Install_block_invoke.3018 @0x60f80
  - ___Install_block_invoke_2.3042 @0x61434
  - ___Install_block_invoke.3047 @0x61644
  - ___Install_block_invoke_2.3055 @0x617d0
  - ___Install_block_invoke_3.3056 @0x61948
  - ___Install_block_invoke_4 @0x619b0
  - ___Install_block_invoke_5 @0x61ac0
  - ___Install_block_invoke.3070 @0x61bec
  - ___Install_block_invoke_2.3071 @0x61cec
  - ___Install_block_invoke_3.3073 @0x61d54
  - ___Install_block_invoke_4.3077 @0x62034
  - ___Install_block_invoke_5.3078 @0x620f4
  - ___Install_block_invoke_6 @0x62218
  - ___InstallMessageStyleHooks_block_invoke @0x623ac
  - ___InstallMessageStyleHooks_block_invoke_2 @0x62414
  - ___InstallMessageStyleHooks_block_invoke_3 @0x62530
  - ___InstallMessageStyleHooks_block_invoke_4 @0x62964

## 01_拉新与翻页 — 下拉拉新（refreshHead）、滚底翻页（requestTimelineMore）、重载推送
  - scheduleMediaReload @0x3217c
  - ___40-[WCMFeedController_scheduleMediaReload]_block_invoke @0x3234c
  - refreshHead @0x34854
  - ___32-[WCMFeedController_refreshHead]_block_invoke @0x34cf4
  - ___31-[WCMFeedController_reloadFeed]_block_invoke @0x42f84
  - ___31-[WCMFeedController_reloadFeed]_block_invoke.1918 @0x43020
  - requestTimelineMore @0x5411c
  - ___40-[WCMFeedController_requestTimelineMore]_block_invoke @0x548c0

## 02_JS桥与推送 — WebView JS 消息总入口（33.8KB：全部 action 分发 + evaluateJavaScript 推送）
  - userContentController:didReceiveScriptMessage: @0x6c24
  - userContentController:didReceiveScriptMessage: @0x575b4

## 03_媒体管线 — 后台导出队列（读源-JPEG0.999-自有存储）+ scheme 资源服务
  - webView:startURLSchemeTask: @0x41e0
  - ___46-[WCMAssetHandler_webView:startURLSchemeTask:]_block_invoke @0x4968
  - ___46-[WCMAssetHandler_webView:startURLSchemeTask:]_block_invoke.47 @0x5730
  - exportImage:nativePath:renderKey:mediaKey:quality: @0x32700
  - ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke @0x32ff4
  - ___71-[WCMFeedController_exportImage:nativePath:renderKey:mediaKey:quality:]_block_invoke_2 @0x33950
  - ___49-[WCMFeedController_webView:didFinishNavigation:]_block_invoke @0x36940

## 04_页面装配 — WKWebView/分段控件/手势/刷新控件装配
  - viewDidLoad @0x60c0
  - viewDidLoad @0x9d30
  - viewDidLoad @0x100b8
  - viewDidLoad @0x1804c
  - ___33-[WCMVideoController_viewDidLoad]_block_invoke @0x19a84
  - ___33-[WCMVideoController_viewDidLoad]_block_invoke_2 @0x19ad0
  - viewDidLoad @0x2c43c
  - viewDidLoad @0x2d2b8
  - viewDidLoad @0x30728
  - viewDidLoad @0xa15b8
  - ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke @0xa1e90
  - ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke.9 @0xa1ed4
  - ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_2 @0xa1f18
  - ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_3 @0xa1f5c
  - ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_4 @0xa1fa0
  - ___38-[WCMTOCropViewController_viewDidLoad]_block_invoke_5 @0xa1fe4

## 05_动作处理器 — 用户动作的原生处理器
  - openCacheManager @0x47374
  - ___37-[WCMFeedController_openCacheManager]_block_invoke @0x47790
  - ___37-[WCMFeedController_openCacheManager]_block_invoke_2 @0x47a68
  - ___37-[WCMFeedController_openCacheManager]_block_invoke_3 @0x47de0
  - ___37-[WCMFeedController_openCacheManager]_block_invoke.2029 @0x481c0
  - customizeHeader @0x524b4
  - ___36-[WCMFeedController_customizeHeader]_block_invoke @0x52dac
  - ___36-[WCMFeedController_customizeHeader]_block_invoke_2 @0x53164
  - ___36-[WCMFeedController_customizeHeader]_block_invoke.2111 @0x532c0
  - ___36-[WCMFeedController_customizeHeader]_block_invoke.2114 @0x53450
  - ___36-[WCMFeedController_customizeHeader]_block_invoke_2.2120 @0x53640
  - ___36-[WCMFeedController_customizeHeader]_block_invoke_3 @0x536b0
  - openMyMoments @0x565b0
  - openMessages @0x5691c
