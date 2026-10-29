@interface WCChatRecordZipExportTask : NSObject
{
    BOOL taskCancelled; // +0x8
    BOOL _includeLegacyItems; // +0x9
    BOOL _started; // +0xa
    long long taskState; // +0x10
    double taskProgress; // +0x18
    MMZipItemProvider * taskProvider; // +0x20
    NSArray * taskLegacyObjects; // +0x28
    NSString * _fileName; // +0x30
    NSArray * _msgList; // +0x38
    long long _recordExpandMode; // +0x40
    double _lastProgressNotifyTimestamp; // +0x48
    NSMutableArray * _progressHandlers; // +0x50
    NSMutableArray * _completionHandlers; // +0x58
    NSRecursiveLock * _lock; // +0x60
}
- (id)initWithMsgList:(id)arg1 recordExpandMode:(long long)arg2 includeLegacyItems:(BOOL)arg3;
- (long long)state;
- (double)progress;
- (id)provider;
- (id)legacyObjects;
- (BOOL)isCancelled;
- (void)start;
- (void)cancel;
- (void)addProgressHandler:(id /* block */)arg1;
- (void)addCompletionHandler:(id /* block */)arg1;
- (void)updateProgress:(double)arg1;
- (void)finishWithState:(long long)arg1 provider:(id)arg2 legacyObjects:(id)arg3;
- (void)notifyCompletionOnMainThread;
- (void)setState:(long long)arg1;
- (void)setProgress:(double)arg1;
- (void)setProvider:(id)arg1;
- (void)setLegacyObjects:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)msgList;
- (void)setMsgList:(id)arg1;
- (long long)recordExpandMode;
- (void)setRecordExpandMode:(long long)arg1;
- (BOOL)includeLegacyItems;
- (void)setIncludeLegacyItems:(BOOL)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (double)lastProgressNotifyTimestamp;
- (void)setLastProgressNotifyTimestamp:(double)arg1;
- (id)progressHandlers;
- (void)setProgressHandlers:(id)arg1;
- (id)completionHandlers;
- (void)setCompletionHandlers:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (void).cxx_destruct;
@end
