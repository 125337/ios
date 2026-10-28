@interface MMFinderLiveUploadTask : NSObject
{
    NSString * _taskId; // +0x8
    NSArray * _mediaItemArray; // +0x10
    id /* block */ _completion; // +0x18
    long long _maxRetryCount; // +0x20
    long long _currentRetryCount; // +0x28
    long long _uploadingMediaCount; // +0x30
}
- (id)initWithUploadTaskId:(id)arg1 mediaItemArray:(id)arg2 maxRetryCount:(long long)arg3 completion:(id /* block */)arg4;
- (BOOL)isUploadTaskSuccess;
- (long long)finishType;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)mediaItemArray;
- (void)setMediaItemArray:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (long long)maxRetryCount;
- (void)setMaxRetryCount:(long long)arg1;
- (long long)currentRetryCount;
- (void)setCurrentRetryCount:(long long)arg1;
- (long long)uploadingMediaCount;
- (void)setUploadingMediaCount:(long long)arg1;
- (void).cxx_destruct;
@end
