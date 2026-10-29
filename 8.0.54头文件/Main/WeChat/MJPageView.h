@interface MJPageView : MMUIView <MJPageViewInnerProtocol>
{
    id <MJPageViewDelegate> _delegate; // +0x8
    id <MJPageViewDataSource> _dataSource; // +0x10
    MJPageViewTitleView * _titleView; // +0x18
    MJPageViewContentView * _contentView; // +0x20
    long long _selectedIndex; // +0x28
    long long _pageCount; // +0x30
    MJPageViewLayout * _layout; // +0x38
    MJPageViewConfig * _config; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 layout:(id)arg2 config:(id)arg3;
- (void)setupViews;
- (void)reloadData;
- (void)clear;
- (void)scrollToPageAtIndex:(long long)arg1 animated:(BOOL)arg2;
- (void)invalidateLayout;
- (long long)visiblePageIndex;
- (void)setDataSource:(id)arg1;
- (id)pageView;
- (void)item:(id)arg1 changeSelectedToIndex:(long long)arg2 animated:(BOOL)arg3;
- (void)contentViewDidScrolled:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (long long)pageCount;
- (void)setPageCount:(long long)arg1;
- (id)layout;
- (id)config;
- (void).cxx_destruct;
@end

