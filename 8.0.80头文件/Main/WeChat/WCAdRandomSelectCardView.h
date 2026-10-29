@interface WCAdRandomSelectCardView : WCAdBaseBarView <WCAdRandomSelectCardTitleViewDelegate, WCAdRandomSelectCardBannerViewDelegate, WCAdRandomSelectCardMultiCardsViewDelegate>
{
    id <WCAdRandomSelectCardViewDelegate> _delegate; // +0x8
    WCDataItem * _dataItem; // +0x10
    unsigned long long _itemScene; // +0x18
    WCAdRandomSelectCardBannerView * _bannerView; // +0x20
    WCAdRandomSelectCardTitleView * _titleView; // +0x28
    WCAdRandomSelectCardMultiCardsView * _multiCardsView; // +0x30
    WCAdRandomSelectCardLogic * _randomSelectCardLogic; // +0x38
}
+ (double)viewHeight:(id)arg1 maxWidth:(double)arg2;
+ (double)topMargin:(id)arg1 maxWidth:(double)arg2;
+ (double)bottomMargin;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)bannerView;
- (id)titleView;
- (id)multiCardsView;
- (id)randomSelectCardInfo;
- (void)prepare;
- (void)prepareForDetail;
- (void)start;
- (void)pause;
- (void)stop;
- (void)suspend;
- (void)onItemClickedWithCardId:(id)arg1 fromMultiCards:(BOOL)arg2;
- (void)onItemClickedWithCardId:(id)arg1 clickPos:(long long)arg2 clickIndex:(int)arg3;
- (id)onTitleViewfetchRandomSelectCardInfo;
- (id)onTitleViewGetRandomSelectCardLogic;
- (id)onBannerViewFetchRandomSelectCardInfo;
- (double)onBannerViewFetchRandomSelectCardViewHeight;
- (void)onBannerViewButtonClickedWithCardId:(id)arg1;
- (id)fetchMediaView;
- (void)onBannerViewPrepareForIntroduceAnimation;
- (void)onBannerViewStartIntroduceAnimation;
- (id)onBannerViewFetchLabelToHideForIntroduce;
- (id)onBannerViewFetchLabelToShowForIntroduce;
- (void)onBannerViewIntroduceAnimationDone;
- (id)onBannerViewGetRandomSelectCardLogic;
- (void)onBannerViewPrepareForSelecting;
- (void)onBannerViewStartSelectingAnimation;
- (id)onBannerViewFetchLabelToHideForSelecting;
- (id)onBannerViewFetchLabelToShowForSelecting;
- (void)onBannerViewSelectingAnimationDone;
- (void)onBannerViewPrepareForAllSelected;
- (void)onBannerViewPedestalOpacityAnimationDone;
- (id)onMultiCardsViewFetchRandomSelectCardInfo;
- (void)onMultiCardsViewWillBeginDragging;
- (void)onMultiCardsViewDidSelectItem;
- (id)randomSelectCardLogic;
- (id)fetchAdOperationLogicKey;
- (void)doMultiCardsScrollCountReport;
- (id)reportInfo;
- (void)updateDataItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)itemScene;
- (void)setItemScene:(unsigned long long)arg1;
- (void)setBannerView:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setMultiCardsView:(id)arg1;
- (void)setRandomSelectCardLogic:(id)arg1;
- (void).cxx_destruct;
@end
