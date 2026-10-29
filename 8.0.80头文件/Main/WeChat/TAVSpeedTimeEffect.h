@interface TAVSpeedTimeEffect : NSObject <TAVTimeRangeTimeEffectProtocol>
{
    float _speed; // +0x8
}
- (id)applyTimeEffectToClips:(id)arg1;
- (float)speed;
- (void)setSpeed:(float)arg1;
@end
