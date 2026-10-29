@interface TXCThreeInputFilter : TXCBeautifyBaseFilter
{
    TXCVideoFrameCoords * _frameCoords2; // +0x8
    TXCVideoFrameCoords * _frameCoords3; // +0x10
}
- (id)frameCoords2;
- (id)frameCoords3;
- (id)processVideoFrame1:(id)arg1 videoFrame2:(id)arg2 videoFrame3:(id)arg3;
- (void)setFrameCoords2:(id)arg1;
- (void)setFrameCoords3:(id)arg1;
- (void).cxx_destruct;
@end

