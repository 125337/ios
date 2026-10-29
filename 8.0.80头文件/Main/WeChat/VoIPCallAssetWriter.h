@interface VoIPCallAssetWriter : NSObject
{
    opaqueCMFormatDescription * _localAudioFormatDesc; // +0x8
    opaqueCMFormatDescription * _remoteAudioFormatDesc; // +0x10
    struct _lastVideoPTS; // +0x18
    NSArray * _videoSamples; // +0x30
    unsigned long long _videoIndex; // +0x38
    NSArray * _localAudioPackets; // +0x40
    unsigned long long _localAudioIndex; // +0x48
    NSArray * _remoteAudioPackets; // +0x50
    unsigned long long _remoteAudioIndex; // +0x58
    BOOL _videoInputFinished; // +0x60
    BOOL _localAudioInputFinished; // +0x61
    BOOL _remoteAudioInputFinished; // +0x62
    BOOL _streamingCancelled; // +0x63
    BOOL _terminalNotified; // +0x64
    unsigned long long _state; // +0x68
    unsigned long long _outputFormat; // +0x70
    NSString * _outputPath; // +0x78
    NSError * _lastError; // +0x80
    NSString * _assetIdentifier; // +0x88
    AVAssetWriter * _writer; // +0x90
    AVAssetWriterInput * _videoInput; // +0x98
    AVAssetWriterInput * _localAudioInput; // +0xa0
    AVAssetWriterInput * _remoteAudioInput; // +0xa8
    AVAssetWriterInput * _metadataInput; // +0xb0
    AVAssetWriterInputMetadataAdaptor * _metadataAdaptor; // +0xb8
    VoIPCallAssetWriterAudioConfig * _localAudioConfig; // +0xc0
    VoIPCallAssetWriterAudioConfig * _remoteAudioConfig; // +0xc8
    long long _appendedFrameCount; // +0xd0
    long long _appendedLocalAudioPacketCount; // +0xd8
    long long _appendedRemoteAudioPacketCount; // +0xe0
    NSObject<OS_dispatch_queue> * _feedingQueue; // +0xe8
    id /* block */ _streamingCompletion; // +0xf0
    CGSize _videoSize; // +0xf8
    struct _bestFrameStillTime; // +0x108
    struct _baseTime; // +0x120
}
- (id)initWithOutputPath:(id)arg1 videoSize:(CGSize)arg2 sourceFormatHint:(opaqueCMFormatDescription *)arg3 localAudioConfig:(id)arg4 remoteAudioConfig:(id)arg5 outputFormat:(unsigned long long)arg6;
- (void)dealloc;
- (BOOL)p_setupWriterWithSourceFormatHint:(opaqueCMFormatDescription *)arg1;
- (BOOL)p_addAudioInputForConfig:(id)arg1 toWriter:(id)arg2 isLocal:(BOOL)arg3;
- (BOOL)startSessionAtSourceTime:(struct)arg1;
- (void)startStreamingWithVideoSamples:(id)arg1 localAudioPackets:(id)arg2 remoteAudioPackets:(id)arg3 completion:(id /* block */)arg4;
- (void)cancel;
- (void)p_startFeedingOnQueue;
- (void)p_feedVideoInputOnQueue;
- (void)p_feedAudioInputOnQueue:(BOOL)arg1;
- (void)p_checkAllInputsFinishedOnQueue;
- (void)p_failStreamingWithError:(id)arg1;
- (void)p_cancelStreamingOnQueue;
- (void)p_notifyTerminalOnMain:(BOOL)arg1 error:(id)arg2;
- (void)p_releaseRemainingVideoSamples;
- (id)p_expandAudioPacketsWithSilence:(id)arg1 config:(id)arg2 isLocal:(BOOL)arg3;
- (BOOL)p_appendAudioPcm:(id)arg1 ptsNs:(unsigned long long)arg2 isLocal:(BOOL)arg3;
- (BOOL)p_writeStillImageTimeMetadata;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)outputFormat;
- (void)setOutputFormat:(unsigned long long)arg1;
- (id)outputPath;
- (void)setOutputPath:(id)arg1;
- (id)lastError;
- (void)setLastError:(id)arg1;
- (id)assetIdentifier;
- (void)setAssetIdentifier:(id)arg1;
- (struct)bestFrameStillTime;
- (void)setBestFrameStillTime:(struct)arg1;
- (id)writer;
- (void)setWriter:(id)arg1;
- (id)videoInput;
- (void)setVideoInput:(id)arg1;
- (id)localAudioInput;
- (void)setLocalAudioInput:(id)arg1;
- (id)remoteAudioInput;
- (void)setRemoteAudioInput:(id)arg1;
- (id)metadataInput;
- (void)setMetadataInput:(id)arg1;
- (id)metadataAdaptor;
- (void)setMetadataAdaptor:(id)arg1;
- (id)localAudioConfig;
- (void)setLocalAudioConfig:(id)arg1;
- (id)remoteAudioConfig;
- (void)setRemoteAudioConfig:(id)arg1;
- (CGSize)videoSize;
- (void)setVideoSize:(CGSize)arg1;
- (struct)baseTime;
- (void)setBaseTime:(struct)arg1;
- (long long)appendedFrameCount;
- (void)setAppendedFrameCount:(long long)arg1;
- (long long)appendedLocalAudioPacketCount;
- (void)setAppendedLocalAudioPacketCount:(long long)arg1;
- (long long)appendedRemoteAudioPacketCount;
- (void)setAppendedRemoteAudioPacketCount:(long long)arg1;
- (id)feedingQueue;
- (void)setFeedingQueue:(id)arg1;
- (id /* block */)streamingCompletion;
- (void)setStreamingCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
