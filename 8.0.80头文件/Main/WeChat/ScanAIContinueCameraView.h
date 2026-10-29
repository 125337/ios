@interface ScanAIContinueCameraView : UIView
{
    id <ScanAIContinueCameraViewDelegate> _delegate; // +0x8
    UIView * _bottomControlsBackgroundView; // +0x10
    UIButton * _closeButton; // +0x18
    UIButton * _switchCameraButton; // +0x20
    UIButton * _flashButton; // +0x28
    UIButton * _shutterButton; // +0x30
    UIView * _shutterInnerView; // +0x38
    UIButton * _albumButton; // +0x40
    UIView * _resultTransitionOverlayView; // +0x48
    UIVisualEffectView * _resultTransitionBlurView; // +0x50
    UIImageView * _resultTransitionImageView; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (id)iconButtonWithImageName:(id)arg1 imageSize:(double)arg2 accessibilityLabel:(id)arg3;
- (void)applyBottomIconShadowToButton:(id)arg1;
- (void)updateWithCameraOperable:(BOOL)arg1 albumSelectable:(BOOL)arg2 switchCameraEnabled:(BOOL)arg3 flashEnabled:(BOOL)arg4 flashSelected:(BOOL)arg5 usingFrontCamera:(BOOL)arg6;
- (void)prepareResultTransitionWithImage:(id)arg1 inContainer:(id)arg2;
- (void)playPreparedResultTransitionWithCompletion:(id /* block */)arg1;
- (BOOL)moveResultTransitionToContainer:(id)arg1;
- (void)fadeOutResultTransitionWithCompletion:(id /* block */)arg1;
- (void)removeResultTransition;
- (void)closeButtonClicked;
- (void)switchCameraButtonClicked;
- (void)flashButtonClicked;
- (void)shutterButtonClicked;
- (void)albumButtonClicked;
- (void)pinchGestureChanged:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bottomControlsBackgroundView;
- (void)setBottomControlsBackgroundView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)switchCameraButton;
- (void)setSwitchCameraButton:(id)arg1;
- (id)flashButton;
- (void)setFlashButton:(id)arg1;
- (id)shutterButton;
- (void)setShutterButton:(id)arg1;
- (id)shutterInnerView;
- (void)setShutterInnerView:(id)arg1;
- (id)albumButton;
- (void)setAlbumButton:(id)arg1;
- (id)resultTransitionOverlayView;
- (void)setResultTransitionOverlayView:(id)arg1;
- (id)resultTransitionBlurView;
- (void)setResultTransitionBlurView:(id)arg1;
- (id)resultTransitionImageView;
- (void)setResultTransitionImageView:(id)arg1;
- (void).cxx_destruct;
@end
