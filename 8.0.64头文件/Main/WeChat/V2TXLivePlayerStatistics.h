@interface V2TXLivePlayerStatistics : NSObject
{
    unsigned long long _appCpu; // +0x8
    unsigned long long _systemCpu; // +0x10
    unsigned long long _width; // +0x18
    unsigned long long _height; // +0x20
    unsigned long long _fps; // +0x28
    unsigned long long _videoBitrate; // +0x30
    unsigned long long _audioBitrate; // +0x38
    unsigned long long _audioPacketLoss; // +0x40
    unsigned long long _videoPacketLoss; // +0x48
    unsigned long long _jitterBufferDelay; // +0x50
    unsigned long long _audioTotalBlockTime; // +0x58
    unsigned long long _audioBlockRate; // +0x60
    unsigned long long _videoTotalBlockTime; // +0x68
    unsigned long long _videoBlockRate; // +0x70
    unsigned long long _rtt; // +0x78
    unsigned long long _netSpeed; // +0x80
}
- (id)description;
- (unsigned long long)appCpu;
- (void)setAppCpu:(unsigned long long)arg1;
- (unsigned long long)systemCpu;
- (void)setSystemCpu:(unsigned long long)arg1;
- (unsigned long long)width;
- (void)setWidth:(unsigned long long)arg1;
- (unsigned long long)height;
- (void)setHeight:(unsigned long long)arg1;
- (unsigned long long)fps;
- (void)setFps:(unsigned long long)arg1;
- (unsigned long long)videoBitrate;
- (void)setVideoBitrate:(unsigned long long)arg1;
- (unsigned long long)audioBitrate;
- (void)setAudioBitrate:(unsigned long long)arg1;
- (unsigned long long)audioPacketLoss;
- (void)setAudioPacketLoss:(unsigned long long)arg1;
- (unsigned long long)videoPacketLoss;
- (void)setVideoPacketLoss:(unsigned long long)arg1;
- (unsigned long long)jitterBufferDelay;
- (void)setJitterBufferDelay:(unsigned long long)arg1;
- (unsigned long long)audioTotalBlockTime;
- (void)setAudioTotalBlockTime:(unsigned long long)arg1;
- (unsigned long long)audioBlockRate;
- (void)setAudioBlockRate:(unsigned long long)arg1;
- (unsigned long long)videoTotalBlockTime;
- (void)setVideoTotalBlockTime:(unsigned long long)arg1;
- (unsigned long long)videoBlockRate;
- (void)setVideoBlockRate:(unsigned long long)arg1;
- (unsigned long long)rtt;
- (void)setRtt:(unsigned long long)arg1;
- (unsigned long long)netSpeed;
- (void)setNetSpeed:(unsigned long long)arg1;
@end
