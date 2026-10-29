@interface WCImageFullScreenTagView : UIView
{
    WCImageFullScreenTagViewModel * _viewModel; // +0x8
    id <WCImageFullScreenTagViewDelegate> _delegate; // +0x10
    WCLivePhotoButton * _livePhotoButton; // +0x18
    UIEdgeInsets _tagSafeArea; // +0x20
    UIEdgeInsets _tagPadding; // +0x40
}
- (id)initWithViewModel:(id)arg1 frame:(CGRect)arg2;
- (void)setTagSafeArea:(UIEdgeInsets)arg1;
- (void)loadLivePhotoButton;
- (void)livePhotoButtonClicked:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (UIEdgeInsets)tagSafeArea;
- (UIEdgeInsets)tagPadding;
- (void)setTagPadding:(UIEdgeInsets)arg1;
- (id)livePhotoButton;
- (void)setLivePhotoButton:(id)arg1;
- (void).cxx_destruct;
@end

