@interface EmoticonVideoInput : NSObject
{
    BOOL _restartWhenCompleted; // +0x8
    id <EmoticonVideoInputDelegate> _delegate; // +0x10
    NSURL * _url; // +0x18
    AVAsset * _asset; // +0x20
    AVAssetReader * _assetReader; // +0x28
    AVAssetReaderTrackOutput * _trackOutput; // +0x30
    NSObject<OS_dispatch_queue> * _inputQueue; // +0x38
    struct _currentTime; // +0x40
    struct _totalDuration; // +0x58
}
- (id)initWithFilePath:(id)arg1 inputQueue:(id)arg2;
- (BOOL)beginReading;
- (void)reset;
- (void)readNextVideoFrame;
- (void)readNextVideoFrameWithSkipFrame:(long long)arg1;
- (void)readVideoFrameAtTime:(struct)arg1;
- (opaqueCMSampleBuffer *)getVideoFrameSyncAtTime:(struct)arg1;
- (void)destorySampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)restartWhenCompleted;
- (void)setRestartWhenCompleted:(BOOL)arg1;
- (struct)currentTime;
- (void)setCurrentTime:(struct)arg1;
- (struct)totalDuration;
- (void)setTotalDuration:(struct)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)assetReader;
- (void)setAssetReader:(id)arg1;
- (id)trackOutput;
- (void)setTrackOutput:(id)arg1;
- (id)inputQueue;
- (void)setInputQueue:(id)arg1;
- (void).cxx_destruct;
@end
