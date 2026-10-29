@interface WAAppStateChangedEvent : MMObject
{
    unsigned long long _eventType; // +0x8
    WAAppPlatformStateChangedContext * _context; // +0x10
    unsigned long long _resourceType; // +0x18
    unsigned long long _sharedResourceType; // +0x20
    unsigned long long _closeReason; // +0x28
}
- (id)description;
- (unsigned long long)eventType;
- (void)setEventType:(unsigned long long)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (unsigned long long)resourceType;
- (void)setResourceType:(unsigned long long)arg1;
- (unsigned long long)sharedResourceType;
- (void)setSharedResourceType:(unsigned long long)arg1;
- (unsigned long long)closeReason;
- (void)setCloseReason:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
