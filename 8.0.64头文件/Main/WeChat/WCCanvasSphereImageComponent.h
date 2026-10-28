@interface WCCanvasSphereImageComponent : WCCanvasComponent <WCAdvertiseSphereViewDelegate>
{
    BOOL _didDelayShowScrollDownArea; // +0x8
    WCAdvertiseSphereView * _sphereView; // +0x10
    MMProgressViewEx * _loadingView; // +0x18
    UIView * _turnToExploreView; // +0x20
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)initViews;
- (void)dealloc;
- (id)fetchSphereOriginSnapshotAndNewFrame:(CGRect *)arg1;
- (id)fetchSphereCurrentSnapshotAndNewFrame:(CGRect *)arg1;
- (void)tryToStartSphereMonitoring;
- (void)tryToStopSphereMonitoring;
- (void)tryToResetSphereMotionData;
- (void)showTurnToSearchView;
- (void)hideTurnToSearchView;
- (void)lightScrollDownArea;
- (void)dimScrollDownArea;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentWillStopState:(BOOL)arg1;
- (void)componentWillResumeState:(BOOL)arg1;
- (BOOL)shouldShowScrollDownArea;
- (double)fetchScrollDownAreaDelayTime;
- (void)resourceLoading;
- (void)resourceDidLoad;
- (void)resourceDidFailed;
- (id)getBackGroundColorWhenLoading;
- (void)idleStateDidChenged:(BOOL)arg1;
- (void)onPanGestureEnd;
- (id)sphereView;
- (void)setSphereView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)turnToExploreView;
- (void)setTurnToExploreView:(id)arg1;
- (BOOL)didDelayShowScrollDownArea;
- (void)setDidDelayShowScrollDownArea:(BOOL)arg1;
- (void).cxx_destruct;
@end
