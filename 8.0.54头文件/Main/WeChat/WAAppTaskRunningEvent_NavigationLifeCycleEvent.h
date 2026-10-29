@interface WAAppTaskRunningEvent_NavigationLifeCycleEvent : WAAppTaskRunningEvent_Base
{
    unsigned long long _navigationLifeCycleEventType; // +0x8
}
- (unsigned long long)eventType;
- (unsigned long long)navigationLifeCycleEventType;
- (void)setNavigationLifeCycleEventType:(unsigned long long)arg1;
@end

