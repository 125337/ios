@interface WCCanvasRandomLayout : WCCanvasFrameLayout
{
    WCCanvasComponentItem * _theChosenItem; // +0x8
    WCCanvasComponent * _theChosenComponent; // +0x10
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)canvasCloseBtnClick;
- (void)componentWillStopState:(BOOL)arg1;
- (void)componentReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)arg1;
- (BOOL)encoreShakeShouldForbidShakeSpecialView;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (id)theChosenItem;
- (void)setTheChosenItem:(id)arg1;
- (id)theChosenComponent;
- (void)setTheChosenComponent:(id)arg1;
- (void).cxx_destruct;
@end

