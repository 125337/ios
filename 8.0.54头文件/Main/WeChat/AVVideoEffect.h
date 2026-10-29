@interface AVVideoEffect : NSObject
{
    float _skinSmooth; // +0x8
    float _skinBright; // +0xc
    float _eyeBigger; // +0x10
    float _eyeBright; // +0x14
    float _faceThin; // +0x18
    float _backgroundBlur; // +0x1c
    float _eyebrowEnhance; // +0x20
    float _eyePouch; // +0x24
    float _smileFolds; // +0x28
    float _sharpenFilter; // +0x2c
    float _smallHead; // +0x30
    float _teethBright; // +0x34
    float _wingOfNose; // +0x38
    float _lowerJawbone; // +0x3c
    float _cheekBone; // +0x40
    float _naturalFilter; // +0x44
    long long _mode; // +0x48
}
+ (id)effectWithABTestKey:(id)arg1;
+ (id)defaultEffect;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (float)skinSmooth;
- (void)setSkinSmooth:(float)arg1;
- (float)skinBright;
- (void)setSkinBright:(float)arg1;
- (float)eyeBigger;
- (void)setEyeBigger:(float)arg1;
- (float)eyeBright;
- (void)setEyeBright:(float)arg1;
- (float)faceThin;
- (void)setFaceThin:(float)arg1;
- (float)backgroundBlur;
- (void)setBackgroundBlur:(float)arg1;
- (float)eyebrowEnhance;
- (void)setEyebrowEnhance:(float)arg1;
- (float)eyePouch;
- (void)setEyePouch:(float)arg1;
- (float)smileFolds;
- (void)setSmileFolds:(float)arg1;
- (float)sharpenFilter;
- (void)setSharpenFilter:(float)arg1;
- (float)smallHead;
- (void)setSmallHead:(float)arg1;
- (float)teethBright;
- (void)setTeethBright:(float)arg1;
- (float)wingOfNose;
- (void)setWingOfNose:(float)arg1;
- (float)lowerJawbone;
- (void)setLowerJawbone:(float)arg1;
- (float)cheekBone;
- (void)setCheekBone:(float)arg1;
- (float)naturalFilter;
- (void)setNaturalFilter:(float)arg1;
@end

