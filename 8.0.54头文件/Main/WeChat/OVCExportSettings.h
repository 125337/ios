@interface OVCExportSettings : NSObject
{
    BOOL _enableHDR; // +0x8
    int _videoBitsPerFrame; // +0xc
    int _averageAudioBitRate; // +0x10
    unsigned long long _mediaContainerType; // +0x18
    unsigned long long _videoFrameRate; // +0x20
    unsigned long long _videoDimensionLevel; // +0x28
    unsigned long long _videoCodecType; // +0x30
    unsigned long long _audioCodecType; // +0x38
}
- (id)initWithContainerType:(unsigned long long)arg1 videoFrameRate:(unsigned long long)arg2 videoDimensionLevel:(unsigned long long)arg3 videoCodecType:(unsigned long long)arg4 audioCodecType:(unsigned long long)arg5 videoBitsPerFrame:(int)arg6 averageAudioBitRate:(int)arg7;
- (id)initWithContainerType:(unsigned long long)arg1 videoFrameRate:(unsigned long long)arg2 videoDimensionLevel:(unsigned long long)arg3 videoCodecType:(unsigned long long)arg4 audioCodecType:(unsigned long long)arg5 videoBitsPerFrame:(int)arg6 averageAudioBitRate:(int)arg7 enableHDR:(BOOL)arg8;
- (SharedPtr<XMSExportSettings>)createBackingExportSettings;
- (unsigned long long)mediaContainerType;
- (unsigned long long)videoFrameRate;
- (unsigned long long)videoDimensionLevel;
- (unsigned long long)videoCodecType;
- (unsigned long long)audioCodecType;
- (int)videoBitsPerFrame;
- (int)averageAudioBitRate;
- (BOOL)enableHDR;
@end

