@interface WCAdRandomPickCardItemsView : MMUIView <WCAdRandomPickCardItemViewDelegate>
{
    id <WCAdRandomPickCardItemsViewDelegate> _delegate; // +0x8
    long long _viewStatus; // +0x10
    WCAdRandomPickCardItemsInfo * _itemsInfo; // +0x18
    long long _viewType; // +0x20
    NSMutableArray * _itemViews; // +0x28
    NSArray * _sortedCardItems; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 itemsInfo:(id)arg2 viewType:(long long)arg3 delegate:(id)arg4;
- (void)dealloc;
- (id)itemViews;
- (void)generateSubviews;
- (void)layoutSubviews;
- (BOOL)needToLayoutSubviews;
- (id)fetchCanvasPageId;
- (id)pickCardLogic;
- (unsigned long long)fetchPickedTimestampForCardId:(id)arg1 inCardsInfo:(id)arg2;
- (unsigned long long)fetchCardIndexForCardId:(id)arg1;
- (double)fetchContentMaxWidth;
- (CGSize)calcCardItemSize;
- (void)sortRandomCardItemsWithPickedCards;
- (void)sortItemViewsWithSortedCardItems;
- (BOOL)isCardPickedWithCardId:(id)arg1 inPickedCards:(id)arg2;
- (void)onRandomPickCardItemViewDidClick:(id)arg1;
- (void)onRandomPickCardItemViewQuickSwitchAnimationDone;
- (void)resetCardItemsView;
- (void)setCardItemsViewForTransitionBeginning:(BOOL)arg1;
- (void)prepareCardItemsViewForAnimation;
- (void)updateViewStateForAnimation;
- (void)showIntroduceAnimation;
- (void)scheduleIntroduceOneAnimation;
- (void)scheduleIntroduceTwoAnimation;
- (void)makePreparedForIntroduceOneWithView:(id)arg1;
- (void)playIntroduceOneAnimationForView:(id)arg1;
- (void)playIntroduceTwoAnimationForView:(id)arg1;
- (void)showRandomAnimation;
- (void)scheduleRandomAnimation;
- (void)showAllPickedAnimation;
- (void)scheduleAllPickedAnimation;
- (void)makePreparedForSimpleWaveWithView:(id)arg1;
- (void)playSimpleWaveAnimationForView:(id)arg1;
- (void)makePreparedForSimpleFlipWithView:(id)arg1;
- (void)playSimpleFlipAnimationForView:(id)arg1;
- (void)noticeCardViewToUpdateStatus:(id)arg1;
- (void)noticeCardViewToPlayBackgroundAnimationWithStatus:(id)arg1;
- (void)setCardItemsViewActive:(BOOL)arg1;
- (void)pauseCardItemsViewAnimationsWithStatus:(long long)arg1;
- (void)resumeCardItemsViewAnimationsWithStatus:(long long)arg1;
- (BOOL)isCardSelectedWithCardId:(id)arg1;
- (BOOL)isCardSelectedPreviouslyWithCardId:(id)arg1;
- (BOOL)isReadyToPlayQuickSwitchAnimation;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)viewStatus;
- (void)setViewStatus:(long long)arg1;
- (id)itemsInfo;
- (void)setItemsInfo:(id)arg1;
- (long long)viewType;
- (void)setViewType:(long long)arg1;
- (void)setItemViews:(id)arg1;
- (id)sortedCardItems;
- (void)setSortedCardItems:(id)arg1;
- (void).cxx_destruct;
@end

