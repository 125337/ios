@interface MMWebImageViewWithThumbPreview : MMUIView <EmoticonPreviewWindowViewControllerDelegate, MMWebImageViewDelegate>
{
    MMWebImageView * m_imageView; // +0x8
    MMImageView * m_imageFocusView; // +0x10
    EmojiInfo * _emojiInfo; // +0x18
    unsigned long long _index; // +0x20
    EmoticonPreviewWindowViewController * _previewVC; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)showPreview;
- (void)hidePreview;
- (id)previewVC;
- (void)setEmojiInfo:(id)arg1;
- (void)setImageStatic:(BOOL)arg1;
- (void)setDefaultImage:(id)arg1;
- (BOOL)isPreviewShowing;
- (void)onFinishPreviewAndChangeToPid:(id)arg1;
- (id)m_imageView;
- (void)setM_imageView:(id)arg1;
- (id)m_imageFocusView;
- (void)setM_imageFocusView:(id)arg1;
- (id)emojiInfo;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (void)setPreviewVC:(id)arg1;
- (void).cxx_destruct;
@end

