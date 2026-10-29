@interface TRTCCdnPlayerConfig : NSObject
{
    BOOL _isDebugOn; // +0x8
    float _minCache; // +0xc
    float _maxCache; // +0x10
    float _minCacheLeb; // +0x14
    float _maxCacheLeb; // +0x18
    int _wavejbmFlag; // +0x1c
    int _wavejbmMode; // +0x20
    float _wavejbmMinSpeedRate; // +0x24
    float _wavejbmMaxSpeedRate; // +0x28
    int _lowDelayMode; // +0x2c
    int _initialDelay; // +0x30
    float _mMaxHalfFOVHor; // +0x34
    float _mMinHalfFOVHor; // +0x38
    float _mMaxHalfFOVVer; // +0x3c
    float _mMinHalfFOVVer; // +0x40
    long long _orientation; // +0x48
    long long _renderMode; // +0x50
    unsigned long long _cacheType; // +0x58
    NSString * _gameAppId; // +0x60
}
- (id)init;
- (BOOL)isDebugOn;
- (void)setIsDebugOn:(BOOL)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (long long)renderMode;
- (void)setRenderMode:(long long)arg1;
- (unsigned long long)cacheType;
- (void)setCacheType:(unsigned long long)arg1;
- (float)minCache;
- (void)setMinCache:(float)arg1;
- (float)maxCache;
- (void)setMaxCache:(float)arg1;
- (float)minCacheLeb;
- (void)setMinCacheLeb:(float)arg1;
- (float)maxCacheLeb;
- (void)setMaxCacheLeb:(float)arg1;
- (int)wavejbmFlag;
- (void)setWavejbmFlag:(int)arg1;
- (int)wavejbmMode;
- (void)setWavejbmMode:(int)arg1;
- (float)wavejbmMinSpeedRate;
- (void)setWavejbmMinSpeedRate:(float)arg1;
- (float)wavejbmMaxSpeedRate;
- (void)setWavejbmMaxSpeedRate:(float)arg1;
- (int)lowDelayMode;
- (void)setLowDelayMode:(int)arg1;
- (int)initialDelay;
- (void)setInitialDelay:(int)arg1;
- (id)gameAppId;
- (void)setGameAppId:(id)arg1;
- (float)mMaxHalfFOVHor;
- (void)setMMaxHalfFOVHor:(float)arg1;
- (float)mMinHalfFOVHor;
- (void)setMMinHalfFOVHor:(float)arg1;
- (float)mMaxHalfFOVVer;
- (void)setMMaxHalfFOVVer:(float)arg1;
- (float)mMinHalfFOVVer;
- (void)setMMinHalfFOVVer:(float)arg1;
- (void).cxx_destruct;
@end

