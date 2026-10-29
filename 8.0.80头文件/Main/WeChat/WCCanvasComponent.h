@interface WCCanvasComponent : MMUIView
{
    int _type; // +0x8
    WCCanvasComponentItem * _componentItem; // +0x10
    WCAdvertiseInfo * _advertiseInfo; // +0x18
    NSIndexPath * _indexPath; // +0x20
    long long _orientation; // +0x28
    id <WCCanvasComponentDelegate> _delegate; // +0x30
    UIButton * _bgButton; // +0x38
}
+ (id)componentWithItemInfo:(id)arg1;
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
+ (double)calcHeightForCanvasItem:(id)arg1 withMaxWidth:(double)arg2 advertiseInfo:(id)arg3 orientation:(long long)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (CGSize)calcCurrentSize;
- (BOOL)isCanvasVisible;
- (BOOL)shouldForbidDelegateShowArrowDown;
- (BOOL)shouldForbidDelegateShowFloatActionBtn;
- (id)fetchFirstComponentForType:(int)arg1;
- (void)componentUpdateCardViewsWithPendingState;
- (void)componentCleanCardViewsForce;
- (BOOL)encoreShakeShouldForbidShakeSpecialView;
- (void)encoreShakeResetSpecialView;
- (id)encoreShakeFetchRedEnvelopStatusInfo;
- (void)randomPickResetRandomPickCardStatus;
- (void)randomPickShowImpressiveAnimation;
- (void)randomPickSetCardViewsForTransitionBeginning:(BOOL)arg1 isToVC:(BOOL)arg2;
- (void)randomPickCardTitleResetComponent;
- (BOOL)shouldAllowBottomSwipeAction;
- (void)didBottomSwipeActionComplete;
- (BOOL)shouldShowScrollDownArea;
- (double)fetchScrollDownAreaDelayTime;
- (double)getPreloadWebViewBottomInScrollGroupComponent;
- (BOOL)hasPreloadWebViewInScrollGroupComponent;
- (double)calcAppearFactor;
- (void)willRotateToOrientation:(long long)arg1 duration:(double)arg2;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentWillStopState:(BOOL)arg1;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)arg1;
- (void)tryToSetVideoPlayingState:(BOOL)arg1;
- (BOOL)shouldVideoComponentTryToPlay;
- (id)reportMgr;
- (id)musicMgr;
- (unsigned int)downloadScene;
- (BOOL)shouldUseSnsCdnDownload;
- (BOOL)isBgMoreBlack;
- (id)bgButton;
- (void)onClickComponentTouchButton:(id)arg1 forEvent:(id)arg2;
- (void)tryToFireComponentClickEventWithSource:(unsigned long long)arg1;
- (void)updatebgButton;
- (id)fetchSphereOriginSnapshotAndNewFrame:(CGRect *)arg1;
- (id)fetchSphereCurrentSnapshotAndNewFrame:(CGRect *)arg1;
- (void)shareComponentDidBeClickedWithType:(long long)arg1;
- (BOOL)isComponentLastCellInSection;
- (BOOL)isInHomeIndicatorArea;
- (BOOL)isCanvasInHalfScreenMode;
- (void)setComponentContentViewScrollEnabled:(BOOL)arg1;
- (BOOL)isComponentContentViewScrolledToTop;
- (BOOL)isComponentDisplayMoreThanHalf;
- (BOOL)isComponentDisplayed;
- (BOOL)checkAndTriggerToShowFloatView:(double)arg1;
- (unsigned long long)fetchComponentInitAnimationStage;
- (void)showComponentInitAnimation;
- (void)getComponentStyleWithBackgroundColor:(id *)arg1 textColor:(id *)arg2;
- (void)setComponentStyleWithBackgroundColor:(id)arg1 textColor:(id)arg2 contentSize:(CGSize)arg3;
- (void)setButtonComponentTitleColor:(id)arg1 withDuration:(double)arg2;
- (void)setButtonComponentTitleFont:(id)arg1;
- (void)setLayoutComponentBorder;
- (BOOL)hasFloatComponentInfo;
- (void)notifyToShowFloatComponent;
- (void)canvasCloseBtnClick;
- (id)description;
- (void)halfRandomCardRepeatPick;
- (int)type;
- (void)setType:(int)arg1;
- (id)componentItem;
- (void)setComponentItem:(id)arg1;
- (id)advertiseInfo;
- (void)setAdvertiseInfo:(id)arg1;
- (id)indexPath;
- (void)setIndexPath:(id)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setBgButton:(id)arg1;
- (void).cxx_destruct;
@end
