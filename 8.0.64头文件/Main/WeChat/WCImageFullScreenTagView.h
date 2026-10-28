@interface WCImageFullScreenTagView : UIView
{
    BOOL _autoAdjustsTags; // +0x8
    WCImageFullScreenTagViewModel * _viewModel; // +0x10
    id <WCImageFullScreenTagViewDelegate> _delegate; // +0x18
    WCLivePhotoButton * _livePhotoButton; // +0x20
    ImageBrowseButton * _imageSearchButton; // +0x28
    double _viewWidth; // +0x30
    CGSize _livePhotoBtnSize; // +0x38
    UIEdgeInsets _tagSafeArea; // +0x48
    UIEdgeInsets _tagPadding; // +0x68
}
- (id)initWithViewModel:(id)arg1 frame:(CGRect)arg2;
- (void)setAutoAdjustsTags:(BOOL)arg1;
- (void)setTagSafeArea:(UIEdgeInsets)arg1;
- (double)safeAreaInsetBottom;
- (double)_calculateHeight;
- (void)loadLivePhotoButton;
- (void)livePhotoButtonClicked:(id)arg1;
- (void)loadImageSearchButton;
- (void)imageSearchButtonClicked:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)autoAdjustsTags;
- (UIEdgeInsets)tagSafeArea;
- (UIEdgeInsets)tagPadding;
- (void)setTagPadding:(UIEdgeInsets)arg1;
- (id)livePhotoButton;
- (void)setLivePhotoButton:(id)arg1;
- (id)imageSearchButton;
- (void)setImageSearchButton:(id)arg1;
- (double)viewWidth;
- (void)setViewWidth:(double)arg1;
- (CGSize)livePhotoBtnSize;
- (void)setLivePhotoBtnSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
