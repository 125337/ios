@interface OMJBeautyAdjustmentDesc : NSObject
{
    BOOL _isBeautyEnabled; // +0x8
    float _skinSmoothness; // +0xc
    float _twowayBrightRate; // +0x10
    float _faceSlimness; // +0x14
    float _eyeEnhancement; // +0x18
    float _eyeBrightness; // +0x1c
    float _headShrinkage; // +0x20
    float _cheekShrinkage; // +0x24
    float _cheekboneShrinkage; // +0x28
    float _jawShrinkage; // +0x2c
    float _noseShrinkage; // +0x30
    float _darkCircleReduction; // +0x34
    float _smileFoldReduction; // +0x38
    float _teethWhiteness; // +0x3c
    float _redLip; // +0x40
    float _lipShape; // +0x44
    float _contouringRate; // +0x48
    float _clarity; // +0x4c
    float _noseTip; // +0x50
    float _nasalRoot; // +0x54
    float _noseWing; // +0x58
    float _eyelidDownStrength; // +0x5c
    float _eyeDistanceFactor; // +0x60
    float _browThickness; // +0x64
    float _browDistance; // +0x68
    float _browPeak; // +0x6c
    float _innerEyeCorner; // +0x70
    float _faceNarrowness; // +0x74
    float _foreheadShrinkage; // +0x78
    float _makeupEyeLashAndLine; // +0x7c
    float _makeupEyeShadow; // +0x80
    float _makeupEyeBrow; // +0x84
    float _makeupLip; // +0x88
    float _makeupBlusher; // +0x8c
    float _makeupContour; // +0x90
    NSString * _materialID; // +0x98
    NSString * _presetID; // +0xa0
}
+ (id)nullBeautyAdjustmentDesc;
+ (id)classicBeautyAdjustmentDesc;
+ (id)naturalBeautyAdjustmentDesc;
+ (id)godBeautyAdjustmentDesc;
+ (id)goddessBeautyAdjustmentDesc;
- (id)initWithBeautyAdjustmentDesc:(id)arg1;
- (id)initWithBackingDesc:(const void *)arg1;
- (id)description;
- (id)materialID;
- (void)setMaterialID:(id)arg1;
- (id)presetID;
- (void)setPresetID:(id)arg1;
- (float)skinSmoothness;
- (void)setSkinSmoothness:(float)arg1;
- (float)twowayBrightRate;
- (void)setTwowayBrightRate:(float)arg1;
- (float)faceSlimness;
- (void)setFaceSlimness:(float)arg1;
- (float)eyeEnhancement;
- (void)setEyeEnhancement:(float)arg1;
- (float)eyeBrightness;
- (void)setEyeBrightness:(float)arg1;
- (float)headShrinkage;
- (void)setHeadShrinkage:(float)arg1;
- (float)cheekShrinkage;
- (void)setCheekShrinkage:(float)arg1;
- (float)cheekboneShrinkage;
- (void)setCheekboneShrinkage:(float)arg1;
- (float)jawShrinkage;
- (void)setJawShrinkage:(float)arg1;
- (float)noseShrinkage;
- (void)setNoseShrinkage:(float)arg1;
- (float)darkCircleReduction;
- (void)setDarkCircleReduction:(float)arg1;
- (float)smileFoldReduction;
- (void)setSmileFoldReduction:(float)arg1;
- (float)teethWhiteness;
- (void)setTeethWhiteness:(float)arg1;
- (float)redLip;
- (void)setRedLip:(float)arg1;
- (float)lipShape;
- (void)setLipShape:(float)arg1;
- (float)contouringRate;
- (void)setContouringRate:(float)arg1;
- (float)clarity;
- (void)setClarity:(float)arg1;
- (float)noseTip;
- (void)setNoseTip:(float)arg1;
- (float)nasalRoot;
- (void)setNasalRoot:(float)arg1;
- (float)noseWing;
- (void)setNoseWing:(float)arg1;
- (float)eyelidDownStrength;
- (void)setEyelidDownStrength:(float)arg1;
- (float)eyeDistanceFactor;
- (void)setEyeDistanceFactor:(float)arg1;
- (float)browThickness;
- (void)setBrowThickness:(float)arg1;
- (float)browDistance;
- (void)setBrowDistance:(float)arg1;
- (float)browPeak;
- (void)setBrowPeak:(float)arg1;
- (float)innerEyeCorner;
- (void)setInnerEyeCorner:(float)arg1;
- (float)faceNarrowness;
- (void)setFaceNarrowness:(float)arg1;
- (float)foreheadShrinkage;
- (void)setForeheadShrinkage:(float)arg1;
- (float)makeupEyeLashAndLine;
- (void)setMakeupEyeLashAndLine:(float)arg1;
- (float)makeupEyeShadow;
- (void)setMakeupEyeShadow:(float)arg1;
- (float)makeupEyeBrow;
- (void)setMakeupEyeBrow:(float)arg1;
- (float)makeupLip;
- (void)setMakeupLip:(float)arg1;
- (float)makeupBlusher;
- (void)setMakeupBlusher:(float)arg1;
- (float)makeupContour;
- (void)setMakeupContour:(float)arg1;
- (BOOL)isBeautyEnabled;
- (void)setIsBeautyEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

