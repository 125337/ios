@interface ChatLogSizeEstimator : MMUserService <MMServiceProtocol>
{
    NSOperationQueue * _estimateQueue; // +0x8
}
+ (unsigned long long)defaultOneMsgSize;
- (void)onServiceInit;
- (void)estimateChatLogSizeForSessions:(id)arg1 backupTime:(unsigned int)arg2 ignoreHardLink:(BOOL)arg3 oneMsgSize:(unsigned long long)arg4 completion:(id /* block */)arg5;
- (id)mediaDirsForSession:(id)arg1;
- (void)safeAddPath:(id)arg1 toArray:(id)arg2;
- (BOOL)hasMediaInWindow:(id)arg1 backupTime:(unsigned int)arg2;
- (BOOL)msgHasMediaAfterBackup:(id)arg1 userName:(id)arg2 backupTime:(unsigned int)arg3;
- (id)mediaPathsForMsg:(id)arg1 userName:(id)arg2;
- (void).cxx_destruct;
@end
