@interface CvPhotoCamera : CvAbstractCamera
{
    AVCaptureStillImageOutput * stillImageOutput; // +0x60
    id <CvPhotoCameraDelegate> delegate; // +0x68
}
- (void)takePicture;
- (void)stop;
- (void)createStillImageOutput;
- (void)createCaptureOutput;
- (void)createCustomVideoPreview;
- (id)stillImageOutput;
- (void)setStillImageOutput:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
@end
