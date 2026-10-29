@interface WCCanvasHalfRandomCardComponent : WCCanvasComponent <WCCanvasDynamicDataLoaderDelegate, CAAnimationDelegate, WCCanvasHalfRandomSubCardDelegate>
{
    WCCanvasDynamicDataLoader * _dynamicLoader; // +0x8
    unsigned long long _cardState; // +0x10
    WCAdURLImageView * _bgImageView; // +0x18
    WCAdURLImageView * _cardImageView; // +0x20
    UILabel * _titleView; // +0x28
    UILabel * _subTitleView; // +0x30
    UIView * _animationContainer; // +0x38
    WCAdURLImageView * _animationImgView; // +0x40
    WCCanvasComponentHalfRandomCardItemInfo * _theChosenItemInfo; // +0x48
    WCCanvasHalfRandomSubCard * _theChosenSubCardView; // +0x50
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (void)componentWillAppearInMainScreen:(BOOL)arg1;
- (void)componentWillDisappearInMainScreen:(BOOL)arg1;
- (void)componentAppearFactorChagneInMainScreen;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (void)componentDidFullyAppearInMainScreen:(BOOL)arg1;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentWillStopState:(BOOL)arg1;
- (void)componentReportAddExposureCount;
- (void)resetSightViewAudioState:(BOOL)arg1;
- (void)updateSubCardViewWithCardId:(id)arg1;
- (id)findADefaultCardToShow;
- (BOOL)isComponentSubCardReady;
- (id)advertiseInfo;
- (id)getUxInfoWithShared:(BOOL)arg1;
- (id)dynamicLoader;
- (id)bgImageView;
- (CGSize)getBgImageViewSize;
- (id)animationImgView;
- (id)animationContainer;
- (BOOL)isGivenCardIdValid:(id)arg1;
- (void)pickACardToShow;
- (void)tryToFetchRandomCardId;
- (void)onFetchTwistCardId:(id)arg1 cardExtInfo:(id)arg2 componentExtInfo:(id)arg3;
- (void)updateRedPacketCoverUrl:(id)arg1 forCardId:(id)arg2;
- (void)startPreAnimationIfNeed;
- (void)tryToShowPickCardAnimation;
- (void)startRotateAnimationWithFlip:(BOOL)arg1;
- (void)startRotateAnimationWithFlip;
- (void)startRotateAnimation;
- (void)animationFallback;
- (void)tryToShowTheChosenCardWithFlipAnim:(BOOL)arg1;
- (void)tryToShowTheChosenCardWithFlip;
- (void)tryToShowTheChosenCard;
- (id)titleView;
- (id)subTitleView;
- (void)changeAlignmentRightAndLeft:(id)arg1;
- (id)cardImageView;
- (void)onRandomCardChooseAnimationEnd;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (BOOL)onSubCardShouldShowBulletCommentsView;
- (id)onSubCardFetchBulletCommentsTitle;
- (id)onSubCardFetchBulletCommentsForBulletCommentsType:(long long)arg1;
- (id)onSubCardFetchCanvasPageId;
- (int)onSubCardFetchCanvasFinderCommentScene;
- (id)fetchHalfScreenJumpInfo;
- (BOOL)shouldShowBulletCommentsView;
- (void)doGetCardIdResultReportWithResult:(BOOL)arg1 cardId:(id)arg2;
- (void)doShowSpecialRedEnvelopeItemReportWithCardId:(id)arg1 isLastCard:(BOOL)arg2;
- (void)halfRandomCardRepeatPick;
- (void)setDynamicLoader:(id)arg1;
- (unsigned long long)cardState;
- (void)setCardState:(unsigned long long)arg1;
- (void)setBgImageView:(id)arg1;
- (void)setCardImageView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setSubTitleView:(id)arg1;
- (void)setAnimationContainer:(id)arg1;
- (void)setAnimationImgView:(id)arg1;
- (id)theChosenItemInfo;
- (void)setTheChosenItemInfo:(id)arg1;
- (id)theChosenSubCardView;
- (void)setTheChosenSubCardView:(id)arg1;
- (void).cxx_destruct;
@end
