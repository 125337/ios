@interface MMAssetPickerActionBottomView : UIView
{
    UIView * _backgroundView; // +0x8
    MMUIButton * _albumButton; // +0x10
    MMUIButton * _cameraButton; // +0x18
    id /* block */ _albumBlock; // +0x20
    id /* block */ _cameraBlock; // +0x28
}
- (void)setBackgroundViewColor:(id)arg1;
- (void)setBackgroundViewAlpha:(double)arg1;
- (id)initWithFrame:(CGRect)arg1 albumBlock:(id /* block */)arg2 cameraBlock:(id /* block */)arg3;
- (void)initView;
- (void)initBackgroundView;
- (void)initAlbumButton;
- (void)initCameraButton;
- (id)createActionButton;
- (void)updateAlbumButtonState:(BOOL)arg1 cameraButtonState:(BOOL)arg2;
- (void)onAlbumButtonClicked:(id)arg1;
- (void)onCameraButtonClicked:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)albumButton;
- (void)setAlbumButton:(id)arg1;
- (id)cameraButton;
- (void)setCameraButton:(id)arg1;
- (id /* block */)albumBlock;
- (void)setAlbumBlock:(id /* block */)arg1;
- (id /* block */)cameraBlock;
- (void)setCameraBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

