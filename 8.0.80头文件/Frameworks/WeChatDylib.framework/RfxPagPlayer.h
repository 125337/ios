@interface RfxPagPlayer : NSObject
{
    RfxPagPlayerImpl * pagPlayer; // +0x8
    RfxPagSurface * pagSurface; // +0x10
    RfxPagFile * pagFile; // +0x18
}
- (id)init;
- (id)initWithDeviceKind:(int)arg1;
- (void)dealloc;
- (id)getComposition;
- (void)setComposition:(id)arg1;
- (id)getSurface;
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
@end
