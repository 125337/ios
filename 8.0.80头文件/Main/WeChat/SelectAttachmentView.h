@interface SelectAttachmentView : MMUIView <UIScrollViewDelegate, scrollViewDelegate>
{
    id <SelectAttachmentViewDelegate> _delegate; // +0x8
    id <SelectAttachmentViewDataSource> _dataSource; // +0x10
    MMScrollView * _scrollView; // +0x18
    UIPageControl * _pageController; // +0x20
    UIImageView * m_tipsView; // +0x28
    BOOL bPageControlUsed; // +0x30
    unsigned long long iCount; // +0x38
    unsigned long long iRow; // +0x40
    unsigned long long iCol; // +0x48
    unsigned long long iPage; // +0x50
    BOOL isLayout; // +0x58
    NSMutableArray * m_arrAttachmentButton; // +0x60
    unsigned long long m_tempCurrentPages; // +0x68
    BOOL m_isChangePage; // +0x70
    BOOL m_isVisable; // +0x71
    CGSize m_lastLayoutSize; // +0x78
    unsigned long long _lastPage; // +0x88
}
- (id)init;
- (void)dealloc;
- (double)getContentMarginCurOri;
- (double)resolveItemOffset:(double *)arg1 itemWidth:(double)arg2;
- (CGRect)calculateEmoticonViewFrameAtIndex:(unsigned int)arg1 forViewWidth:(double)arg2;
- (double)itemOffset;
- (void)layoutSubviews;
- (void)resetView;
- (void)resetVisible;
- (void)resetContainerViewOffset;
- (void)changeToInputToolWeAppNotShowPageWithWeAppIndex:(long long)arg1;
- (void)scrollViewToPage:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)onContentVisableChange;
- (void)onPageControllerChangePage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)setVoiceOverAccessibilityElements:(BOOL)arg1;
- (id)nextAccessibilityElementForNextPage:(unsigned long long)arg1 andLastPage:(unsigned long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (unsigned long long)lastPage;
- (void)setLastPage:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
