@interface WCCanvasRandomLayout : WCCanvasFrameLayout
{
    WCCanvasComponentItem * _theChosenItem; // +0x8
    WCCanvasComponent * _theChosenComponent; // +0x10
    unsigned long long _pendingState; // +0x18
    WCAdURLImageView * _brandNewCollectionCoverImgView; // +0x20
    WCAdURLImageView * _brandNewCollectionBackImgView; // +0x28
    WCAdURLImageView * _recollectedCoverImgView; // +0x30
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
- (void)componentUpdateCardViewsWithPendingState;
- (void)componentCleanCardViewsForce;
- (void)resetCardViewsForUnknownPendingState;
- (void)appendOpacityAnimationToView:(id)arg1;
- (unsigned long long)fetchRemainCardsCount;
- (BOOL)isARedEnvelopGiveCardPicked;
- (BOOL)isARedEnvelopReceiveCardPicked;
- (BOOL)isPreviousClickedIndexInvalid;
- (id)brandNewCollectionCoverImgView;
- (id)brandNewCollectionBackImgView;
- (id)recollectedCoverImgView;
- (void)tryToShowToastWithState:(unsigned long long)arg1;
- (void)tryToShowToastWithWording:(id)arg1;
- (id)theChosenItem;
- (void)setTheChosenItem:(id)arg1;
- (id)theChosenComponent;
- (void)setTheChosenComponent:(id)arg1;
- (unsigned long long)pendingState;
- (void)setPendingState:(unsigned long long)arg1;
- (void)setBrandNewCollectionCoverImgView:(id)arg1;
- (void)setBrandNewCollectionBackImgView:(id)arg1;
- (void)setRecollectedCoverImgView:(id)arg1;
- (void).cxx_destruct;
@end
