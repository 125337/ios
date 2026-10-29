@interface MBEventHandler_getTingAudioState : MBEventHandlerBaseSync <MBAudioPluginEventDelegate>
- (id)apiName;
- (BOOL)invokeInMainThread;
- (id)invoke:(id)arg1;
- (void)dispatchEvent:(id)arg1 params:(id)arg2;
@end
