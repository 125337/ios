@interface CvPhotoCamera : CvAbstractCamera
{
    AVCaptureStillImageOutput * stillImageOutput; // +0x18
    id <CvPhotoCameraDelegate> _delegate; // +0x20
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
