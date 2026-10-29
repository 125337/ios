@interface GameHaowanUploadTask : MMObject
{
    NSArray * _fileList; // +0x8
    BOOL _isStarted; // +0x10
    unsigned long long _currentRetryCount; // +0x18
    NSObject * _continueData; // +0x20
    id <GameHaowanUploadTaskDelegate> _delegate; // +0x28
    NSDictionary * _trackEventProps; // +0x30
}
- (id)postId;
- (void)setPostId:(id)arg1;
- (id)fileList;
- (id)initWithFileList:(id)arg1;
- (void)start;
- (void)stop;
- (void)startUpload;
- (void)retryUpload;
- (void)scheduleRetry;
- (void)handleUploadFailed:(int)arg1 message:(id)arg2 canRetry:(BOOL)arg3;
- (void)handleUploadSucceed:(id)arg1;
- (void)handleUploadProgress:(float)arg1;
- (void)onStart;
- (void)onStop;
- (double)nextRetryDelay;
- (id)generateFileKey:(id)arg1;
- (void)trackEventUploadAction:(long long)arg1 block:(id /* block */)arg2;
- (id)reportObjWithAction:(long long)arg1;
- (id)continueData;
- (void)setContinueData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)trackEventProps;
- (void)setTrackEventProps:(id)arg1;
- (void).cxx_destruct;
@end

