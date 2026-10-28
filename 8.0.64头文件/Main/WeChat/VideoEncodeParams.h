@interface VideoEncodeParams : NSObject
{
    BOOL _videoOnly; // +0x8
    BOOL _isEnableHardHEVCEncode; // +0x9
    BOOL _isUseFFmpegHevcEncoding; // +0xa
    BOOL _useAssetDurationForCompose; // +0xb
    BOOL _useHDRToSDR; // +0xc
    BOOL _HDRSwitch; // +0xd
    BOOL _originVideoIsHDR; // +0xe
    BOOL _skipVideoCompress; // +0xf
    BOOL _fixesTransform; // +0x10
    float _width; // +0x14
    float _height; // +0x18
    float _videoBitrate; // +0x1c
    float _frameInterval; // +0x20
    float _audioBitrate; // +0x24
    float _audioSampleRate; // +0x28
    int _audioChannel; // +0x2c
    int _adaptiveBitrateUp; // +0x30
    int _adaptiveBirateDown; // +0x34
    int _resolutionAdjust; // +0x38
    float _scaleFactor; // +0x3c
    int _originalVideoHDRFormat; // +0x40
    int _vcodec2Preset; // +0x44
    float _crf; // +0x48
    int _vbvBufferSize; // +0x4c
    int _selectedKbpsLevel; // +0x50
    int _enhancementMode; // +0x54
    unsigned long long _scene; // +0x58
    double _fps; // +0x60
    NSDictionary * _extraInfo; // +0x68
    AVVideoCompositionCoreAnimationTool * _animationTool; // +0x70
    NSDictionary * _colorProperties; // +0x78
    NSDictionary * _originVideoColorProperties; // +0x80
    NSDictionary * _colorRange; // +0x88
    WCColorProperties * _originVideoColorPropertiesObj; // +0x90
    CGRect _cropFrame; // +0x98
    struct _timeRange; // +0xb8
}
- (void)adjustIfNeeded;
- (void)_adjustSizeToStandardForMoments;
- (double)_adjustedStandardLengthFromLength:(double)arg1;
- (id)init;
- (void)dealloc;
- (void)guaranteeReleaseAnimationToolOnMainThread;
- (id)description;
- (id)colorPropertyDict;
- (id)colorPrimaries;
- (id)transferFunction;
- (id)YCbCrMatrix;
- (void)resetColorPropertiesToITUR709;
- (BOOL)shouldExportWithHDR;
- (id)originVideoColorPropertiesObj;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (float)width;
- (void)setWidth:(float)arg1;
- (float)height;
- (void)setHeight:(float)arg1;
- (double)fps;
- (void)setFps:(double)arg1;
- (float)videoBitrate;
- (void)setVideoBitrate:(float)arg1;
- (float)frameInterval;
- (void)setFrameInterval:(float)arg1;
- (float)audioBitrate;
- (void)setAudioBitrate:(float)arg1;
- (float)audioSampleRate;
- (void)setAudioSampleRate:(float)arg1;
- (int)audioChannel;
- (void)setAudioChannel:(int)arg1;
- (BOOL)videoOnly;
- (void)setVideoOnly:(BOOL)arg1;
- (BOOL)isEnableHardHEVCEncode;
- (void)setIsEnableHardHEVCEncode:(BOOL)arg1;
- (int)adaptiveBitrateUp;
- (void)setAdaptiveBitrateUp:(int)arg1;
- (int)adaptiveBirateDown;
- (void)setAdaptiveBirateDown:(int)arg1;
- (int)resolutionAdjust;
- (void)setResolutionAdjust:(int)arg1;
- (CGRect)cropFrame;
- (void)setCropFrame:(CGRect)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (float)scaleFactor;
- (void)setScaleFactor:(float)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)animationTool;
- (void)setAnimationTool:(id)arg1;
- (BOOL)isUseFFmpegHevcEncoding;
- (void)setIsUseFFmpegHevcEncoding:(BOOL)arg1;
- (id)colorProperties;
- (void)setColorProperties:(id)arg1;
- (id)originVideoColorProperties;
- (void)setOriginVideoColorProperties:(id)arg1;
- (id)colorRange;
- (void)setColorRange:(id)arg1;
- (BOOL)useAssetDurationForCompose;
- (void)setUseAssetDurationForCompose:(BOOL)arg1;
- (BOOL)useHDRToSDR;
- (void)setUseHDRToSDR:(BOOL)arg1;
- (BOOL)HDRSwitch;
- (void)setHDRSwitch:(BOOL)arg1;
- (BOOL)originVideoIsHDR;
- (void)setOriginVideoIsHDR:(BOOL)arg1;
- (int)originalVideoHDRFormat;
- (void)setOriginalVideoHDRFormat:(int)arg1;
- (BOOL)skipVideoCompress;
- (void)setSkipVideoCompress:(BOOL)arg1;
- (int)vcodec2Preset;
- (void)setVcodec2Preset:(int)arg1;
- (float)crf;
- (void)setCrf:(float)arg1;
- (int)vbvBufferSize;
- (void)setVbvBufferSize:(int)arg1;
- (int)selectedKbpsLevel;
- (void)setSelectedKbpsLevel:(int)arg1;
- (BOOL)fixesTransform;
- (void)setFixesTransform:(BOOL)arg1;
- (int)enhancementMode;
- (void)setEnhancementMode:(int)arg1;
- (void)setOriginVideoColorPropertiesObj:(id)arg1;
- (void).cxx_destruct;
@end
