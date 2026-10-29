@interface CameraScanOCRContentView : CameraScanBaseContentView
{
    double _scanLineTopCenterY; // +0x8
    double _scanLineBottomCenterY; // +0x10
    UIButton * _takePhotoButton; // +0x18
    MMSightRecordView * _takePhotoView; // +0x20
    UIImageView * _scanLineView; // +0x28
    CAAnimationGroup * _scanLineAnimation; // +0x30
}
- (id)init;
- (void)setupSubViews;
- (void)setupTakePhotoButton;
- (void)setupTakePhotoView;
- (void)setupScanLineView;
- (void)layoutSubviews;
- (void)showTakePhotoButton;
- (void)hiddenTakePhotoButton;
- (void)onTakePhotoBtnClicked:(id)arg1;
- (void)onTakePhotoBtnPressed:(id)arg1;
- (void)startScanLineAnimation;
- (void)stopScanLineAnimation;
- (void)setCloseButtonBottom:(double)arg1 infoLableTop:(double)arg2;
- (id)takePhotoButton;
- (void)setTakePhotoButton:(id)arg1;
- (id)takePhotoView;
- (void)setTakePhotoView:(id)arg1;
- (id)scanLineView;
- (void)setScanLineView:(id)arg1;
- (id)scanLineAnimation;
- (void)setScanLineAnimation:(id)arg1;
- (void).cxx_destruct;
@end

