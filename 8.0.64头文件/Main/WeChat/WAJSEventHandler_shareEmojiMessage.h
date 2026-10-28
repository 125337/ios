@interface WAJSEventHandler_shareEmojiMessage : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate>
{
     forwardMessageLogic; // +0x8
     needShowEntrance; // +0x10
     entrancePath; // +0x18
     useForChatTool; // +0x28
     isToSpecificContact; // +0x29
}
- (id)getCurrentViewController;
- (void)handleJSEvent:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
