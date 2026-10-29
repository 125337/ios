@interface WCFinderLbsLifeSyncRequestManager : MMUserService <MMServiceProtocol>
{
    NSData * _lastBuffer; // +0x8
    NSMutableArray * _taskQueue; // +0x10
    WCFinderLbsLifeSyncTask * _currentTask; // +0x18
    NSString * _keyBufMd5; // +0x20
}
- (id)init;
- (void)setLastBuffer:(id)arg1;
- (BOOL)_checkTaskCanIgnore:(id)arg1;
- (void)syncWithTask:(id)arg1;
- (void)checkQueue;
- (void)_syncWithTask:(id)arg1;
- (id)lastBuffer;
- (id)taskQueue;
- (void)setTaskQueue:(id)arg1;
- (id)currentTask;
- (void)setCurrentTask:(id)arg1;
- (id)keyBufMd5;
- (void)setKeyBufMd5:(id)arg1;
- (void).cxx_destruct;
@end

