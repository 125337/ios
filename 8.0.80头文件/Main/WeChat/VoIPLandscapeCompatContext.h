@interface VoIPLandscapeCompatContext : NSObject
{
    int _lastWidth; // +0x8
    int _lastHeight; // +0xc
    __CVBuffer * _buffer; // +0x10
}
- (void)dealloc;
- (__CVBuffer *)buffer;
- (void)setBuffer:(__CVBuffer *)arg1;
- (int)lastWidth;
- (void)setLastWidth:(int)arg1;
- (int)lastHeight;
- (void)setLastHeight:(int)arg1;
@end
