@interface SightAssetExportSession : NSObject
{
    BOOL _failAtVideoTrack; // +0x8
    BOOL _failAtAudioTrack; // +0x9
    BOOL _hasBegan; // +0xa
    BOOL _hasAppSuspend; // +0xb
    float _frameRate; // +0xc
    float _scaleFactor; // +0x10
    int _adaptiveBitrateUp; // +0x14
    int _adaptiveBitrateDown; // +0x18
    int _resolutionAdjust; // +0x1c
    AVAsset * _asset; // +0x20
    long long _status; // +0x28
    NSError * _error; // +0x30
    NSDictionary * _inputVideoSettings; // +0x38
    NSDictionary * _videoSettings; // +0x40
    NSDictionary * _audioSettings; // +0x48
    NSString * _outputFileType; // +0x50
    NSURL * _outputURL; // +0x58
    NSDictionary * _extraVideoInfo; // +0x60
    AVVideoCompositionCoreAnimationTool * _animationTool; // +0x68
    AVMutableVideoComposition * _dynamicVideoComposition; // +0x70
    id /* block */ _videoProgressHandler; // +0x78
    id /* block */ _audioProgressHandler; // +0x80
    AVVideoComposition * _videoComposition; // +0x88
    AVAssetReader * _reader; // +0x90
    AVAssetReaderVideoCompositionOutput * _videoOutput; // +0x98
    AVAssetReaderOutput * _audioOutput; // +0xa0
    AVAssetWriter * _writer; // +0xa8
    AVAssetWriterInput * _videoInput; // +0xb0
    AVAssetWriterInputPixelBufferAdaptor * _videoPixelBufferAdaptor; // +0xb8
    AVAssetWriterInput * _audioInput; // +0xc0
    NSObject<OS_dispatch_queue> * _processingQueue; // +0xc8
    double _videoDuration; // +0xd0
    id /* block */ _completionHandler; // +0xd8
    struct _startTimeStamp; // +0xe0
    struct _lastTimeStamp; // +0xf8
    CGRect _cropFrame; // +0x110
    struct _timeRange; // +0x130
    struct _adjustTimeRange; // +0x160
}
- (id)initWithAsset:(id)arg1;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (void)stopExport;
- (BOOL)encodeSamplesFromReaderOutput:(id)arg1 toWriterInput:(id)arg2;
- (void)cancel;
- (void)finish;
- (void)complete;
- (void)failWithErrorText:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)processAudioTracks:(id)arg1;
- (long long)status;
- (id)error;
- (id)videoComposition;
- (struct)timeRange;
- (struct)adjustTimeRange;
- (CGAffineTransform)transform;
- (void)onAppWillSuspend:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setError:(id)arg1;
- (BOOL)failAtVideoTrack;
- (void)setFailAtVideoTrack:(BOOL)arg1;
- (BOOL)failAtAudioTrack;
- (void)setFailAtAudioTrack:(BOOL)arg1;
- (id)inputVideoSettings;
- (void)setInputVideoSettings:(id)arg1;
- (id)videoSettings;
- (void)setVideoSettings:(id)arg1;
- (id)audioSettings;
- (void)setAudioSettings:(id)arg1;
- (float)frameRate;
- (void)setFrameRate:(float)arg1;
- (CGRect)cropFrame;
- (void)setCropFrame:(CGRect)arg1;
- (id)outputFileType;
- (void)setOutputFileType:(id)arg1;
- (id)outputURL;
- (void)setOutputURL:(id)arg1;
- (void)setTimeRange:(struct)arg1;
- (float)scaleFactor;
- (void)setScaleFactor:(float)arg1;
- (int)adaptiveBitrateUp;
- (void)setAdaptiveBitrateUp:(int)arg1;
- (int)adaptiveBitrateDown;
- (void)setAdaptiveBitrateDown:(int)arg1;
- (int)resolutionAdjust;
- (void)setResolutionAdjust:(int)arg1;
- (id)extraVideoInfo;
- (void)setExtraVideoInfo:(id)arg1;
- (id)animationTool;
- (void)setAnimationTool:(id)arg1;
- (id)dynamicVideoComposition;
- (void)setDynamicVideoComposition:(id)arg1;
- (id /* block */)videoProgressHandler;
- (void)setVideoProgressHandler:(id /* block */)arg1;
- (id /* block */)audioProgressHandler;
- (void)setAudioProgressHandler:(id /* block */)arg1;
- (void)setVideoComposition:(id)arg1;
- (id)reader;
- (void)setReader:(id)arg1;
- (id)videoOutput;
- (void)setVideoOutput:(id)arg1;
- (id)audioOutput;
- (void)setAudioOutput:(id)arg1;
- (id)writer;
- (void)setWriter:(id)arg1;
- (id)videoInput;
- (void)setVideoInput:(id)arg1;
- (id)videoPixelBufferAdaptor;
- (void)setVideoPixelBufferAdaptor:(id)arg1;
- (id)audioInput;
- (void)setAudioInput:(id)arg1;
- (id)processingQueue;
- (void)setProcessingQueue:(id)arg1;
- (double)videoDuration;
- (void)setVideoDuration:(double)arg1;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;
- (struct)startTimeStamp;
- (void)setStartTimeStamp:(struct)arg1;
- (struct)lastTimeStamp;
- (void)setLastTimeStamp:(struct)arg1;
- (void)setAdjustTimeRange:(struct)arg1;
- (BOOL)hasBegan;
- (void)setHasBegan:(BOOL)arg1;
- (BOOL)hasAppSuspend;
- (void)setHasAppSuspend:(BOOL)arg1;
- (void).cxx_destruct;
@end

