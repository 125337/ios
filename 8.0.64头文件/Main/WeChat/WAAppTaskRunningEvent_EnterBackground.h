@interface WAAppTaskRunningEvent_EnterBackground : WAAppTaskRunningEvent_Base
{
    long long _mode; // +0x8
    long long _action; // +0x10
    WAAppTaskReferrerInfo * _backReferrerInfo; // +0x18
}
- (unsigned long long)eventType;
- (id)description;
- (long long)mode;
- (void)setMode:(long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (id)backReferrerInfo;
- (void)setBackReferrerInfo:(id)arg1;
- (void).cxx_destruct;
@end
