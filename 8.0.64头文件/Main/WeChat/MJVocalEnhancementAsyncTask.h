@interface MJVocalEnhancementAsyncTask : NSObject
{
    BOOL _isCanceled; // +0x8
    NSString * _audioID; // +0x10
    NSString * _roleID; // +0x18
    MJAudioFileManager * _audioFileManager; // +0x20
    unsigned long long _status; // +0x28
    UBDictionarySignal * _statusDidUpdateSignal; // +0x30
    NSMutableArray * _completions; // +0x38
    NSString * _processedFilePath; // +0x40
}
- (id)initWithAudioID:(id)arg1 roleID:(id)arg2 audioFileManager:(id)arg3 statusDidUpdateSignal:(id)arg4;
- (void)dealloc;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (void)cancel;
- (void)handleTaskStart;
- (void)handleTaskSuccessWithProcessedFilePath:(id)arg1;
- (void)handleTaskFailWithError:(id)arg1;
- (BOOL)appendCompletionIfRunning:(id)arg1;
- (void)markStatusPending;
- (id)statusDidUpdateParams;
- (id)description;
- (id)audioID;
- (id)roleID;
- (id)audioFileManager;
- (unsigned long long)status;
- (void)setStatus:(unsigned long long)arg1;
- (id)statusDidUpdateSignal;
- (id)completions;
- (BOOL)isCanceled;
- (void)setIsCanceled:(BOOL)arg1;
- (id)processedFilePath;
- (void)setProcessedFilePath:(id)arg1;
- (void).cxx_destruct;
@end
