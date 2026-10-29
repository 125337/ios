@interface FlutterSnsPlatformGalleryPlugin : NSObject <MMImagePickerManagerDelegate, MMFlutterPlugin, PlatformGalleryApi>
{
    id <SNSPluginDelegate> _delegate; // +0x8
    id /* block */ _selectGalleryCompletion; // +0x10
    id /* block */ _selectCameraCompletion; // +0x18
    UINavigationController * _currentPicker; // +0x20
    long long _shotCompletedTimes; // +0x28
    NSString * _actionTrace; // +0x30
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)selectMediaFromGalleryConfig:(id)arg1 completion:(id /* block */)arg2;
- (void)selectMediaFromCameraEnableVideo:(BOOL)arg1 enablePhoto:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)getLastPickActionDataWithCompletion:(id /* block */)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)ensureLocalPathsForImages:(id)arg1 completion:(id /* block */)arg2;
- (void)saveImageData:(id)arg1 toMMImage:(id)arg2;
- (void)saveUIImageFallbackToMMImage:(id)arg1;
- (id)genFlutterCacheImageFilePath;
- (long long)fileSizeAtPath:(id)arg1;
- (CGSize)readPixelSizeFromFile:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (id)platformMediaItemFromVideoInfo:(id)arg1;
- (id)platformMediaItemFromSightDraft:(id)arg1;
- (id)platformMediaItemFromMMImage:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)selectGalleryCompletion;
- (void)setSelectGalleryCompletion:(id /* block */)arg1;
- (id /* block */)selectCameraCompletion;
- (void)setSelectCameraCompletion:(id /* block */)arg1;
- (id)currentPicker;
- (void)setCurrentPicker:(id)arg1;
- (long long)shotCompletedTimes;
- (void)setShotCompletedTimes:(long long)arg1;
- (id)actionTrace;
- (void)setActionTrace:(id)arg1;
- (void).cxx_destruct;
@end
