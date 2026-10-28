@interface HorizontalTableView : MMUIView <UIScrollViewDelegate>
{
    MMUIScrollView * m_scrollView; // +0x8
    NSMutableArray * m_cellFrames; // +0x10
    CGRect m_visibleRect; // +0x18
    NSMutableDictionary * m_reusableCellListDic; // +0x38
    NSMutableArray * m_visibleCells; // +0x40
    id <HorizontalTableViewDataSource> m_dataSource; // +0x48
    id <HorizontalTableViewDelegate> m_viewDelegate; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setDataSource:(id)arg1;
- (void)setViewDelegate:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)inqueueReusableWithCell:(id)arg1;
- (void)setContentOffset:(CGPoint)arg1 animated:(BOOL)arg2;
- (void)setScrollViewContentEdgeInsets:(UIEdgeInsets)arg1;
- (void)reloadData;
- (BOOL)rect:(CGRect)arg1 atLeftOf:(CGRect)arg2;
- (BOOL)rect:(CGRect)arg1 atRightOf:(CGRect)arg2;
- (BOOL)rect:(CGRect)arg1 atRangeOf:(CGRect)arg2;
- (void)relayoutScrollViewWithOffset:(double)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidTap:(id)arg1;
- (void)addCellAtIndex:(long long)arg1 rect:(CGRect)arg2;
- (id)m_scrollView;
- (void)setM_scrollView:(id)arg1;
- (id)m_cellFrames;
- (void)setM_cellFrames:(id)arg1;
- (CGRect)m_visibleRect;
- (void)setM_visibleRect:(CGRect)arg1;
- (id)m_reusableCellListDic;
- (void)setM_reusableCellListDic:(id)arg1;
- (id)m_dataSource;
- (void)setM_dataSource:(id)arg1;
- (id)m_viewDelegate;
- (void)setM_viewDelegate:(id)arg1;
- (id)m_visibleCells;
- (void)setM_visibleCells:(id)arg1;
- (void).cxx_destruct;
@end
