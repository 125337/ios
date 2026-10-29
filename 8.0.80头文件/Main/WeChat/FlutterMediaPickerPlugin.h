@interface FlutterMediaPickerPlugin : NSObject <MMImagePickerManagerDelegate, MMSightCameraViewControllerDelegate, MMFlutterPlugin, WCFileBrowseDelegate>
{
    BOOL _isCaptureMode; // +0x8
    BOOL _isWithMeta; // +0x9
    id /* block */ _pendingResult; // +0x10
    NSTimer * _pendingTimer; // +0x18
    long long _pendingFileMaxCount; // +0x20
    UIViewController * _viewController; // +0x28
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onAttachedToViewController:(id)arg1;
- (void)onDetachedToViewController;
- (void)handleCaptureMedia:(id)arg1 result:(id /* block */)arg2;
- (void)handleSelectImages:(id)arg1 result:(id /* block */)arg2;
- (void)handleSelectFiles:(id)arg1 result:(id /* block */)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)onSightCameraClose:(id)arg1;
- (void)onSightCameraDidPopOrDismiss:(id)arg1;
- (void)onFileBrowseMultiSelect:(id)arg1;
- (id)localPathForBrowseInfo:(id)arg1;
- (void)onFileBrowserCancel;
- (void)startPendingTimer;
- (void)cancelPendingTimer;
- (void)completePendingWithResult:(id)arg1;
- (id)topViewController;
- (void)setFlutterPageStateEnabled:(BOOL)arg1;
- (id)pickedImageWithPath:(id)arg1 info:(id)arg2 lensGroup:(id)arg3;
- (void)completeCapturedImageWithMeta:(id)arg1 editImageAttr:(id)arg2 lensModel:(id)arg3;
- (void)writeCapturedLocation:(CLLocationCoordinate2D)arg1 editImageAttr:(id)arg2 attempt:(long long)arg3;
- (id)saveImageInfoToTempFile:(id)arg1;
- (id /* block */)pendingResult;
- (void)setPendingResult:(id /* block */)arg1;
- (id)pendingTimer;
- (void)setPendingTimer:(id)arg1;
- (BOOL)isCaptureMode;
- (void)setIsCaptureMode:(BOOL)arg1;
- (BOOL)isWithMeta;
- (void)setIsWithMeta:(BOOL)arg1;
- (long long)pendingFileMaxCount;
- (void)setPendingFileMaxCount:(long long)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end
