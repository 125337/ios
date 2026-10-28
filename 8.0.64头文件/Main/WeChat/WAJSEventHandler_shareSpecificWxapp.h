@interface WAJSEventHandler_shareSpecificWxapp : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate>
{
    WAContact * _contact; // +0x8
    ForwardMessageLogicController * _forwardLogic; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (id)getShareStatReport:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (void).cxx_destruct;
@end
