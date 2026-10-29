@interface FLVQualitySample : NSObject
{
    unsigned int _width; // +0x8
    unsigned int _height; // +0xc
    unsigned int _videoFps; // +0x10
    unsigned int _videoGop; // +0x14
    unsigned int _videoBitrate; // +0x18
    unsigned int _audioBitrate; // +0x1c
    unsigned int _netSpeed; // +0x20
    unsigned int _videoCache; // +0x24
    unsigned int _audioCache; // +0x28
    unsigned int _videoDecCacheSize; // +0x2c
    unsigned int _videoSumCacheSize; // +0x30
    unsigned int _audioVideoPlayInterval; // +0x34
    unsigned int _audioVideoRecvInterval; // +0x38
    unsigned int _audioCacheThreshold; // +0x3c
    unsigned int _netJitter; // +0x40
    float _cpuUsageProcess; // +0x44
    float _cpuUsageDevice; // +0x48
    unsigned int _videoQualityLevel; // +0x4c
    unsigned int _blockCnt; // +0x50
    unsigned int _updateTime; // +0x54
    unsigned long long _liveId; // +0x58
}
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)width;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
- (unsigned int)videoFps;
- (void)setVideoFps:(unsigned int)arg1;
- (unsigned int)videoGop;
- (void)setVideoGop:(unsigned int)arg1;
- (unsigned int)videoBitrate;
- (void)setVideoBitrate:(unsigned int)arg1;
- (unsigned int)audioBitrate;
- (void)setAudioBitrate:(unsigned int)arg1;
- (unsigned int)netSpeed;
- (void)setNetSpeed:(unsigned int)arg1;
- (unsigned int)videoCache;
- (void)setVideoCache:(unsigned int)arg1;
- (unsigned int)audioCache;
- (void)setAudioCache:(unsigned int)arg1;
- (unsigned int)videoDecCacheSize;
- (void)setVideoDecCacheSize:(unsigned int)arg1;
- (unsigned int)videoSumCacheSize;
- (void)setVideoSumCacheSize:(unsigned int)arg1;
- (unsigned int)audioVideoPlayInterval;
- (void)setAudioVideoPlayInterval:(unsigned int)arg1;
- (unsigned int)audioVideoRecvInterval;
- (void)setAudioVideoRecvInterval:(unsigned int)arg1;
- (unsigned int)audioCacheThreshold;
- (void)setAudioCacheThreshold:(unsigned int)arg1;
- (unsigned int)netJitter;
- (void)setNetJitter:(unsigned int)arg1;
- (float)cpuUsageProcess;
- (void)setCpuUsageProcess:(float)arg1;
- (float)cpuUsageDevice;
- (void)setCpuUsageDevice:(float)arg1;
- (unsigned int)videoQualityLevel;
- (void)setVideoQualityLevel:(unsigned int)arg1;
- (unsigned int)blockCnt;
- (void)setBlockCnt:(unsigned int)arg1;
- (unsigned int)updateTime;
- (void)setUpdateTime:(unsigned int)arg1;
@end
