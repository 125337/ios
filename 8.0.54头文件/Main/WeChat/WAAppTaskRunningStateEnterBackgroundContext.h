@interface WAAppTaskRunningStateEnterBackgroundContext : MMObject
{
    WAAppTask * _task; // +0x8
    unsigned long long _reason; // +0x10
    long long _action; // +0x18
    WAAppStateChangedContextInfo * _contextInfo; // +0x20
}
- (void)backgroundInteruptUniqueSource:(unsigned long long)arg1;
- (void)backgroundReTakeUniqueSource:(unsigned long long)arg1;
- (void)backgroundRecoverSharedResource:(unsigned long long)arg1;
- (void)backgroundReceiveBackgroundCheck;
- (BOOL)isForbidTriggerSuspendTimer;
- (BOOL)isCanKeepRunningWhenWhiteScreen;
- (id)description;
- (id)task;
- (void)setTask:(id)arg1;
- (unsigned long long)reason;
- (void)setReason:(unsigned long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (id)contextInfo;
- (void)setContextInfo:(id)arg1;
- (void).cxx_destruct;
@end

