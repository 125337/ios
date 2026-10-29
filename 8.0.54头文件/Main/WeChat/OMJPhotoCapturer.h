@interface OMJPhotoCapturer : NSObject <AVCapturePhotoCaptureDelegate>
{
    AVCapturePhotoSettings * _requestedPhotoSettings; // +0x8
    id <OMJPhotoCapturerDelegate> _delegate; // +0x10
    NSMutableArray * _photos; // +0x18
}
- (id)initWithRequestedPhotoSettings:(id)arg1;
- (void)didFinish;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (id)requestedPhotoSettings;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)photos;
- (void)setPhotos:(id)arg1;
- (void).cxx_destruct;
@end

