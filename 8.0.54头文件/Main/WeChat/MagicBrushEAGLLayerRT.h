@interface MagicBrushEAGLLayerRT : MagicBrushRenderTarget
{
    unsigned long long _lastSubmitTime; // +0x20
}
- (id)initForCanvas:(int)arg1 withLayer:(id)arg2 inRuntime:(id)arg3;
- (unsigned long long)lastSubmitTime;
- (void)setLastSubmitTime:(unsigned long long)arg1;
@end

