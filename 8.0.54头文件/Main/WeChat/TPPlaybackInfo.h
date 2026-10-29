@interface TPPlaybackInfo : NSObject
{
    NSString * _containerFormat; // +0x8
    NSString * _videoMIMEType; // +0x10
    long long _videoBitRate; // +0x18
    long long _videoProfile; // +0x20
    long long _videoLevel; // +0x28
    long long _videoRotation; // +0x30
    long long _videoFrameRate; // +0x38
    long long _videoWidth; // +0x40
    long long _videoHeight; // +0x48
    long long _videoCodecId; // +0x50
    NSString * _audioMIMEType; // +0x58
    long long _audioBitRate; // +0x60
    long long _audioProfile; // +0x68
    long long _audioChannelLayout; // +0x70
    NSString * _subtitleMIMEType; // +0x78
    long long _currentPositionMs; // +0x80
    long long _durationMs; // +0x88
    long long _playableDurationMs; // +0x90
    double _bufferPercent; // +0x98
    long long _demuxerOffset; // +0xa0
    TPDynamicStatisticParams * _dynamicStatisticParams; // +0xa8
    TPGeneralPlayFlowParams * _generalPlayFlowParams; // +0xb0
    long long _videoColorSpace; // +0xb8
    long long _audioLevel; // +0xc0
}
+ (id)buildFromPlayerProperty:(id)arg1;
+ (id)buildFromString:(id)arg1;
+ (id)buildFromVideoInfo:(id)arg1;
+ (id)MIMETypeForCodecID:(int)arg1;
- (void)updateVideoWidth:(long long)arg1 height:(long long)arg2;
- (id)resolution;
- (id)containerFormat;
- (void)setContainerFormat:(id)arg1;
- (id)videoMIMEType;
- (void)setVideoMIMEType:(id)arg1;
- (long long)videoBitRate;
- (void)setVideoBitRate:(long long)arg1;
- (long long)videoProfile;
- (void)setVideoProfile:(long long)arg1;
- (long long)videoLevel;
- (void)setVideoLevel:(long long)arg1;
- (long long)videoRotation;
- (void)setVideoRotation:(long long)arg1;
- (long long)videoFrameRate;
- (void)setVideoFrameRate:(long long)arg1;
- (long long)videoWidth;
- (void)setVideoWidth:(long long)arg1;
- (long long)videoHeight;
- (void)setVideoHeight:(long long)arg1;
- (long long)videoCodecId;
- (void)setVideoCodecId:(long long)arg1;
- (id)audioMIMEType;
- (void)setAudioMIMEType:(id)arg1;
- (long long)audioBitRate;
- (void)setAudioBitRate:(long long)arg1;
- (long long)audioProfile;
- (void)setAudioProfile:(long long)arg1;
- (long long)audioChannelLayout;
- (void)setAudioChannelLayout:(long long)arg1;
- (id)subtitleMIMEType;
- (void)setSubtitleMIMEType:(id)arg1;
- (long long)currentPositionMs;
- (void)setCurrentPositionMs:(long long)arg1;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg1;
- (long long)playableDurationMs;
- (void)setPlayableDurationMs:(long long)arg1;
- (double)bufferPercent;
- (void)setBufferPercent:(double)arg1;
- (long long)demuxerOffset;
- (void)setDemuxerOffset:(long long)arg1;
- (id)dynamicStatisticParams;
- (void)setDynamicStatisticParams:(id)arg1;
- (id)generalPlayFlowParams;
- (void)setGeneralPlayFlowParams:(id)arg1;
- (long long)videoColorSpace;
- (void)setVideoColorSpace:(long long)arg1;
- (long long)audioLevel;
- (void)setAudioLevel:(long long)arg1;
- (void).cxx_destruct;
@end

