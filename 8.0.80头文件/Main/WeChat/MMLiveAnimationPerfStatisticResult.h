@interface MMLiveAnimationPerfStatisticResult : MMLiveUIPerfStatisticResult
{
    float _minAnimFrameRate; // +0x8
    float _maxAnimFrameRate; // +0xc
    float _sumAnimFrameRate; // +0x10
}
- (void)addAnimationPerfRecord:(id)arg1;
- (void)addAnimFrameRate:(float)arg1;
- (float)averAnimFrameRate;
- (float)minAnimFrameRate;
- (void)setMinAnimFrameRate:(float)arg1;
- (float)maxAnimFrameRate;
- (void)setMaxAnimFrameRate:(float)arg1;
- (float)sumAnimFrameRate;
- (void)setSumAnimFrameRate:(float)arg1;
@end
