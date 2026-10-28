@interface WCMediaImageScrollView : WCImageScrollView <WCImageFullScreenTagViewDelegate>
{
    WCMediaImageViewModel * _viewModel; // +0x40
    UIView * _imageTagSuperView; // +0x48
    WCImageFullScreenTagView * _imageTagView; // +0x50
    UIEdgeInsets _imageTagSafeArea; // +0x58
    UIEdgeInsets _imageTagPadding; // +0x78
}
- (void)displayViewModel:(id)arg1 withImage:(id)arg2 frame:(CGRect)arg3;
- (void)changeShowUhdImage:(id)arg1;
- (void)dealloc;
- (void)removeFromSuperview;
- (void)bringImageTagViewToFront;
- (void)reloadImageTagView;
- (void)setImageTagSafeArea:(UIEdgeInsets)arg1;
- (void)updateImageTagSafeArea;
- (void)layoutImageTagView;
- (void)updateVisibleForImageTagView:(BOOL)arg1;
- (void)internalDisplayImageMaterial:(id)arg1 withFrame:(CGRect)arg2;
- (void)playableImageView:(id)arg1 didChangePlayerState:(unsigned long long)arg2;
- (void)scrollViewDidChangeAdjustedContentInset:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)livePhotoButtonClickedInImageTagView:(id)arg1;
- (void)reportLivePhotoExposeData;
- (void)reportLivePhotoPlayData:(long long)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (UIEdgeInsets)imageTagSafeArea;
- (UIEdgeInsets)imageTagPadding;
- (void)setImageTagPadding:(UIEdgeInsets)arg1;
- (id)imageTagSuperView;
- (void)setImageTagSuperView:(id)arg1;
- (id)imageTagView;
- (void)setImageTagView:(id)arg1;
- (void).cxx_destruct;
@end
