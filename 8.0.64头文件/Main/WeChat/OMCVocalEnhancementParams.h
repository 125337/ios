@interface OMCVocalEnhancementParams : NSObject
{
    BOOL _isEqualizerEnabled; // +0x8
    BOOL _isAmplifierEnabled; // +0x9
    BOOL _amplifierCanClip; // +0xa
    BOOL _isCompressorEnabled; // +0xb
    BOOL _compressorNormalize; // +0xc
    BOOL _compressorUsePeak; // +0xd
    BOOL _isMatchLoudnessEnabled; // +0xe
    BOOL _isDenoiserSSEnabled; // +0xf
    BOOL _isLoudnessEQEnabled; // +0x10
    float _compressorThresholdDB; // +0x14
    float _compressorNoiseFloorDB; // +0x18
    float _compressorRatio; // +0x1c
    float _compressorAttackTime; // +0x20
    float _compressorReleaseTime; // +0x24
    float _defaultLoudness; // +0x28
    float _minLoudness; // +0x2c
    float _maxLoudness; // +0x30
    long long _equalizerCurveType; // +0x38
    NSArray * _equalizerPeakingFiltersParams; // +0x40
    NSArray * _equalizerPoints; // +0x48
    long long _amplifierType; // +0x50
    double _amplifierValue; // +0x58
    long long _matchLoudnessType; // +0x60
    double _matchLoudnessValue; // +0x68
}
- (id)init;
- (id)description;
- (BOOL)isEqualizerEnabled;
- (void)setIsEqualizerEnabled:(BOOL)arg1;
- (long long)equalizerCurveType;
- (void)setEqualizerCurveType:(long long)arg1;
- (id)equalizerPeakingFiltersParams;
- (void)setEqualizerPeakingFiltersParams:(id)arg1;
- (id)equalizerPoints;
- (void)setEqualizerPoints:(id)arg1;
- (BOOL)isAmplifierEnabled;
- (void)setIsAmplifierEnabled:(BOOL)arg1;
- (long long)amplifierType;
- (void)setAmplifierType:(long long)arg1;
- (double)amplifierValue;
- (void)setAmplifierValue:(double)arg1;
- (BOOL)amplifierCanClip;
- (void)setAmplifierCanClip:(BOOL)arg1;
- (BOOL)isCompressorEnabled;
- (void)setIsCompressorEnabled:(BOOL)arg1;
- (float)compressorThresholdDB;
- (void)setCompressorThresholdDB:(float)arg1;
- (float)compressorNoiseFloorDB;
- (void)setCompressorNoiseFloorDB:(float)arg1;
- (float)compressorRatio;
- (void)setCompressorRatio:(float)arg1;
- (float)compressorAttackTime;
- (void)setCompressorAttackTime:(float)arg1;
- (float)compressorReleaseTime;
- (void)setCompressorReleaseTime:(float)arg1;
- (BOOL)compressorNormalize;
- (void)setCompressorNormalize:(BOOL)arg1;
- (BOOL)compressorUsePeak;
- (void)setCompressorUsePeak:(BOOL)arg1;
- (BOOL)isMatchLoudnessEnabled;
- (void)setIsMatchLoudnessEnabled:(BOOL)arg1;
- (long long)matchLoudnessType;
- (void)setMatchLoudnessType:(long long)arg1;
- (double)matchLoudnessValue;
- (void)setMatchLoudnessValue:(double)arg1;
- (BOOL)isDenoiserSSEnabled;
- (void)setIsDenoiserSSEnabled:(BOOL)arg1;
- (BOOL)isLoudnessEQEnabled;
- (void)setIsLoudnessEQEnabled:(BOOL)arg1;
- (float)defaultLoudness;
- (void)setDefaultLoudness:(float)arg1;
- (float)minLoudness;
- (void)setMinLoudness:(float)arg1;
- (float)maxLoudness;
- (void)setMaxLoudness:(float)arg1;
- (void).cxx_destruct;
@end
