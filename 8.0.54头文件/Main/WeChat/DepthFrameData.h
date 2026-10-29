@interface DepthFrameData : NSObject
{
    CIImage * _depthFrame; // +0x8
    long long _capture_time; // +0x10
    Mat _bgrFrame; // +0x18
}
- (void)releaseData;
- (id)depthFrame;
- (void)setDepthFrame:(id)arg1;
- (Mat)bgrFrame;
- (void)setBgrFrame:(Mat)arg1;
- (long long)capture_time;
- (void)setCapture_time:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

