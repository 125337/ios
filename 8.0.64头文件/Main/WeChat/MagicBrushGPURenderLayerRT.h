@interface MagicBrushGPURenderLayerRT : MagicBrushRenderTarget
{
    unsigned long long _lastSubmitTime; // +0x20
}
- (unsigned long long)lastSubmitTime;
- (void)setLastSubmitTime:(unsigned long long)arg1;
@end
