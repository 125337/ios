@interface LocalJSEventHandler_launchApplication : LocalJSEventHandler_BaseEvent
- (void)handleJSEvent:(id)arg1;
- (BOOL)launchAppleStoreWithSchemeUrl:(id)arg1 action:(unsigned int)arg2 context:(id)arg3 getError:(id *)arg4 skAdItem:(id)arg5;
- (id)launchAppleStoreErrorWithCode:(long long)arg1 description:(id)arg2;
@end

