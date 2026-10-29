@interface MMImgFullScreenContainer : MMUIScrollView <UIScrollViewDelegate>
{
    BOOL m_bIsTilingPage; // +0x8
    NSMutableDictionary * dicVisiblePageIndex; // +0x10
    int m_iNumberOfPages; // +0x18
    int m_iCurrentPage; // +0x1c
    id <MMImgFullScreenContainerDelegate> m_delegate; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)clearView;
- (void)tilePages;
- (BOOL)isDisplayingPageForIndex:(unsigned long long)arg1;
- (id)getPageForIndex:(unsigned long long)arg1;
- (void)setM_iCurrentPage:(int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (CGRect)frameForPagingScrollView;
- (CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (CGSize)contentSizeForPagingScrollView;
- (CGPoint)contentOffsetForPagingScrollView;
- (unsigned long long)imageCount;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (id)getPhotoAtIndex:(unsigned long long)arg1;
- (void)updatePhotoAtIndex:(unsigned long long)arg1;
- (void)transitionToNewSize;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (int)m_iNumberOfPages;
- (void)setM_iNumberOfPages:(int)arg1;
- (int)m_iCurrentPage;
- (void).cxx_destruct;
@end
