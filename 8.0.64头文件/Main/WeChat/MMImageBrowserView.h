@interface MMImageBrowserView : MMMediaBrowserView <ImageScrollViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _useDarkMode; // +0x8
    ImageScrollView * _imageScrollView; // +0x10
    WCC2CImageBrowseButton * _livePhotoBtn; // +0x18
    UIPanGestureRecognizer * _panGesture; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 viewModel:(id)arg2;
- (void)layoutSubviews;
- (CGRect)getDisplayFrame;
- (id)imageScrollView;
- (id)livePhotoBtn;
- (void)onClickLivePhotoButton;
- (BOOL)canShowLivePhotoBtn;
- (void)onSingleTap:(id)arg1;
- (void)OnLongPress:(id)arg1;
- (void)handlePanGesture;
- (void)ImageScrollViewDidZoom:(id)arg1 withView:(id)arg2;
- (void)updateButtonColor;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setImageScrollView:(id)arg1;
- (void)setLivePhotoBtn:(id)arg1;
- (BOOL)useDarkMode;
- (void)setUseDarkMode:(BOOL)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (void).cxx_destruct;
@end
