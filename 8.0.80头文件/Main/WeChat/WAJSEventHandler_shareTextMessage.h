@interface WAJSEventHandler_shareTextMessage : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate>
{
     forwardMessageLogic; // +0x8
     isToSpecificContact; // +0x10
}
- (id)getCurrentViewController;
- (void)handleJSEvent:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
