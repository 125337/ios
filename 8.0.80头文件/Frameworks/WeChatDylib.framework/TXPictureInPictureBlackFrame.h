@interface TXPictureInPictureBlackFrame : NSObject
{
    long long _width; // +0x8
    long long _height; // +0x10
    TXSampleBufferWrapper * _sampleBufferWrapper; // +0x18
}
- (void)setResolution:(long long)arg1 height:(long long)arg2;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (id)sampleBufferWrapper;
- (void)setSampleBufferWrapper:(id)arg1;
- (void).cxx_destruct;
@end
