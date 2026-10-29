@interface MMVideoMavEncodeTask : VideoEncodeTask
{
    BOOL _isAutoRetryEnabled; // +0x8
    BOOL _keepsProcessInBackgroundEnabled; // +0x9
    BOOL _hasCanceledInCurrentExportSessionForApplicationSuspend; // +0xa
    unsigned long long _currentAutoRetryTimes; // +0x10
    MAVVideoComposition * _originalVideoComposition; // +0x18
    MAVVideoComposition * _currentVideoComposition; // +0x20
    VideoCompositionOutputConfig * _config; // +0x28
    id /* block */ _videoExportCompletion; // +0x30
}
+ (id)taskWithComposition:(id)arg1 config:(id)arg2;
- (id)initWithComposition:(id)arg1 config:(id)arg2;
- (void)_exportAsynchronously;
- (void)exportAsynchronouslyWithCompletionHandler:(id /* block */)arg1;
- (void)cleanExportSession;
- (void)stopExport;
- (void)pauseExport;
- (void)continueExport;
- (void)retryExport;
- (BOOL)shouldRetryExport;
- (BOOL)shouldCallbackForCancel;
- (BOOL)canCancelExport;
- (void)handleApplicationWillResignActive;
- (void)handleApplicationDidBecomeActive;
- (void)handleApplicationWillSuspend;
- (BOOL)isAutoRetryEnabled;
- (void)setIsAutoRetryEnabled:(BOOL)arg1;
- (unsigned long long)currentAutoRetryTimes;
- (void)setCurrentAutoRetryTimes:(unsigned long long)arg1;
- (BOOL)keepsProcessInBackgroundEnabled;
- (void)setKeepsProcessInBackgroundEnabled:(BOOL)arg1;
- (id)originalVideoComposition;
- (void)setOriginalVideoComposition:(id)arg1;
- (id)currentVideoComposition;
- (void)setCurrentVideoComposition:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id /* block */)videoExportCompletion;
- (void)setVideoExportCompletion:(id /* block */)arg1;
- (BOOL)hasCanceledInCurrentExportSessionForApplicationSuspend;
- (void)setHasCanceledInCurrentExportSessionForApplicationSuspend:(BOOL)arg1;
- (void).cxx_destruct;
@end

