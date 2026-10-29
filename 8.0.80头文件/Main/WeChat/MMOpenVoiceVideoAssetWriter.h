@interface MMOpenVoiceVideoAssetWriter : NSObject
{
    NSObject<OS_dispatch_queue> * _workerQueue; // +0x8
    opaqueCMFormatDescription * _audioFormatDesc; // +0x10
    opaqueCMFormatDescription * _localAudioFormatDesc; // +0x18
    int _audioSampleRate; // +0x20
    int _audioChannels; // +0x24
    int _remoteAudioFrameIndex; // +0x28
    int _localAudioFrameIndex; // +0x2c
    NSURL * _url; // +0x30
    MMOpenVoiceMember * _member; // +0x38
    unsigned long long _recordMode; // +0x40
    unsigned long long _state; // +0x48
    AVAssetWriter * _writer; // +0x50
    AVAssetWriterInput * _videoInput; // +0x58
    AVAssetWriterInput * _audioInput; // +0x60
    AVAssetWriterInput * _localAudioInput; // +0x68
    AVAssetWriterInputPixelBufferAdaptor * _pixelBufferAdaptor; // +0x70
    double _startTime; // +0x78
    double _lastRemoteAudioTimeStamp; // +0x80
    double _lastLocalAudioTimeStamp; // +0x88
    long long _rotation; // +0x90
    long long _videoFrameIndex; // +0x98
    id /* block */ _errorCallback; // +0xa0
    CGSize _size; // +0xa8
}
- (id)initWithMember:(id)arg1 audioSampleRate:(int)arg2 audioChannels:(int)arg3 errorCallback:(id /* block */)arg4;
- (id)initWithMember:(id)arg1 audioSampleRate:(int)arg2 audioChannels:(int)arg3 recordMode:(unsigned long long)arg4 errorCallback:(id /* block */)arg5;
- (void)dealloc;
- (void)setState:(unsigned long long)arg1;
- (void)cancel;
- (void)onVideoFrame:(__CVBuffer *)arg1 rotation:(long long)arg2;
- (void)appendAudioData:(id)arg1 timestamp:(double)arg2 isLocal:(BOOL)arg3;
- (void)onAudioData:(id)arg1 timestamp:(double)arg2;
- (void)onLocalAudioData:(id)arg1 timestamp:(double)arg2;
- (void)setupWithSize:(CGSize)arg1 rotation:(long long)arg2 timestamp:(double)arg3;
- (void)finishWithComplete:(id /* block */)arg1;
- (unsigned int)frameSizeByte;
- (unsigned int)framesInPacket:(unsigned int)arg1;
- (id)url;
- (id)member;
- (int)audioSampleRate;
- (int)audioChannels;
- (unsigned long long)recordMode;
- (unsigned long long)state;
- (id)writer;
- (void)setWriter:(id)arg1;
- (id)videoInput;
- (void)setVideoInput:(id)arg1;
- (id)audioInput;
- (void)setAudioInput:(id)arg1;
- (id)localAudioInput;
- (void)setLocalAudioInput:(id)arg1;
- (id)pixelBufferAdaptor;
- (void)setPixelBufferAdaptor:(id)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)lastRemoteAudioTimeStamp;
- (void)setLastRemoteAudioTimeStamp:(double)arg1;
- (double)lastLocalAudioTimeStamp;
- (void)setLastLocalAudioTimeStamp:(double)arg1;
- (CGSize)size;
- (void)setSize:(CGSize)arg1;
- (long long)rotation;
- (void)setRotation:(long long)arg1;
- (long long)videoFrameIndex;
- (void)setVideoFrameIndex:(long long)arg1;
- (int)remoteAudioFrameIndex;
- (void)setRemoteAudioFrameIndex:(int)arg1;
- (int)localAudioFrameIndex;
- (void)setLocalAudioFrameIndex:(int)arg1;
- (id /* block */)errorCallback;
- (void)setErrorCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end
