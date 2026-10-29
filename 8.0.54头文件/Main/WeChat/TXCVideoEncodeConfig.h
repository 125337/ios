@interface TXCVideoEncodeConfig : NSObject
{
    BOOL _enablesBFrame; // +0x8
    BOOL _realtime; // +0x9
    BOOL _isAnnexB; // +0xa
    BOOL _unlimitedGop; // +0xb
    BOOL _enablesRps; // +0xc
    BOOL _enablesRoi; // +0xd
    BOOL _enablesTranscoding; // +0xe
    int _strategy; // +0x10
    int _rcMethod; // +0x14
    int _encodeUsage; // +0x18
    long long _frameRate; // +0x20
    long long _bitrate; // +0x28
    long long _gop; // +0x30
    double _bitrateTolerance; // +0x38
    double _maxBitrateRatio; // +0x40
    long long _minQP; // +0x48
    long long _maxQP; // +0x50
    long long _idrFrameRate; // +0x58
    long long _baseFrameIndex; // +0x60
    long long _baseGopIndex; // +0x68
    TXCVTExternalConfig * _vtExternalConfig; // +0x70
    CGSize _resolution; // +0x78
}
- (id)init;
- (id)initWithStream:(int)arg1;
- (BOOL)updateRestartNeededParams:(const void *)arg1;
- (VideoEncodeParams)buildEncodeParams;
- (unsigned long long)vtConfigFlagFromKey:(unsigned long long)arg1;
- (float)vtDataRateLimitsMutiple;
- (int)strategy;
- (void)setStrategy:(int)arg1;
- (long long)frameRate;
- (void)setFrameRate:(long long)arg1;
- (long long)bitrate;
- (void)setBitrate:(long long)arg1;
- (CGSize)resolution;
- (void)setResolution:(CGSize)arg1;
- (int)rcMethod;
- (void)setRcMethod:(int)arg1;
- (int)encodeUsage;
- (void)setEncodeUsage:(int)arg1;
- (BOOL)enablesBFrame;
- (void)setEnablesBFrame:(BOOL)arg1;
- (BOOL)realtime;
- (void)setRealtime:(BOOL)arg1;
- (BOOL)isAnnexB;
- (void)setIsAnnexB:(BOOL)arg1;
- (BOOL)unlimitedGop;
- (void)setUnlimitedGop:(BOOL)arg1;
- (long long)gop;
- (void)setGop:(long long)arg1;
- (double)bitrateTolerance;
- (void)setBitrateTolerance:(double)arg1;
- (double)maxBitrateRatio;
- (void)setMaxBitrateRatio:(double)arg1;
- (long long)minQP;
- (void)setMinQP:(long long)arg1;
- (long long)maxQP;
- (void)setMaxQP:(long long)arg1;
- (BOOL)enablesRps;
- (void)setEnablesRps:(BOOL)arg1;
- (long long)idrFrameRate;
- (void)setIdrFrameRate:(long long)arg1;
- (long long)baseFrameIndex;
- (void)setBaseFrameIndex:(long long)arg1;
- (long long)baseGopIndex;
- (void)setBaseGopIndex:(long long)arg1;
- (BOOL)enablesRoi;
- (void)setEnablesRoi:(BOOL)arg1;
- (BOOL)enablesTranscoding;
- (void)setEnablesTranscoding:(BOOL)arg1;
- (id)vtExternalConfig;
- (void)setVtExternalConfig:(id)arg1;
- (void).cxx_destruct;
@end

