@interface OMJMovieExportSettings : NSObject
{
    BOOL _isUseExportMetadataTags; // +0x8
    BOOL _enableHDR; // +0x9
    BOOL _isCoverImageDetectionEnabled; // +0xa
    int _videoBitsPerFrame; // +0xc
    int _audioAverageBitRate; // +0x10
    int _videoMaxKeyframeInterval; // +0x14
    int _coverImageDetectionFrameInterval; // +0x18
    float _coverImageDetectionDarknessRatioThreshold; // +0x1c
    float _coverImageClarityThreshold; // +0x20
    unsigned long long _mediaContainerType; // +0x28
    unsigned long long _videoFrameRate; // +0x30
    unsigned long long _videoDimensionLevel; // +0x38
    unsigned long long _videoCodecType; // +0x40
    unsigned long long _audioCodecType; // +0x48
    NSString * _copyrightMetadata; // +0x50
    NSDictionary * _exportMetadata; // +0x58
    unsigned long long _checksumType; // +0x60
    struct _coverImageDetectionMaxDuration; // +0x68
}
+ (id)wcmj_exportSettingsFromEncodeParams:(id)arg1 enableHDR:(BOOL)arg2;
+ (unsigned long long)wcmj_videoFrameRateFromEncodeParams:(id)arg1;
+ (unsigned long long)wcmj_videoDimensionLevelFromEncodeParams:(id)arg1;
+ (int)wcmj_videoBitsPerFrameFromEncodeParams:(id)arg1;
+ (int)wcmj_audioAverageBitRateFromEncodeParams:(id)arg1;
+ (int)wcmj_videoMaxKeyframeIntervalFromEncodeParams:(id)arg1;
+ (id)default1080pSettings;
+ (id)default720pSettings;
- (id)initWithContainerType:(unsigned long long)arg1 videoFrameRate:(unsigned long long)arg2 videoDimensionLevel:(unsigned long long)arg3 videoCodecType:(unsigned long long)arg4 audioCodecType:(unsigned long long)arg5 videoBitsPerFrame:(int)arg6 audioAverageBitRate:(int)arg7 videoMaxKeyframeInterval:(int)arg8 enableHDR:(BOOL)arg9;
- (id)initWithContainerType:(unsigned long long)arg1 videoFrameRate:(unsigned long long)arg2 videoDimensionLevel:(unsigned long long)arg3 videoCodecType:(unsigned long long)arg4 audioCodecType:(unsigned long long)arg5 videoBitsPerFrame:(int)arg6 audioAverageBitRate:(int)arg7 videoMaxKeyframeInterval:(int)arg8 copyrightMetadata:(id)arg9 enableHDR:(BOOL)arg10;
- (id)initWithContainerType:(unsigned long long)arg1 videoFrameRate:(unsigned long long)arg2 videoDimensionLevel:(unsigned long long)arg3 videoCodecType:(unsigned long long)arg4 audioCodecType:(unsigned long long)arg5 videoBitsPerFrame:(int)arg6 audioAverageBitRate:(int)arg7 videoMaxKeyframeInterval:(int)arg8 copyrightMetadata:(id)arg9 exportMetadata:(id)arg10 isUseExportMetadataTags:(BOOL)arg11 enableHDR:(BOOL)arg12;
- (XMJMovieExportSettings)createBackingExportSettings;
- (id)description;
- (unsigned long long)mediaContainerType;
- (unsigned long long)videoFrameRate;
- (unsigned long long)videoDimensionLevel;
- (unsigned long long)videoCodecType;
- (unsigned long long)audioCodecType;
- (int)videoBitsPerFrame;
- (int)audioAverageBitRate;
- (int)videoMaxKeyframeInterval;
- (id)copyrightMetadata;
- (void)setCopyrightMetadata:(id)arg1;
- (id)exportMetadata;
- (void)setExportMetadata:(id)arg1;
- (BOOL)isUseExportMetadataTags;
- (void)setIsUseExportMetadataTags:(BOOL)arg1;
- (BOOL)enableHDR;
- (BOOL)isCoverImageDetectionEnabled;
- (void)setIsCoverImageDetectionEnabled:(BOOL)arg1;
- (int)coverImageDetectionFrameInterval;
- (void)setCoverImageDetectionFrameInterval:(int)arg1;
- (struct)coverImageDetectionMaxDuration;
- (void)setCoverImageDetectionMaxDuration:(struct)arg1;
- (float)coverImageDetectionDarknessRatioThreshold;
- (void)setCoverImageDetectionDarknessRatioThreshold:(float)arg1;
- (float)coverImageClarityThreshold;
- (void)setCoverImageClarityThreshold:(float)arg1;
- (unsigned long long)checksumType;
- (void)setChecksumType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

