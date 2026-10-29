@interface BTLiveSectionBarCellView : MMTableViewCell <UIScrollViewDelegate>
{
    BOOL _isTitleUp; // +0x8
    BTLiveSectionData * _sectionData; // +0x10
    id <BTLiveSectionBarCellViewDelegate> _barViewDelegate; // +0x18
    BTBrandBarScrollView * _scrollView; // +0x20
    BTLiveSectionBarHeaderView * _headerView; // +0x28
    NSMutableArray * _itemViewArr; // +0x30
    unsigned long long _pageIndexBeforeScroll; // +0x38
    UITapGestureRecognizer * _headerTapGesture; // +0x40
    unsigned long long _itemNumPerPage; // +0x48
    double _itemWidth; // +0x50
    double _itemHeight; // +0x58
    double _pageWidth; // +0x60
    UIView * _splitLineView; // +0x68
    unsigned long long _splitLineIndex; // +0x70
    NSMutableArray * _voiceOverElements; // +0x78
}
+ (double)cellHeight;
+ (double)cellHeightForFold;
+ (double)barViewHeight;
+ (double)headerViewHeight;
+ (double)headerViewHeightForFold;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)resetPosition;
- (void)initSubviews;
- (void)setSectionData:(id)arg1;
- (void)setupSplitLine;
- (void)initSpliteLineView;
- (void)setupViewWhenScrollViewHidden;
- (void)setupViewWhenScrollViewShow;
- (void)layoutSubviews;
- (void)layoutItemViews;
- (void)layoutSpliteLineAndGetCurrentWidth:(double *)arg1;
- (double)itemViewWidth;
- (void)setItemViewAlpha:(id)arg1;
- (void)setItemViewOffset:(id)arg1 index:(long long)arg2 splitLineWidth:(double)arg3;
- (id)visibleItemViewArr;
- (void)resetContentOffset;
- (long long)getCurrentPageIndex;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)callLiveBarItemViewExposed;
- (void)expendStateWithAnimated;
- (void)foldStateWithAnimated;
- (void)onClickContact:(id)arg1;
- (void)onClickExpand;
- (void)updateHeaderViewPosWithContentOffsetX:(double)arg1;
- (id)voiceOverElements;
- (void)initVoiceOverElements;
- (BOOL)isAccessibilityElement;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)sectionData;
- (id)barViewDelegate;
- (void)setBarViewDelegate:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (BOOL)isTitleUp;
- (void)setIsTitleUp:(BOOL)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)itemViewArr;
- (void)setItemViewArr:(id)arg1;
- (unsigned long long)pageIndexBeforeScroll;
- (void)setPageIndexBeforeScroll:(unsigned long long)arg1;
- (id)headerTapGesture;
- (void)setHeaderTapGesture:(id)arg1;
- (unsigned long long)itemNumPerPage;
- (void)setItemNumPerPage:(unsigned long long)arg1;
- (double)itemWidth;
- (void)setItemWidth:(double)arg1;
- (double)itemHeight;
- (void)setItemHeight:(double)arg1;
- (double)pageWidth;
- (void)setPageWidth:(double)arg1;
- (id)splitLineView;
- (void)setSplitLineView:(id)arg1;
- (unsigned long long)splitLineIndex;
- (void)setSplitLineIndex:(unsigned long long)arg1;
- (void)setVoiceOverElements:(id)arg1;
- (void).cxx_destruct;
@end

