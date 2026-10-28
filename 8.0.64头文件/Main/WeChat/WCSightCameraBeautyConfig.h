@interface WCSightCameraBeautyConfig : NSObject
{
    float _skinSmooth; // +0x8
    float _thinFace; // +0xc
    float _skinBright; // +0x10
    float _eyeBigger; // +0x14
    float _eyeBright; // +0x18
    float _smallHead; // +0x1c
    float _cheekbone; // +0x20
    float _lowerJowbone; // +0x24
    float _wingOfNose; // +0x28
    float _removeEyePouch; // +0x2c
    float _smileFold; // +0x30
    float _sharpen; // +0x34
    float _rosyFace; // +0x38
    float _teethBright; // +0x3c
    float _defaultFilter; // +0x40
    float _multiSampling; // +0x44
    float _naturalFilter; // +0x48
}
- (float)skinSmooth;
- (void)setSkinSmooth:(float)arg1;
- (float)thinFace;
- (void)setThinFace:(float)arg1;
- (float)skinBright;
- (void)setSkinBright:(float)arg1;
- (float)eyeBigger;
- (void)setEyeBigger:(float)arg1;
- (float)eyeBright;
- (void)setEyeBright:(float)arg1;
- (float)smallHead;
- (void)setSmallHead:(float)arg1;
- (float)cheekbone;
- (void)setCheekbone:(float)arg1;
- (float)lowerJowbone;
- (void)setLowerJowbone:(float)arg1;
- (float)wingOfNose;
- (void)setWingOfNose:(float)arg1;
- (float)removeEyePouch;
- (void)setRemoveEyePouch:(float)arg1;
- (float)smileFold;
- (void)setSmileFold:(float)arg1;
- (float)sharpen;
- (void)setSharpen:(float)arg1;
- (float)rosyFace;
- (void)setRosyFace:(float)arg1;
- (float)teethBright;
- (void)setTeethBright:(float)arg1;
- (float)defaultFilter;
- (void)setDefaultFilter:(float)arg1;
- (float)multiSampling;
- (void)setMultiSampling:(float)arg1;
- (float)naturalFilter;
- (void)setNaturalFilter:(float)arg1;
@end
