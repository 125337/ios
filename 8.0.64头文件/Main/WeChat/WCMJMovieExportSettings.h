@interface WCMJMovieExportSettings : NSObject <NSCoding>
{
    BOOL _enableHDR; // +0x8
    BOOL _isCoverImageDetectionEnabled; // +0x9
    int _videoBitsPerFrame; // +0xc
    int _audioAverageBitRate; // +0x10
    int _videoMaxKeyframeInterval; // +0x14
    int _coverImageDetectionFrameInterval; // +0x18
    float _coverImageDetectionDarknessRatioThreshold; // +0x1c
    unsigned long long _mediaContainerType; // +0x20
    unsigned long long _videoFrameRate; // +0x28
    unsigned long long _videoDimensionLevel; // +0x30
    unsigned long long _videoCodecType; // +0x38
    unsigned long long _audioCodecType; // +0x40
    NSString * _copyrightMetadata; // +0x48
    struct _coverImageDetectionMaxDuration; // +0x50
}
- (id)initWithOMJMovieExportSettings:(id)arg1;
- (id)exportMJSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)mediaContainerType;
- (void)setMediaContainerType:(unsigned long long)arg1;
- (unsigned long long)videoFrameRate;
- (void)setVideoFrameRate:(unsigned long long)arg1;
- (unsigned long long)videoDimensionLevel;
- (void)setVideoDimensionLevel:(unsigned long long)arg1;
- (unsigned long long)videoCodecType;
- (void)setVideoCodecType:(unsigned long long)arg1;
- (unsigned long long)audioCodecType;
- (void)setAudioCodecType:(unsigned long long)arg1;
- (int)videoBitsPerFrame;
- (void)setVideoBitsPerFrame:(int)arg1;
- (int)audioAverageBitRate;
- (void)setAudioAverageBitRate:(int)arg1;
- (int)videoMaxKeyframeInterval;
- (void)setVideoMaxKeyframeInterval:(int)arg1;
- (id)copyrightMetadata;
- (void)setCopyrightMetadata:(id)arg1;
- (BOOL)enableHDR;
- (void)setEnableHDR:(BOOL)arg1;
- (BOOL)isCoverImageDetectionEnabled;
- (void)setIsCoverImageDetectionEnabled:(BOOL)arg1;
- (int)coverImageDetectionFrameInterval;
- (void)setCoverImageDetectionFrameInterval:(int)arg1;
- (struct)coverImageDetectionMaxDuration;
- (void)setCoverImageDetectionMaxDuration:(struct)arg1;
- (float)coverImageDetectionDarknessRatioThreshold;
- (void)setCoverImageDetectionDarknessRatioThreshold:(float)arg1;
- (void).cxx_destruct;
@end
