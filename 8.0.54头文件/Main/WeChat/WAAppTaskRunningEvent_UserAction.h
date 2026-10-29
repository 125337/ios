@interface WAAppTaskRunningEvent_UserAction : WAAppTaskRunningEvent_Base
{
    unsigned long long _action; // +0x8
}
- (unsigned long long)eventType;
- (id)description;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
@end

