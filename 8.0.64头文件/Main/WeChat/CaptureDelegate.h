@interface CaptureDelegate : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    int newFrame; // +0x8
    __CVBuffer * mCurrentImageBuffer; // +0x10
    char * imagedata; // +0x18
    _IplImage * image; // +0x20
    char * bgr_imagedata; // +0x28
    _IplImage * bgr_image; // +0x30
    _IplImage * bgr_image_r90; // +0x38
    unsigned long long currSize; // +0x40
}
- (id)init;
- (void)dealloc;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (_IplImage *)getOutput;
- (int)updateImage;
@end
