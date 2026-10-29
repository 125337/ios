@interface TRTCLocalStatistics : NSObject
{
    unsigned int _width; // +0x8
    unsigned int _height; // +0xc
    unsigned int _frameRate; // +0x10
    unsigned int _videoBitrate; // +0x14
    unsigned int _audioSampleRate; // +0x18
    unsigned int _audioBitrate; // +0x1c
    unsigned int _audioCaptureState; // +0x20
    long long _streamType; // +0x28
}
- (id)description;
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
- (long long)streamType;
- (void)setStreamType:(long long)arg1;
- (unsigned int)audioCaptureState;
- (void)setAudioCaptureState:(unsigned int)arg1;
@end

