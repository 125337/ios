@interface MultiImageScrollView : MMUIScrollView <UIScrollViewDelegate, ImageScrollViewDelegate, WCActionSheetDelegate>
{
    NSMutableDictionary * dicVisiblePageIndex; // +0x8
    int m_iNumberOfPages; // +0x10
    int m_iCurrentPage; // +0x14
    BOOL m_bFromPicker; // +0x18
    BOOL m_bDragAnimating; // +0x19
    BOOL _m_isFromWebview; // +0x1a
    BOOL _m_needUseWindowFrame; // +0x1b
    BOOL _isTilingPage; // +0x1c
    BOOL _isMovingToNextPage; // +0x1d
    int _m_iPreviousPage; // +0x20
    id <MultiImageScrollViewDelegate> m_delegate; // +0x28
    MMUIViewController * m_viewController; // +0x30
}
- (void)hideStatusBar;
- (void)showStatusBar;
- (void)handleViewWillAppear;
- (void)handleViewWillDisappear;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)ImageScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)ImageScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)ImageScrollViewWillBeginDragging:(id)arg1;
- (void)ImageScrollViewDidEndDecelerating:(id)arg1;
- (void)handleLivePhotoLongPress:(long long)arg1;
- (void)onUpdateLivePhotoIconDisplayStatus:(id)arg1;
- (void)initScrollView;
- (id)initWithFrame:(CGRect)arg1;
- (void)tilePages;
- (BOOL)isDisplayingPageForIndex:(unsigned long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (void)setContentSize:(CGSize)arg1;
- (CGRect)frameForPagingScrollView:(BOOL)arg1;
- (CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (CGSize)contentSizeForPagingScrollView;
- (CGPoint)contentOffsetForPagingScrollView;
- (void)adjustToNewSize;
- (void)adjustToMinimumScale;
- (id)imageAtPage:(unsigned long long)arg1;
- (id)viewAtPage:(unsigned long long)arg1 frame:(CGRect)arg2;
- (unsigned long long)imageCount;
- (void)updateTitleView;
- (void)updatePageCount:(unsigned int)arg1;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (void)changeToPageAtIndex:(unsigned long long)arg1;
- (void)changeToNextPageWithCompletion:(id /* block */)arg1;
- (void)updatePhotoatIndex:(unsigned long long)arg1;
- (id)getPhotoatIndex:(unsigned long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)reloadDataWithPageCount:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (void)setM_iCurrentPage:(int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_viewController;
- (void)setM_viewController:(id)arg1;
- (int)m_iNumberOfPages;
- (void)setM_iNumberOfPages:(int)arg1;
- (int)m_iCurrentPage;
- (BOOL)m_bFromPicker;
- (void)setM_bFromPicker:(BOOL)arg1;
- (int)m_iPreviousPage;
- (void)setM_iPreviousPage:(int)arg1;
- (BOOL)m_isFromWebview;
- (void)setM_isFromWebview:(BOOL)arg1;
- (BOOL)m_needUseWindowFrame;
- (void)setM_needUseWindowFrame:(BOOL)arg1;
- (BOOL)isTilingPage;
- (void)setIsTilingPage:(BOOL)arg1;
- (BOOL)isMovingToNextPage;
- (void)setIsMovingToNextPage:(BOOL)arg1;
- (void).cxx_destruct;
@end
