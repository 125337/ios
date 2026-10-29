@interface SightCameraControlsColumn : UIView
{
    BOOL _duoPortraitToolbarAlignment; // +0x8
    NSArray * _lockedControlCenters; // +0x10
    UIView * _switchButton; // +0x18
    UIView * _recordView; // +0x20
    UIView * _captureButton; // +0x28
    UIView * _progressView; // +0x30
    UIView * _flashButton; // +0x38
    UIView * _cancelButton; // +0x40
}
- (void)installRecordView:(id)arg1 captureButton:(id)arg2 progressView:(id)arg3 switchButton:(id)arg4 flashButton:(id)arg5 cancelButton:(id)arg6;
- (void)restoreControlsToToolbar:(id)arg1;
- (void)setLockedControlCenters:(id)arg1;
- (void)clearLockedControlCenters;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)lockedControlCenters;
- (BOOL)duoPortraitToolbarAlignment;
- (void)setDuoPortraitToolbarAlignment:(BOOL)arg1;
- (id)switchButton;
- (void)setSwitchButton:(id)arg1;
- (id)recordView;
- (void)setRecordView:(id)arg1;
- (id)captureButton;
- (void)setCaptureButton:(id)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)flashButton;
- (void)setFlashButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end
