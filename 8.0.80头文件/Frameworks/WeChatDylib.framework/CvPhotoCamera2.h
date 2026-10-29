@interface CvPhotoCamera2 : CvAbstractCamera2 <AVCapturePhotoCaptureDelegate>
{
    id <CvPhotoCameraDelegate2> _delegate; // +0x8
    AVCaptureStillImageOutput * _stillImageOutput; // +0x10
}
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)takePicture;
- (void)stop;
- (void)createStillImageOutput;
- (void)createCaptureOutput;
- (void)createCustomVideoPreview;
- (id)stillImageOutput;
- (void)setStillImageOutput:(id)arg1;
@end
