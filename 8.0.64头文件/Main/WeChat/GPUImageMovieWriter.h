@interface GPUImageMovieWriter : NSObject <GPUImageInput>
{
    BOOL alreadyFinishedRecording; // +0x8
    NSString * fileType; // +0x10
    AVAssetWriter * assetWriter; // +0x18
    AVAssetWriterInput * assetWriterAudioInput; // +0x20
    AVAssetWriterInput * assetWriterVideoInput; // +0x28
    AVAssetWriterInputPixelBufferAdaptor * assetWriterPixelBufferInput; // +0x30
    GPUImageContext * _movieWriterContext; // +0x38
    __CVBuffer * renderTarget; // +0x40
    __CVBuffer * renderTexture; // +0x48
    CGSize videoSize; // +0x50
    unsigned long long inputRotation; // +0x60
    BOOL __isFirst; // +0x68
    unsigned int movieFramebuffer; // +0x6c
    unsigned int movieRenderbuffer; // +0x70
    GLProgram * colorSwizzlingProgram; // +0x78
    int colorSwizzlingPositionAttribute; // +0x80
    int colorSwizzlingTextureCoordinateAttribute; // +0x84
    int colorSwizzlingInputTextureUniform; // +0x88
    GPUImageFramebuffer * firstInputFramebuffer; // +0x90
    BOOL discont; // +0x98
    struct startTime; // +0x9c
    struct previousFrameTime; // +0xb4
    struct previousAudioTime; // +0xcc
    struct offsetTime; // +0xe4
    NSObject<OS_dispatch_queue> * audioQueue; // +0x100
    NSObject<OS_dispatch_queue> * videoQueue; // +0x108
    BOOL audioEncodingIsFinished; // +0x110
    BOOL videoEncodingIsFinished; // +0x111
    BOOL isRecording; // +0x112
    BOOL _hasAudioTrack; // +0x113
    BOOL _encodingLiveVideo; // +0x114
    BOOL _shouldPassthroughAudio; // +0x115
    BOOL enabled; // +0x116
    BOOL _shouldInvalidateAudioSampleWhenDone; // +0x117
    BOOL _paused; // +0x118
    id /* block */ completionBlock; // +0x120
    id /* block */ failureBlock; // +0x128
    id /* block */ videoInputReadyCallback; // +0x130
    id /* block */ audioInputReadyCallback; // +0x138
    id <GPUImageMovieWriterDelegate> _delegate; // +0x140
    id /* block */ _audioProcessingCallback; // +0x148
    NSURL * _movieURL; // +0x150
}
- (id)initWithMovieURL:(id)arg1 size:(CGSize)arg2;
- (id)initWithMovieURL:(id)arg1 size:(CGSize)arg2 fileType:(id)arg3 outputSettings:(id)arg4;
- (void)dealloc;
- (void)initializeMovieWithOutputSettings:(id)arg1;
- (void)setEncodingLiveVideo:(BOOL)arg1;
- (void)startRecording;
- (void)startRecordingInOrientation:(CGAffineTransform)arg1;
- (void)cancelRecording;
- (void)finishRecording;
- (void)finishRecordingWithCompletionHandler:(id /* block */)arg1;
- (void)processAudioBuffer:(opaqueCMSampleBuffer *)arg1;
- (void)enableSynchronizationCallbacks;
- (void)createDataFBO;
- (void)destroyDataFBO;
- (void)setFilterFBO;
- (void)renderAtInternalSizeUsingFramebuffer:(id)arg1;
- (void)newFrameReadyAtTime:(struct)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (int)generateFrameBuffer:(BOOL)arg1 newSize:(CGSize)arg2;
- (void)destroyFrameBuffer;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(CGSize)arg1 atIndex:(long long)arg2;
- (CGSize)maximumOutputSize;
- (void)endProcessing;
- (BOOL)shouldIgnoreUpdatesToThisTarget;
- (BOOL)wantsMonochromeInput;
- (void)setCurrentlyReceivingMonochromeInput:(BOOL)arg1;
- (void)setHasAudioTrack:(BOOL)arg1;
- (void)setHasAudioTrack:(BOOL)arg1 audioSettings:(id)arg2;
- (id)metaData;
- (void)setMetaData:(id)arg1;
- (struct)duration;
- (CGAffineTransform)transform;
- (void)setTransform:(CGAffineTransform)arg1;
- (id)assetWriter;
- (void)setPaused:(BOOL)arg1;
- (opaqueCMSampleBuffer *)adjustTime:(opaqueCMSampleBuffer *)arg1 by:(struct)arg2;
- (BOOL)hasAudioTrack;
- (BOOL)encodingLiveVideo;
- (BOOL)shouldPassthroughAudio;
- (void)setShouldPassthroughAudio:(BOOL)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (id /* block */)videoInputReadyCallback;
- (void)setVideoInputReadyCallback:(id /* block */)arg1;
- (id /* block */)audioInputReadyCallback;
- (void)setAudioInputReadyCallback:(id /* block */)arg1;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)shouldInvalidateAudioSampleWhenDone;
- (void)setShouldInvalidateAudioSampleWhenDone:(BOOL)arg1;
- (BOOL)isPaused;
- (id)movieWriterContext;
- (void)setMovieWriterContext:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)audioProcessingCallback;
- (void)setAudioProcessingCallback:(id /* block */)arg1;
- (id)movieURL;
- (void)setMovieURL:(id)arg1;
- (void).cxx_destruct;
@end
