@interface WAJSEventHandler_openWeRunSetting : WAJSEventHandler_BaseEvent
{
    BOOL _bIsNotCheckDeviceNotSupport; // +0x8
}
- (void)handleJSEvent:(id)arg1;
- (void)onCgiResponse:(id)arg1 forEvent:(unsigned int)arg2;
- (void)tryOpenSetting;
@end
