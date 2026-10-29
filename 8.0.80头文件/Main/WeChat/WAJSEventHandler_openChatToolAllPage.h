@interface WAJSEventHandler_openChatToolAllPage : WAJSEventHandler_BaseEvent <SessionSelectControllerDelegate>
{
     sessionSelectController; // +0x8
     waitingDismissSessionSelectController; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
