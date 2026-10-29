@interface TPVCodecCapabilityForGet : NSObject
{
    long long _maxLumaSamples; // +0x8
    long long _maxProfile; // +0x10
    long long _maxLevel; // +0x18
    long long _framerate; // +0x20
}
- (id)initWithMaxlumaSamples:(long long)arg1 maxProfile:(long long)arg2 maxLevel:(long long)arg3 framerate:(long long)arg4;
- (long long)maxLumaSamples;
- (void)setMaxLumaSamples:(long long)arg1;
- (long long)maxProfile;
- (void)setMaxProfile:(long long)arg1;
- (long long)maxLevel;
- (void)setMaxLevel:(long long)arg1;
- (long long)framerate;
- (void)setFramerate:(long long)arg1;
@end
