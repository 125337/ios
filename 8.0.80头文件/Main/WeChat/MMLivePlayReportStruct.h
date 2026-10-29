@interface MMLivePlayReportStruct : NSObject
{
    unsigned int _width; // +0x8
    unsigned int _height; // +0xc
    unsigned int _videoFps; // +0x10
    unsigned int _VideoGop; // +0x14
    unsigned int _videoBitrate; // +0x18
    unsigned int _audioBitrate; // +0x1c
    unsigned int _netSpeed; // +0x20
    unsigned int _videoCache; // +0x24
    unsigned int _audioCache; // +0x28
    unsigned int _videoSumCacheSize; // +0x2c
    unsigned int _audioVideoPlayInterval; // +0x30
    unsigned int _audioVideoRecvInterval; // +0x34
    unsigned int _audioCacheThreshold; // +0x38
    unsigned int _netJitter; // +0x3c
    unsigned int _qualityLevel; // +0x40
    unsigned int _totalPlayTimeMs; // +0x44
    unsigned int _totalWaitTimeMs; // +0x48
    unsigned int _liveStartPlayTimeSec; // +0x4c
    unsigned int _firstFrameTimeMs; // +0x50
    unsigned int _connectMs; // +0x54
    unsigned int _rttMs; // +0x58
    unsigned int _networkId; // +0x5c
    unsigned int _cdnSvrPort; // +0x60
    float _cpuUsageProcess; // +0x64
    float _cpuUsageDevice; // +0x68
    unsigned int _bufferCount; // +0x6c
    unsigned int _regainAvgTime; // +0x70
    unsigned int _peakVideoBitrate; // +0x74
    unsigned int _valleyVideoBitrate; // +0x78
    unsigned int _peakAudioBitrate; // +0x7c
    unsigned int _valleyAudioBitrate; // +0x80
    unsigned int _exitWithoutPlay; // +0x84
    unsigned int _reportType; // +0x88
    unsigned int _reportInterval; // +0x8c
    unsigned int _liveProtocol; // +0x90
    unsigned int _videoFormat; // +0x94
    unsigned int _netType; // +0x98
    unsigned int _role; // +0x9c
    unsigned long long _liveId; // +0xa0
    NSString * _waitDetails; // +0xa8
    NSString * _cdnSvrIp; // +0xb0
}
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned int)width;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
- (unsigned int)videoFps;
- (void)setVideoFps:(unsigned int)arg1;
- (unsigned int)VideoGop;
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
- (unsigned int)qualityLevel;
- (void)setQualityLevel:(unsigned int)arg1;
- (unsigned int)totalPlayTimeMs;
- (void)setTotalPlayTimeMs:(unsigned int)arg1;
- (unsigned int)totalWaitTimeMs;
- (void)setTotalWaitTimeMs:(unsigned int)arg1;
- (id)waitDetails;
- (void)setWaitDetails:(id)arg1;
- (unsigned int)liveStartPlayTimeSec;
- (void)setLiveStartPlayTimeSec:(unsigned int)arg1;
- (unsigned int)firstFrameTimeMs;
- (void)setFirstFrameTimeMs:(unsigned int)arg1;
- (unsigned int)connectMs;
- (void)setConnectMs:(unsigned int)arg1;
- (unsigned int)rttMs;
- (void)setRttMs:(unsigned int)arg1;
- (unsigned int)networkId;
- (void)setNetworkId:(unsigned int)arg1;
- (id)cdnSvrIp;
- (void)setCdnSvrIp:(id)arg1;
- (unsigned int)cdnSvrPort;
- (void)setCdnSvrPort:(unsigned int)arg1;
- (float)cpuUsageProcess;
- (void)setCpuUsageProcess:(float)arg1;
- (float)cpuUsageDevice;
- (void)setCpuUsageDevice:(float)arg1;
- (unsigned int)bufferCount;
- (void)setBufferCount:(unsigned int)arg1;
- (unsigned int)regainAvgTime;
- (void)setRegainAvgTime:(unsigned int)arg1;
- (unsigned int)peakVideoBitrate;
- (void)setPeakVideoBitrate:(unsigned int)arg1;
- (unsigned int)valleyVideoBitrate;
- (void)setValleyVideoBitrate:(unsigned int)arg1;
- (unsigned int)peakAudioBitrate;
- (void)setPeakAudioBitrate:(unsigned int)arg1;
- (unsigned int)valleyAudioBitrate;
- (void)setValleyAudioBitrate:(unsigned int)arg1;
- (unsigned int)exitWithoutPlay;
- (void)setExitWithoutPlay:(unsigned int)arg1;
- (unsigned int)reportType;
- (void)setReportType:(unsigned int)arg1;
- (unsigned int)reportInterval;
- (void)setReportInterval:(unsigned int)arg1;
- (unsigned int)liveProtocol;
- (void)setLiveProtocol:(unsigned int)arg1;
- (unsigned int)videoFormat;
- (void)setVideoFormat:(unsigned int)arg1;
- (unsigned int)netType;
- (void)setNetType:(unsigned int)arg1;
- (unsigned int)role;
- (void)setRole:(unsigned int)arg1;
- (void).cxx_destruct;
@end
