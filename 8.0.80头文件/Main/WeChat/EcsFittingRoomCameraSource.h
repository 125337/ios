@interface EcsFittingRoomCameraSource : NSObject <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate>
{
    BOOL _captured; // +0x8
    BOOL _cancelPending; // +0x9
    id <EcsFittingRoomCameraSourceDelegate> _delegate; // +0x10
    long long _minimumImageEdge; // +0x18
    double _maximumImageAspectRatio; // +0x20
}
- (void)captureFromHost:(id)arg1;
- (void)openCameraFromHost:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)handleCapturedImage:(id)arg1 imageData:(id)arg2;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightCameraClose:(id)arg1;
- (void)onSightCameraViewDidDisappear:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)minimumImageEdge;
- (void)setMinimumImageEdge:(long long)arg1;
- (double)maximumImageAspectRatio;
- (void)setMaximumImageAspectRatio:(double)arg1;
- (BOOL)captured;
- (void)setCaptured:(BOOL)arg1;
- (BOOL)cancelPending;
- (void)setCancelPending:(BOOL)arg1;
- (void).cxx_destruct;
@end
