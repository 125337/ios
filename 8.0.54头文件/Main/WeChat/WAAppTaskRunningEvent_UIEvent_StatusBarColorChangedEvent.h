@interface WAAppTaskRunningEvent_UIEvent_StatusBarColorChangedEvent : WAAppTaskRunningEvent_UIEventBase
{
    long long _preferredStatuBarStyle; // +0x8
}
- (unsigned long long)uiEventType;
- (long long)preferredStatuBarStyle;
- (void)setPreferredStatuBarStyle:(long long)arg1;
@end

