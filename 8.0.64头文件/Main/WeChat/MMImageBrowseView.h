@interface MMImageBrowseView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    id <MMImgageBrowseViewDelegate> m_delegate; // +0x8
    UIView * m_vImage; // +0x10
    CGSize m_szFit; // +0x18
    MMEmoticonView * m_emoticonView; // +0x28
    MMImageScrollViewHelper * m_scrollViewHelper; // +0x30
    BOOL _isDisplayingNoImage; // +0x38
}
- (id)init;
- (void)setFrame:(CGRect)arg1;
- (void)InitImageView;
- (void)InitEmoticonView:(id)arg1;
- (id)getImageView;
- (void)UpdateImage:(id)arg1;
- (void)UpdateImage:(id)arg1 orientation:(long long)arg2 supportHorizontalLong:(BOOL)arg3;
- (void)UpdateImage:(id)arg1 orientation:(long long)arg2;
- (void)UpdateData:(id)arg1;
- (void)UpdateData:(id)arg1 orientation:(long long)arg2;
- (void)UpdateEmoticon:(id)arg1;
- (void)ResetScroll;
- (void)ZoomForPoint:(CGPoint)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (id)viewForZooming;
- (id)getScrollView;
- (void)scrollViewDidZoom:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (void)onDoubleTap:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_emoticonView;
- (void)setM_emoticonView:(id)arg1;
- (BOOL)isDisplayingNoImage;
- (void).cxx_destruct;
@end
