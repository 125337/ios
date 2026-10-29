@interface MsgImgFullScreenContainer : MMUIScrollView <UIScrollViewDelegate, ImageScrollViewDelegate, WCActionSheetDelegate>
{
    NSMutableDictionary * dicVisiblePageIndex; // +0x8
    int m_iNumberOfPages; // +0x10
    int m_iCurrentPage; // +0x14
    BOOL m_bFromPicker; // +0x18
    CGRect _originImageRectInScreen; // +0x20
    BOOL m_bIsTilingPage; // +0x40
    BOOL _forceDisableScroll; // +0x41
    id <MsgImgFullScreenContainerDelegate> m_delegate; // +0x48
    MMUIViewController * m_viewController; // +0x50
}
- (void)setFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onSavedPhotosAlbum;
- (void)onSavedPhotosAlbum:(id /* block */)arg1;
- (void)onOperate;
- (void)forwardMessage;
- (void)addToFavorites;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)OnLongPressBegin:(id)arg1;
- (void)onFullScreenItemChangeAlpha:(double)arg1;
- (void)onFullScreenItemDragToClose;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)initScrollView;
- (id)initWithFrame:(CGRect)arg1;
- (void)animateShowWithOriginRectInScreen:(CGRect)arg1;
- (void)tilePages;
- (void)setContentOffset:(CGPoint)arg1;
- (BOOL)isDisplayingPageForIndex:(unsigned long long)arg1;
- (id)getPageForIndex:(unsigned long long)arg1;
- (void)setM_iCurrentPage:(int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)accessibilityScroll:(long long)arg1;
- (void)ImageScrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)ImageScrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (CGRect)frameForPagingScrollView;
- (CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (CGSize)contentSizeForPagingScrollView;
- (CGPoint)contentOffsetForPagingScrollView;
- (id)imageAtPage:(unsigned long long)arg1;
- (id)viewAtPage:(unsigned long long)arg1 frame:(CGRect)arg2;
- (unsigned long long)imageCount;
- (void)updatePageCount:(unsigned int)arg1;
- (void)clearView;
- (void)setPage:(unsigned int)arg1 atIndex:(unsigned long long)arg2;
- (void)updatePhotoatIndex:(unsigned long long)arg1;
- (id)getPhotoatIndex:(unsigned long long)arg1;
- (void)transitionToNewSize;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_viewController;
- (void)setM_viewController:(id)arg1;
- (int)m_iNumberOfPages;
- (void)setM_iNumberOfPages:(int)arg1;
- (int)m_iCurrentPage;
- (BOOL)m_bFromPicker;
- (void)setM_bFromPicker:(BOOL)arg1;
- (BOOL)forceDisableScroll;
- (void)setForceDisableScroll:(BOOL)arg1;
- (void).cxx_destruct;
@end
