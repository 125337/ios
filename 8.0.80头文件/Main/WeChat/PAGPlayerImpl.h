@interface PAGPlayerImpl : NSObject
{
    void * pagPlayer; // +0x8
}
- (id)init;
- (void)dealloc;
- (id)getComposition;
- (void)setComposition:(id)arg1;
- (void)setSurface:(id)arg1;
- (BOOL)videoEnabled;
- (void)setVideoEnabled:(BOOL)arg1;
- (BOOL)cacheEnabled;
- (void)setCacheEnabled:(BOOL)arg1;
- (BOOL)useDiskCache;
- (void)setUseDiskCache:(BOOL)arg1;
- (float)cacheScale;
- (void)setCacheScale:(float)arg1;
- (float)maxFrameRate;
- (void)setMaxFrameRate:(float)arg1;
- (int)scaleMode;
- (void)setScaleMode:(int)arg1;
- (CGAffineTransform)matrix;
- (void)setMatrix:(CGAffineTransform)arg1;
- (long long)duration;
- (double)getProgress;
- (void)setProgress:(double)arg1;
- (long long)currentFrame;
- (void)prepare;
- (BOOL)flush;
- (CGRect)getBounds:(id)arg1;
- (id)getLayersUnderPoint:(CGPoint)arg1;
- (BOOL)hitTestPoint:(id)arg1 point:(CGPoint)arg2 pixelHitTest:(BOOL)arg3;
@end
