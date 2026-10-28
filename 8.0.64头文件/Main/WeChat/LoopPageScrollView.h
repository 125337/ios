@interface LoopPageScrollView : MMUIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    MMUIScrollView * m_scrollView; // +0x8
    id <LoopPageScrollViewDataSourceDelegate> m_delegate; // +0x10
    int m_curPageNum; // +0x18
    UIPanGestureRecognizer * m_panGesture; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)getPanGestureRecognizer;
- (id)initWithFrame:(CGRect)arg1 withDelegate:(id)arg2;
- (void)layoutSubviews;
- (void)reloadData;
- (int)getRealPageNum:(int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)changeToNextPage;
- (void)changeToLastPage;
- (void)changeToNPage:(unsigned int)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)m_scrollView;
- (void)setM_scrollView:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (int)m_curPageNum;
- (void)setM_curPageNum:(int)arg1;
- (id)m_panGesture;
- (void)setM_panGesture:(id)arg1;
- (void).cxx_destruct;
@end
