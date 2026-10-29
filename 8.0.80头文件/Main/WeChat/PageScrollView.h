@interface PageScrollView : MMScrollView <WCImageScrollViewDelegate>
{
    NSMutableSet * _recycledPages; // +0x10
    NSMutableSet * _visiblePages; // +0x18
    BOOL _reloading; // +0x20
    BOOL _supportOrientation; // +0x21
    id <PageScrollViewDataSource> _pageDataSource; // +0x28
    id <PageScrollViewDelegate> _pageDelegate; // +0x30
    double m_padding; // +0x38
    UIEdgeInsets _tagSafeArea; // +0x40
}
- (unsigned long long)getCurrentIndex;
- (unsigned long long)getItemsCount;
- (id)getViewForItem:(unsigned long long)arg1;
- (id)imageViewModelForItem:(unsigned long long)arg1;
- (CGRect)frameForPageAtItem:(unsigned long long)arg1;
- (BOOL)isDisplayingPageForItem:(unsigned long long)arg1;
- (id)dequeueRecycledPage;
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)configPadding:(double)arg1;
- (double)Padding;
- (void)onSingleTapWCImageScrollView;
- (void)onDoubleTapWCImageScrollView;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenItemDragBegin;
- (void)onFullScreenItemDragEnd;
- (void)onFullScreenItemDidDragToRect:(CGRect)arg1;
- (void)reloadData;
- (void)foreceReloadData;
- (void)removeVisiblePageAtIndex:(unsigned long long)arg1;
- (void)updatePageAtIndex:(unsigned long long)arg1;
- (id)viewAtPageIndex:(unsigned long long)arg1;
- (id)visiblePageAtIndex:(unsigned long long)arg1;
- (BOOL)supportOrientation;
- (void)setSupportOrientation:(BOOL)arg1;
- (id)recycledPages;
- (void)setRecycledPages:(id)arg1;
- (id)visiblePages;
- (void)setVisiblePages:(id)arg1;
- (id)pageDataSource;
- (void)setPageDataSource:(id)arg1;
- (id)pageDelegate;
- (void)setPageDelegate:(id)arg1;
- (double)m_padding;
- (void)setM_padding:(double)arg1;
- (UIEdgeInsets)tagSafeArea;
- (void)setTagSafeArea:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
