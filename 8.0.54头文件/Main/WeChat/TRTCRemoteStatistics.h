@interface TRTCRemoteStatistics : NSObject
{
    unsigned int _audioPacketLoss; // +0x8
    unsigned int _videoPacketLoss; // +0xc
    unsigned int _width; // +0x10
    unsigned int _height; // +0x14
    unsigned int _frameRate; // +0x18
    unsigned int _videoBitrate; // +0x1c
    unsigned int _audioSampleRate; // +0x20
    unsigned int _audioBitrate; // +0x24
    unsigned int _jitterBufferDelay; // +0x28
    unsigned int _point2PointDelay; // +0x2c
    unsigned int _audioTotalBlockTime; // +0x30
    unsigned int _audioBlockRate; // +0x34
    unsigned int _videoTotalBlockTime; // +0x38
    unsigned int _videoBlockRate; // +0x3c
    unsigned int _finalLoss; // +0x40
    NSString * _userId; // +0x48
    long long _streamType; // +0x50
}
- (id)description;
- (id)userId;
- (void)setUserId:(id)arg1;
- (unsigned int)audioPacketLoss;
- (void)setAudioPacketLoss:(unsigned int)arg1;
- (unsigned int)videoPacketLoss;
- (void)setVideoPacketLoss:(unsigned int)arg1;
- (unsigned int)width;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)height;
- (void)setHeight:(unsigned int)arg1;
- (unsigned int)frameRate;
- (void)setFrameRate:(unsigned int)arg1;
- (unsigned int)videoBitrate;
- (void)setVideoBitrate:(unsigned int)arg1;
- (unsigned int)audioSampleRate;
- (void)setAudioSampleRate:(unsigned int)arg1;
- (unsigned int)audioBitrate;
- (void)setAudioBitrate:(unsigned int)arg1;
- (unsigned int)jitterBufferDelay;
- (void)setJitterBufferDelay:(unsigned int)arg1;
- (unsigned int)point2PointDelay;
- (void)setPoint2PointDelay:(unsigned int)arg1;
- (unsigned int)audioTotalBlockTime;
- (void)setAudioTotalBlockTime:(unsigned int)arg1;
- (unsigned int)audioBlockRate;
- (void)setAudioBlockRate:(unsigned int)arg1;
- (unsigned int)videoTotalBlockTime;
- (void)setVideoTotalBlockTime:(unsigned int)arg1;
- (unsigned int)videoBlockRate;
- (void)setVideoBlockRate:(unsigned int)arg1;
- (unsigned int)finalLoss;
- (void)setFinalLoss:(unsigned int)arg1;
- (long long)streamType;
- (void)setStreamType:(long long)arg1;
- (void).cxx_destruct;
@end

