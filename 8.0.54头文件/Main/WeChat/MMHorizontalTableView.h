@interface MMHorizontalTableView : UIScrollView <UIScrollViewDelegate>
{
    NSMutableSet * recycledCells; // +0x8
    NSMutableSet * visibleCells; // +0x10
    NSMutableArray * originPointList; // +0x18
    id <MMHorizontalTableViewDelegate> viewDelegate; // +0x20
    id <MMHorizontalTableViewDataSource> dataSource; // +0x28
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)reloadData;
- (float)contentSizeWidth;
- (void)calculateAllCellOrigin;
- (void)tileView;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (BOOL)isDisplayingCellForIndex:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void).cxx_destruct;
@end

