@interface IntelligentMsgImgFigurePageView : MMUIView <UIScrollViewDelegate, scrollViewDelegate>
{
    unsigned long long m_tempCurrentPages; // +0x8
    BOOL m_isChangePage; // +0x10
    BOOL m_isVisable; // +0x11
    MMScrollView * m_scrollView; // +0x18
    UIPageControl * m_pageController; // +0x20
    unsigned long long m_iCount; // +0x28
    unsigned long long m_iRow; // +0x30
    unsigned long long m_iCol; // +0x38
    unsigned long long m_iPage; // +0x40
    NSMutableArray * m_arrAttachmentButton; // +0x48
    NSArray * m_arrFaceClusterMessageItem; // +0x50
    id <IntelligentMsgImgFigurePageViewDelegate> _delegate; // +0x58
}
- (id)init;
- (void)dealloc;
- (BOOL)pointInScrollView:(CGPoint)arg1;
- (CGRect)calculateEmoticonViewFrameAtIndex:(unsigned int)arg1 forViewWidth:(double)arg2;
- (void)updateMsgImgFigurePageView:(id)arg1;
- (void)scrollViewToPage:(unsigned long long)arg1 animated:(BOOL)arg2;
- (id)createButton;
- (unsigned long long)numberOfRows;
- (unsigned long long)numberOfCols;
- (BOOL)isOnePage;
- (void)onPageControllerChangePage:(id)arg1;
- (void)onClickMsgImgButton:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
