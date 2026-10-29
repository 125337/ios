@interface WCCanvasFrameLayout : WCCanvasComponent
{
    BOOL _needRelayout; // +0x8
    NSMutableDictionary * _viewContainer; // +0x10
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentReportAddExposureCount;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentWillStopState:(BOOL)arg1;
- (void)canvasCloseBtnClick;
- (void)resetSightViewAudioState:(BOOL)arg1;
- (BOOL)encoreShakeShouldForbidShakeSpecialView;
- (id)fetchFirstComponentForType:(int)arg1;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (id)viewContainer;
- (void)setViewContainer:(id)arg1;
- (BOOL)needRelayout;
- (void)setNeedRelayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
