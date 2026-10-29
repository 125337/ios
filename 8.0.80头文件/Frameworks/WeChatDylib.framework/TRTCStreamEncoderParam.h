@interface TRTCStreamEncoderParam : NSObject
{
    int _videoEncodedWidth; // +0x8
    int _videoEncodedHeight; // +0xc
    int _videoEncodedFPS; // +0x10
    int _videoEncodedGOP; // +0x14
    int _videoEncodedKbps; // +0x18
    int _audioEncodedSampleRate; // +0x1c
    int _audioEncodedChannelNum; // +0x20
    int _audioEncodedKbps; // +0x24
    int _audioEncodedCodecType; // +0x28
    int _videoEncodedCodecType; // +0x2c
    NSString * _videoSeiParams; // +0x30
}
- (shared_ptr<trtc::StreamEncoderParam>)convertToCppParams;
- (id)init;
- (int)videoEncodedWidth;
- (void)setVideoEncodedWidth:(int)arg1;
- (int)videoEncodedHeight;
- (void)setVideoEncodedHeight:(int)arg1;
- (int)videoEncodedFPS;
- (void)setVideoEncodedFPS:(int)arg1;
- (int)videoEncodedGOP;
- (void)setVideoEncodedGOP:(int)arg1;
- (int)videoEncodedKbps;
- (void)setVideoEncodedKbps:(int)arg1;
- (int)audioEncodedSampleRate;
- (void)setAudioEncodedSampleRate:(int)arg1;
- (int)audioEncodedChannelNum;
- (void)setAudioEncodedChannelNum:(int)arg1;
- (int)audioEncodedKbps;
- (void)setAudioEncodedKbps:(int)arg1;
- (int)audioEncodedCodecType;
- (void)setAudioEncodedCodecType:(int)arg1;
- (int)videoEncodedCodecType;
- (void)setVideoEncodedCodecType:(int)arg1;
- (id)videoSeiParams;
- (void)setVideoSeiParams:(id)arg1;
- (void).cxx_destruct;
@end
