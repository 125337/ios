@interface EmoticonVideoConvertConfig : NSObject
{
    BOOL _isSupportWxAM; // +0x8
    BOOL _forceFitSize; // +0x9
    BOOL _isFastPlay; // +0xa
    int _wxamQuality; // +0xc
    NSURL * _videoUrl; // +0x10
    unsigned long long _normalFPS; // +0x18
    unsigned long long _fastFPS; // +0x20
    double _cornerRadius; // +0x28
    EmoticonCameraEffectConfig * _effectConfig; // +0x30
    CGSize _outputSize; // +0x38
}
- (id)init;
- (BOOL)isSupportWxAM;
- (void)setIsSupportWxAM:(BOOL)arg1;
- (int)wxamQuality;
- (void)setWxamQuality:(int)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (CGSize)outputSize;
- (void)setOutputSize:(CGSize)arg1;
- (BOOL)forceFitSize;
- (void)setForceFitSize:(BOOL)arg1;
- (BOOL)isFastPlay;
- (void)setIsFastPlay:(BOOL)arg1;
- (unsigned long long)normalFPS;
- (void)setNormalFPS:(unsigned long long)arg1;
- (unsigned long long)fastFPS;
- (void)setFastFPS:(unsigned long long)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)effectConfig;
- (void)setEffectConfig:(id)arg1;
- (void).cxx_destruct;
@end
