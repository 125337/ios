@interface MultiReaderMessageCellView : ReaderMessageCellView <ReaderItemViewDelegate, MultiReaderMessageCellViewDelegate, BrandFinderLiveBaseCardViewDelegate>
{
    unsigned int m_selectIndex; // +0x48
    NSMutableArray * m_itemViewArr; // +0x50
}
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;
- (BOOL)isAccessibilityElement;
- (BOOL)canBeReused;
- (void)onAppear;
- (void)layoutContentView;
- (void)updateReaderItemViewTitleStyle:(id)arg1 index:(int)arg2;
- (void)updateReaderItemViewBrandLiveContentStyle:(id)arg1 index:(int)arg2;
- (id)itemViewWithShowtype:(long long)arg1 index:(unsigned int)arg2;
- (BOOL)isItemNoCover:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)handleMenuControllerWillHideMenuNotification:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onFavorite:(id)arg1;
- (void)onReaderItemBeginTouch:(unsigned int)arg1;
- (void)onReaderItemClick:(unsigned int)arg1 itemView:(id)arg2;
- (void)jumpWeappOpWrap:(id)arg1;
- (BOOL)readerItemCanShowLongPressMenu:(unsigned int)arg1;
- (void)onReaderItemLongPress:(unsigned int)arg1;
- (void)onReaderItemDidLoadCoverImage:(unsigned int)arg1 coverImage:(id)arg2 cover:(id)arg3;
- (id)getReadWraps;
- (BOOL)canPeek;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(CGPoint)arg2 inCoordinateView:(id)arg3;
- (CGRect)previewingSourceRectForLocation:(CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)brandFinderLiveBaseCardViewDidClick:(id)arg1;
- (void)brandFinderLiveBaseCardViewDidLongClick:(id)arg1;
- (void)multiReaderMessageCellViewLiveStatusChangedForIndex:(unsigned int)arg1;
- (void)multiReaderMessageCellViewReplayStatusChangedForIndex:(unsigned int)arg1;
- (void)multiReaderMessageCellViewRecommendReasonChangedForIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end
