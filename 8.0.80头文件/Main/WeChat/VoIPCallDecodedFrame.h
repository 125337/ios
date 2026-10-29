@interface VoIPCallDecodedFrame : NSObject
{
    __CVBuffer * _pixelBuffer; // +0x8
    unsigned long long _ptsNs; // +0x10
}
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (unsigned long long)ptsNs;
- (void)setPtsNs:(unsigned long long)arg1;
@end
