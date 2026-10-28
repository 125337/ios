@interface WAJSEventHandler_handleBrandPersonalCenterAction : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate>
{
     sessionId; // +0x8
     $__lazy_storage_$_forwardLogic; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
