@interface TAVVideoCompositionPixelBuffer : NSObject
{
    __CVBuffer * _pixelBuffer; // +0x8
    id <TAVVideoCompositionTrack> _track; // +0x10
}
- (__CVBuffer *)pixelBuffer;
- (void)setPixelBuffer:(__CVBuffer *)arg1;
- (id)track;
- (void)setTrack:(id)arg1;
- (void).cxx_destruct;
@end

