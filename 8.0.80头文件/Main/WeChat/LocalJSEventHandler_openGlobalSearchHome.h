@interface LocalJSEventHandler_openGlobalSearchHome : LocalJSEventHandler_BaseEvent
+ (id)createHomeVCWithAutoFocus:(BOOL)arg1;
+ (id)findFTSHomeInNav:(id)arg1 reverse:(BOOL)arg2;
+ (void)replaceNavStack:(id)arg1 withHomeVC:(id)arg2;
+ (void)scheduleScrollToHotSearch:(id)arg1;
+ (void)logNavStack:(id)arg1 tag:(id)arg2;
- (void)handleJSEvent:(id)arg1;
@end
