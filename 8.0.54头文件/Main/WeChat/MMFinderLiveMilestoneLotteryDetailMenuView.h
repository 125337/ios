@interface MMFinderLiveMilestoneLotteryDetailMenuView : MMFinderLiveMilestoneLotteryDetailSubView <UIScrollViewDelegate>
{
    BOOL _isFirstLayout; // +0x8
    double _initScrollOffset; // +0x10
    NSArray * _items; // +0x18
    UIView * _itemContainerView; // +0x20
    UIScrollView * _itemScrollView; // +0x28
    UILabel * _titleLabel; // +0x30
    UILabel * _subtitleLabel; // +0x38
    MMFinderLiveMilestoneLotteryViewModel * _vm; // +0x40
    CGSize _lastLayoutSize; // +0x48
}
- (id)initWithViewModel:(id)arg1 items:(id)arg2;
- (id)getMenuItems;
- (void)commonInitWithTitle:(id)arg1 subtitle:(id)arg2;
- (double)currentScrollOffset;
- (void)layoutSubviews;
- (void)autoScrollToLatestLottery;
- (void)reloadGradientLayerIfNeeded;
- (void)rebuildItemViews;
- (id)buildViewWithItem:(id)arg1 index:(unsigned long long)arg2;
- (void)onItemButtonClicked:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)initScrollOffset;
- (void)setInitScrollOffset:(double)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (CGSize)lastLayoutSize;
- (void)setLastLayoutSize:(CGSize)arg1;
- (id)itemContainerView;
- (void)setItemContainerView:(id)arg1;
- (id)itemScrollView;
- (void)setItemScrollView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (BOOL)isFirstLayout;
- (void)setIsFirstLayout:(BOOL)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (void).cxx_destruct;
@end

