@interface WAJSEventHandler_chooseShareGroup : WAJSEventHandler_BaseEvent <WAShareGroupViewControllerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)userTriggerCancel;
- (void)userTriggerDoneWithPrivacy:(long long)arg1 labelList:(id)arg2 contactList:(id)arg3;
- (id)getUsersByUserNanmeList:(id)arg1;
@end
