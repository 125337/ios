@interface MagicEcsNirvanaViewController : MMUIViewController <NirvanaTextInputDelegate, MagicEcsNirvanaLoadingComponentCallbacks>
{
    BOOL _enableSwipeBack; // +0x70
    BOOL _hasBackground; // +0x71
    BOOL _shouldAnimate; // +0x72
    BOOL _allowSwipeBack; // +0x73
    BOOL _hasFirstFrameRendered; // +0x74
    BOOL _hasSentCreateCanvas; // +0x75
    BOOL _hasLaidOutCanvasContainer; // +0x76
    BOOL _isCanvasLayoutSuspended; // +0x77
    BOOL _forceLightBackground; // +0x78
    BOOL _isViewDidAppear; // +0x79
    BOOL _isForeground; // +0x7a
    NirvanaTextInputPlugin * _textInputPlugin; // +0x80
    EcsJumpInfo_EcsMBAppInfo * _mbAppInfo; // +0x88
    long long _animationStyle; // +0x90
    _TtC6WeChat34MagicEcsNirvanaCanvasViewContainer * _container; // +0x98
    _TtC25MagicCardStarterProtocols22MagicCardStarterHandle * _bizHandle; // +0xa0
    id /* block */ _finishBlock; // +0xa8
    MagicEcsNirvanaLoadingComponent * _loadingComponent; // +0xb0
    UIView * _inlineLoadingView; // +0xb8
    NSString * _bizName; // +0xc0
    NSString * _startupParams; // +0xc8
    NSString * _nativeExtraData; // +0xd0
    double _lastCanvasStatusBarHeight; // +0xd8
    unsigned long long _startTimestamp; // +0xe0
    CGSize _lastCanvasSize; // +0xe8
}
- (id)initWithParams:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)attachCachedCanvasViewIfNeeded;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)checkBizValid;
- (void)initBizParams:(id)arg1;
- (id)previousViewController;
- (void)closeSelfAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)initBizEnv;
- (void)setFinishWtihDataBlock:(id /* block */)arg1;
- (void)finishWithData:(id)arg1;
- (void)closeViewController;
- (void)updateEnableSwipeBack:(BOOL)arg1;
- (void)setUpStatusBar:(BOOL)arg1;
- (id)getMagicEcsAccessibilityChannel;
- (void)onCanvasCreated:(unsigned int)arg1 canvasView:(id)arg2;
- (void)onNirvanaFirstFrameRendered:(long long)arg1 keepAlive:(BOOL)arg2;
- (void)onNativeCanvasFirstFrameRendered;
- (void)markFirstFrameReadyWithSource:(id)arg1 keepAlive:(BOOL)arg2 costTimeMs:(unsigned long long)arg3;
- (void)setupLifecycleObservers;
- (BOOL)isCurrentSceneActive;
- (void)updateLifecycleState;
- (void)notifyOnShow;
- (void)notifyOnHide;
- (BOOL)isNotificationFromCurrentScene:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidEnterBackground:(id)arg1;
- (void)nirvanaTextInputView:(id)arg1 updateEditingClient:(int)arg2 withState:(id)arg3;
- (void)nirvanaTextInputView:(id)arg1 updateEditingClient:(int)arg2 withState:(id)arg3 withTag:(id)arg4;
- (void)nirvanaTextInputView:(id)arg1 updateEditingClient:(int)arg2 withDelta:(id)arg3;
- (void)nirvanaTextInputView:(id)arg1 updateFloatingCursor:(long long)arg2 withClient:(int)arg3 withPosition:(id)arg4;
- (void)nirvanaTextInputView:(id)arg1 performAction:(long long)arg2 withClient:(int)arg3;
- (void)nirvanaTextInputView:(id)arg1 didResignFirstResponderWithTextInputClient:(int)arg2;
- (void)sendJsEvent:(id)arg1 eventData:(id)arg2;
- (void)sendTextInputJsEvent:(id)arg1;
- (void)updateCanvasViewport;
- (void)sendCreateCanvasJsEvent:(CGSize)arg1;
- (void)sendCanvasResizeJsEvent:(CGSize)arg1;
- (id)buildNativeExtraData;
- (void)sendRedrawCanvasJsEvent;
- (void)setUpLoading;
- (id)createInlineLoadingView;
- (void)tryStartLoading;
- (void)safeStopLoading;
- (void)onTimeout;
- (BOOL)isFinished;
- (void)keyboardWillChangeFrame:(id)arg1;
- (id)textInputPlugin;
- (void)setTextInputPlugin:(id)arg1;
- (id)mbAppInfo;
- (void)setMbAppInfo:(id)arg1;
- (BOOL)enableSwipeBack;
- (void)setEnableSwipeBack:(BOOL)arg1;
- (long long)animationStyle;
- (void)setAnimationStyle:(long long)arg1;
- (BOOL)hasBackground;
- (void)setHasBackground:(BOOL)arg1;
- (BOOL)shouldAnimate;
- (void)setShouldAnimate:(BOOL)arg1;
- (BOOL)allowSwipeBack;
- (void)setAllowSwipeBack:(BOOL)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)bizHandle;
- (void)setBizHandle:(id)arg1;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg1;
- (id)loadingComponent;
- (void)setLoadingComponent:(id)arg1;
- (id)inlineLoadingView;
- (void)setInlineLoadingView:(id)arg1;
- (id)bizName;
- (void)setBizName:(id)arg1;
- (id)startupParams;
- (void)setStartupParams:(id)arg1;
- (id)nativeExtraData;
- (void)setNativeExtraData:(id)arg1;
- (BOOL)hasFirstFrameRendered;
- (void)setHasFirstFrameRendered:(BOOL)arg1;
- (BOOL)hasSentCreateCanvas;
- (void)setHasSentCreateCanvas:(BOOL)arg1;
- (BOOL)hasLaidOutCanvasContainer;
- (void)setHasLaidOutCanvasContainer:(BOOL)arg1;
- (BOOL)isCanvasLayoutSuspended;
- (void)setIsCanvasLayoutSuspended:(BOOL)arg1;
- (CGSize)lastCanvasSize;
- (void)setLastCanvasSize:(CGSize)arg1;
- (double)lastCanvasStatusBarHeight;
- (void)setLastCanvasStatusBarHeight:(double)arg1;
- (BOOL)forceLightBackground;
- (void)setForceLightBackground:(BOOL)arg1;
- (unsigned long long)startTimestamp;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (BOOL)isViewDidAppear;
- (void)setIsViewDidAppear:(BOOL)arg1;
- (BOOL)isForeground;
- (void)setIsForeground:(BOOL)arg1;
- (void).cxx_destruct;
@end
