@interface MVVideoRenderTask : NSObject
{
    NSMutableArray * _pixelBuffers; // +0x8
    long long _pts; // +0x10
}
- (id)pixelBuffers;
- (void)setPixelBuffers:(id)arg1;
- (long long)pts;
- (void)setPts:(long long)arg1;
- (void).cxx_destruct;
@end

