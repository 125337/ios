@interface WCCanvasRandomPickCardComponent : WCCanvasComponent <WCAdRandomPickCardItemsViewDelegate>
{
    BOOL _didShowImpressiveAnimation; // +0x8
    WCCanvasComponentRandomPickCardInfo * _cardsInfo; // +0x10
    WCAdRandomPickCardItemsView * _cardItemsView; // +0x18
}
+ (CGSize)calcSizeForCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)configureWithCanvasItem:(id)arg1 advertiseInfo:(id)arg2 orientation:(long long)arg3;
- (void)layoutSubviews;
- (id)cardItemsView;
- (void)componentWillResumeState:(BOOL)arg1;
- (void)componentDidEnterBackground;
- (void)componentWillEnterForeground;
- (id)randomPickFetchRandomPickCardComponent;
- (void)randomPickResetRandomPickCardStatus;
- (void)randomPickShowImpressiveAnimation;
- (void)randomPickSetCardViewsForTransitionBeginning:(BOOL)arg1;
- (void)tryToShowImpressiveAnimation;
- (void)makeCardItemsViewPrepare;
- (void)showCardItemsViewWithAnimation;
- (id)randomPickCardLogic;
- (id)onRandomPickCardItemsFetchCanvasPageId;
- (id)onRandomPickCardItemsFetchPickCardLogic;
- (void)onRandomPickCardItemsItemViewDidClick:(id)arg1 index:(unsigned long long)arg2;
- (BOOL)onRandomPickCardItemsIsCardSelectedWithCardId:(id)arg1;
- (BOOL)onRandomPickCardItemsIsCardSelectedPreviouslyWithCardId:(id)arg1;
- (BOOL)onRandomPickCardItemsIsReadyToPlayQuickSwitchAnimation;
- (void)onRandomPickCardItemsQuickSwitchAnimationIsDone;
- (id)cardsInfo;
- (void)setCardsInfo:(id)arg1;
- (void)setCardItemsView:(id)arg1;
- (BOOL)didShowImpressiveAnimation;
- (void)setDidShowImpressiveAnimation:(BOOL)arg1;
- (void).cxx_destruct;
@end

