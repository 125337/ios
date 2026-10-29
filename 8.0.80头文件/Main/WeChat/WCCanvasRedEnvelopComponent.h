@interface WCCanvasRedEnvelopComponent : WCCanvasComponent <CAAnimationDelegate, WCCanvasRedEnvelopComponentCardDelegate, WCCanvasDynamicDataLoaderDelegate>
{
    int _animateState; // +0x8
    WCCanvasDynamicDataLoader * _dataLoader; // +0x10
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentWillStopState:(BOOL)arg1;
- (void)canvasCloseBtnClick;
- (void)componentReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)arg1;
- (BOOL)encoreShakeShouldForbidShakeSpecialView;
- (id)encoreShakeFetchRedEnvelopStatusInfo;
- (void)encoreShakeResetSpecialView;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (id)currentVisibleCardView;
- (void)initViews;
- (void)parseDynamicInfo;
- (void)tryToShowRotateAnimation;
- (void)tryToShowFadeAwayAnimation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)onActionButtonClickedWithBaseType:(int)arg1 subCardType:(int)arg2;
- (void)jumpToRedEnvelop;
- (void)cleanCardPendingInfo;
- (int)fetchComponentCardSubtype;
- (id)dataLoader;
- (void)tryToUpdateCardStatusWithOpType:(unsigned int)arg1;
- (void)onFetchTwistCardStatusWithResult:(BOOL)arg1 opType:(unsigned int)arg2 cardId:(id)arg3 status:(unsigned int)arg4 giveCardId:(id)arg5 receiveUrl:(id)arg6;
- (void)updateComponentCardViewWithStatus:(unsigned int)arg1 opType:(unsigned int)arg2;
- (id)fetchRedEnvelopStatusInfo;
- (void)reportComponentForReportType:(unsigned int)arg1;
- (int)animateState;
- (void)setAnimateState:(int)arg1;
- (void)setDataLoader:(id)arg1;
- (void).cxx_destruct;
@end
