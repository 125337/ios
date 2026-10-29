@interface WAJSEventHandler_openChatTool : WAJSEventHandler_BaseEvent <SessionSelectControllerDelegate>
{
     entryPagePath; // +0x8
     sessionSelectController; // +0x18
}
- (void)handleJSEvent:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

