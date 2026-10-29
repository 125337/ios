@interface RfxPagPlayerImpl : NSObject
{
    shared_ptr<rfx::RfxPagPlayer> pagPlayer; // +0x8
}
- (id)initWithDeviceKind:(int)arg1;
- (id)init;
- (void)dealloc;
- (void)setComposition:(id)arg1;
- (void)setSurface:(id)arg1;
- (float)maxFrameRate;
- (void)setMaxFrameRate:(float)arg1;
- (int)scaleMode;
- (void)setScaleMode:(int)arg1;
- (CGAffineTransform)matrix;
- (void)setMatrix:(CGAffineTransform)arg1;
- (long long)duration;
- (double)getProgress;
- (void)setProgress:(double)arg1;
- (void)prepare;
- (BOOL)flush;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

