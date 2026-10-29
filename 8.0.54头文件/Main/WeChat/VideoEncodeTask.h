@interface VideoEncodeTask : NSObject
{
    BOOL _isEncoding; // +0x8
    BOOL _isCanceled; // +0x9
    BOOL _isReplicable; // +0xa
    NSURL * _inputPath; // +0x10
    NSURL * _outputPath; // +0x18
    AVAsset * _asset; // +0x20
    VideoEncodeParams * _params; // +0x28
    NSMutableArray * _callbacks; // +0x30
    AVMutableVideoComposition * _videoComposition; // +0x38
    NSString * _taskId; // +0x40
    id /* block */ _videoProgressCallback; // +0x48
    unsigned long long _applicationResignActiveTimes; // +0x50
    unsigned long long _applicationSuspendTimes; // +0x58
    NSMutableArray * _audioSessionStatus; // +0x60
    NSString * _exportFilePath; // +0x68
    ABAReportPrams * _videoScoreParams; // +0x70
}
+ (id)errorWithCode:(long long)arg1;
+ (BOOL)isCancel:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)callbackSuccess:(id)arg1 compressDuration:(double)arg2;
- (BOOL)cancel;
- (BOOL)shouldCallbackForCancel;
- (BOOL)canCancelExport;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (void)cleanOutputFilePathIfNeeded;
- (void)cleanExportSession;
- (void)stopExport;
- (BOOL)isValidPreComposeTask;
- (void)setupNotification;
- (void)onApplicationWillResignActive;
- (void)onApplicationDidBecomeActive;
- (void)onApplicationWillSuspend;
- (void)handleApplicationWillResignActive;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillSuspend;
- (void)onAudioSessionInterrupt:(id)arg1;
- (void)onAudioSessionRouteChange:(id)arg1;
- (void)onAudioSessionMediaServicesWereLost:(id)arg1;
- (void)onAudioSessionMediaServicesWereReset:(id)arg1;
- (void)onAudioSessionSilenceSecondaryAudioHint:(id)arg1;
- (id)inputPath;
- (void)setInputPath:(id)arg1;
- (id)outputPath;
- (void)setOutputPath:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)callbacks;
- (void)setCallbacks:(id)arg1;
- (BOOL)isEncoding;
- (void)setIsEncoding:(BOOL)arg1;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
- (BOOL)isReplicable;
- (void)setIsReplicable:(BOOL)arg1;
- (id)videoComposition;
- (void)setVideoComposition:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id /* block */)videoProgressCallback;
- (void)setVideoProgressCallback:(id /* block */)arg1;
- (unsigned long long)applicationResignActiveTimes;
- (void)setApplicationResignActiveTimes:(unsigned long long)arg1;
- (unsigned long long)applicationSuspendTimes;
- (void)setApplicationSuspendTimes:(unsigned long long)arg1;
- (id)audioSessionStatus;
- (void)setAudioSessionStatus:(id)arg1;
- (id)exportFilePath;
- (void)setExportFilePath:(id)arg1;
- (id)videoScoreParams;
- (void)setVideoScoreParams:(id)arg1;
- (void).cxx_destruct;
@end

