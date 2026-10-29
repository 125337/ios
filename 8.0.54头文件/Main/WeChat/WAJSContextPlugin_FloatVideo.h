@interface WAJSContextPlugin_FloatVideo : WAJSContextPluginBase <WAFloatingVideoDelegate, WAVideoPlayerViewDelegate, TXLivePlayJSAdapterDelegate>
{
    BOOL _hasRecovered; // +0x8
    BOOL _needRemoveFloatViewAfterTransitioning; // +0x9
    BOOL _isFloatingVideoMinimizing; // +0xa
    BOOL _needRemoveFloatViewAfterPop; // +0xb
    WAWebViewController * _webviewController; // +0x10
    WAFloatingViewBaseWrapper * _floatingViewWrapper; // +0x18
    WAFloatingVideoView * _floatingVideoView; // +0x20
    UINavigationController * _currentNavigationController; // +0x28
    MemoryMappedKV * _mmkv; // +0x30
    CGPoint _floatVideoRightBottomMargin; // +0x38
}
- (id)init;
- (id)currentAppTask;
- (BOOL)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)setCurrentNavigationController:(id)arg1;
- (id)getPlayerViewSnapShotView:(CGRect)arg1 contentMode:(long long)arg2 addToVideoView:(BOOL)arg3;
- (CGRect)correctFrame:(CGRect)arg1;
- (double)floatVideoAreaHeight:(id)arg1;
- (void)setupFloatingViewPosition:(id)arg1;
- (void)minimizedFloatingView:(id)arg1;
- (void)maximizedFloatingView:(id)arg1;
- (void)showWithContext:(id)arg1 type:(long long)arg2;
- (void)updateFloatVideoMargins:(CGRect)arg1;
- (CGRect)getFloatingVideoViewFrame:(id)arg1 orientation:(long long)arg2;
- (BOOL)removeFloatingVideoView;
- (BOOL)recoverFloatingVideoView;
- (void)closeForRelaunch;
- (BOOL)closeFloatingVideoView;
- (BOOL)operateFloatVideoWithDic:(id)arg1 playerId:(unsigned int)arg2;
- (void)setFloatingVideoParams;
- (void)resetFloatingVideoParams:(BOOL)arg1;
- (void)reset;
- (void)resetPlayerParamAndRemoveView:(BOOL)arg1;
- (BOOL)isFloatingVideoExist;
- (id)getFloatingVideoView;
- (unsigned int)getFloatingVideoId;
- (void)onVideoStartPlayingFromWebView:(id)arg1 playerId:(unsigned int)arg2 autoPlay:(BOOL)arg3;
- (void)onVideoPauseFromWebView:(id)arg1 playerId:(unsigned int)arg2;
- (void)onFloatingVideoViewClosed;
- (void)onFloatingVideoViewClicked;
- (void)onMoveEndWithTouchAlgorithmResultMoveTo:(CGPoint)arg1;
- (long long)getFloatingPlayerViewType;
- (BOOL)isWebViewInPageStack;
- (id)mmkv;
- (void)onVideoEvent:(id)arg1 param:(id)arg2;
- (void)videoPlayerView:(id)arg1 onVideoStateChange:(long long)arg2;
- (void)onVideoPlay:(double)arg1 duration:(double)arg2;
- (void)onPlayEvent:(int)arg1 evtMsg:(id)arg2 playerId:(unsigned int)arg3 param:(id)arg4;
- (void)onPlayNetStatus:(id)arg1 playerId:(unsigned int)arg2;
- (void)onAudioVolumeEvaluation:(unsigned int)arg1 volume:(int)arg2;
- (void)dealloc;
- (void)willRotate:(id)arg1;
- (void)didRotate:(id)arg1;
- (void)sendPlayerMinEvent:(id)arg1;
- (void)sendPlayerMaxEvent:(id)arg1;
- (void)sendEventWithFloatingValue:(long long)arg1 webview:(id)arg2;
- (void)sendEventWithFloatingValue:(id)arg1 service:(id)arg2 videoKey:(id)arg3 webview:(id)arg4;
- (void)reportFloatVideoWhenDisappeared:(id)arg1;
- (void)dataReportWithEventId:(unsigned long long)arg1 eventNote:(unsigned long long)arg2;
- (id)webviewController;
- (void)setWebviewController:(id)arg1;
- (id)floatingViewWrapper;
- (void)setFloatingViewWrapper:(id)arg1;
- (id)floatingVideoView;
- (void)setFloatingVideoView:(id)arg1;
- (id)currentNavigationController;
- (BOOL)hasRecovered;
- (void)setHasRecovered:(BOOL)arg1;
- (BOOL)needRemoveFloatViewAfterTransitioning;
- (void)setNeedRemoveFloatViewAfterTransitioning:(BOOL)arg1;
- (BOOL)isFloatingVideoMinimizing;
- (void)setIsFloatingVideoMinimizing:(BOOL)arg1;
- (BOOL)needRemoveFloatViewAfterPop;
- (void)setNeedRemoveFloatViewAfterPop:(BOOL)arg1;
- (CGPoint)floatVideoRightBottomMargin;
- (void)setFloatVideoRightBottomMargin:(CGPoint)arg1;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end

