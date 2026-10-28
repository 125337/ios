@interface MMOpenVoiceVideoAssetWriter : NSObject
{
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x8
    opaqueCMFormatDescription * _audioFormatDesc; // +0x10
    int _audioSampleRate; // +0x18
    int _audioChannels; // +0x1c
    int _audioFrameIndex; // +0x20
    NSURL * _url; // +0x28
    MMOpenVoiceMember * _member; // +0x30
    unsigned long long _state; // +0x38
    AVAssetWriter * _writer; // +0x40
    AVAssetWriterInput * _videoInput; // +0x48
    AVAssetWriterInput * _audioInput; // +0x50
    AVAssetWriterInputPixelBufferAdaptor * _pixelBufferAdaptor; // +0x58
    double _startTime; // +0x60
    double _lastAudioDataTimeStamp; // +0x68
    long long _rotation; // +0x70
    long long _videoFrameIndex; // +0x78
    id /* block */ _errorCallback; // +0x80
    CGSize _size; // +0x88
}
- (id)initWithMember:(id)arg1 audioSampleRate:(int)arg2 audioChannels:(int)arg3 errorCallback:(id /* block */)arg4;
- (void)dealloc;
- (void)setState:(unsigned long long)arg1;
- (void)cancel;
- (void)onVideoFrame:(__CVBuffer *)arg1 rotation:(long long)arg2;
- (void)appendAudioData:(id)arg1 timestamp:(double)arg2;
- (void)onAudioData:(id)arg1 timestamp:(double)arg2;
- (void)setupWithSize:(CGSize)arg1 rotation:(long long)arg2 timestamp:(double)arg3;
- (void)finishWithComplete:(id /* block */)arg1;
- (unsigned int)frameSizeByte;
- (unsigned int)framesInPacket:(unsigned int)arg1;
- (id)url;
- (id)member;
- (int)audioSampleRate;
- (int)audioChannels;
- (unsigned long long)state;
- (id)writer;
- (void)setWriter:(id)arg1;
- (id)videoInput;
- (void)setVideoInput:(id)arg1;
- (id)audioInput;
- (void)setAudioInput:(id)arg1;
- (id)pixelBufferAdaptor;
- (void)setPixelBufferAdaptor:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)lastAudioDataTimeStamp;
- (void)setLastAudioDataTimeStamp:(double)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (long long)rotation;
- (void)setRotation:(long long)arg1;
- (long long)videoFrameIndex;
- (void)setVideoFrameIndex:(long long)arg1;
- (int)audioFrameIndex;
- (void)setAudioFrameIndex:(int)arg1;
- (id /* block */)errorCallback;
- (void)setErrorCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
