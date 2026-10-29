@interface BTOftenReadBarViewCell : MMTableViewCell <UIScrollViewDelegate>
{
    BTOftenReadSectionData * _sectionData; // +0x8
    id <BTOftenReadBarViewCellDelegate> _barViewDelegate; // +0x10
    BTOftenReadHeaderView * _headerView; // +0x18
    BTBrandBarScrollView * _scrollView; // +0x20
    NSMutableArray * _itemViewArr; // +0x28
    unsigned long long _itemNumPerPage; // +0x30
    unsigned long long _pageIndexBeforeScroll; // +0x38
}
+ (double)cellHeight;
+ (double)headerViewHeight;
+ (double)barViewHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)resetPosition;
- (void)initSubviews;
- (void)setSectionData:(id)arg1;
- (id)visibleItemViewArr;
- (void)layoutSubviews;
- (double)itemViewWidth;
- (void)setItemViewAlpha:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)callOftenReadBarItemViewExposed;
- (void)onClickContact:(id)arg1;
- (void)onClickLivingButton:(id)arg1;
- (void)updateHeaderViewPosWithContentOffsetX:(double)arg1;
- (id)sectionData;
- (id)barViewDelegate;
- (void)setBarViewDelegate:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)itemViewArr;
- (void)setItemViewArr:(id)arg1;
- (unsigned long long)itemNumPerPage;
- (void)setItemNumPerPage:(unsigned long long)arg1;
- (unsigned long long)pageIndexBeforeScroll;
- (void)setPageIndexBeforeScroll:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

