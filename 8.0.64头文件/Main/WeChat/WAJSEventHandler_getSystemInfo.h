@interface WAJSEventHandler_getSystemInfo : WAJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (void)fillAllInfo;
- (void)updatePrivateInfoIfNeeded:(id)arg1;
- (void)makeWindowInfo:(id)arg1 result:(id)arg2;
- (void)copyInfo:(id)arg1 from:(id)arg2 to:(id)arg3;
- (void)fillDeviceInfo;
- (void)fillWindowInfo;
- (void)fillAppBaseInfo;
- (void)fillOneInfo:(id)arg1;
- (id)getSystemInfo;
@end
