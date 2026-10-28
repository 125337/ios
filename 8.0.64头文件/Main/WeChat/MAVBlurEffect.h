@interface MAVBlurEffect : MAVVLogEffect
{
    float _radius; // +0x8
    float _sampleFactor; // +0xc
}
- (long long)type;
- (void)setRadius:(float)arg1;
- (void)setSampleFactor:(float)arg1;
- (float)radius;
- (float)sampleFactor;
@end
