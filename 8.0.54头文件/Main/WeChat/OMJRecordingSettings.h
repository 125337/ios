@interface OMJRecordingSettings : NSObject
{
    BOOL _useMetadataTags; // +0x8
    BOOL _outputMixedWithBGM; // +0x9
    BOOL _shouldGenerateCoverImage; // +0xa
    int _videoBitsPerFrame; // +0xc
    int _audioAverageBitRate; // +0x10
    int _videoMaxKeyframeInterval; // +0x14
    int _videoClockwiseRotation; // +0x18
    unsigned long long _mediaContainerType; // +0x20
    unsigned long long _videoCodecType; // +0x28
    unsigned long long _audioCodecType; // +0x30
    unsigned long long _videoDimensionLevel; // +0x38
    NSDictionary * _metaData; // +0x40
    long long _camOSTMode; // +0x48
    unsigned long long _checksumType; // +0x50
    struct _maxRecordingDuration; // +0x58
}
+ (id)default1080pSettings;
+ (id)default720pSettings;
- (id)initWithContainerType:(unsigned long long)arg1 videoCodecType:(unsigned long long)arg2 audioCodecType:(unsigned long long)arg3 videoDimensionLevel:(unsigned long long)arg4 videoBitsPerFrame:(int)arg5 audioAverageBitRate:(int)arg6 videoMaxKeyframeInterval:(int)arg7;
- (XMJRecordingSettings)createBackingRecordingSettings;
- (unsigned long long)mediaContainerType;
- (unsigned long long)videoCodecType;
- (unsigned long long)audioCodecType;
- (unsigned long long)videoDimensionLevel;
- (int)videoBitsPerFrame;
- (int)audioAverageBitRate;
- (int)videoMaxKeyframeInterval;
- (struct)maxRecordingDuration;
- (void)setMaxRecordingDuration:(struct)arg1;
- (id)metaData;
- (void)setMetaData:(id)arg1;
- (BOOL)useMetadataTags;
- (void)setUseMetadataTags:(BOOL)arg1;
- (long long)camOSTMode;
- (void)setCamOSTMode:(long long)arg1;
- (BOOL)outputMixedWithBGM;
- (void)setOutputMixedWithBGM:(BOOL)arg1;
- (int)videoClockwiseRotation;
- (void)setVideoClockwiseRotation:(int)arg1;
- (BOOL)shouldGenerateCoverImage;
- (void)setShouldGenerateCoverImage:(BOOL)arg1;
- (unsigned long long)checksumType;
- (void)setChecksumType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

