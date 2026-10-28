@interface WAJSEventHandler_shareFileMessage : WAJSEventHandler_BaseEvent <ForwardMessageLogicDelegate>
{
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x8
    BOOL _isToSpecificContact; // +0x10
}
- (void)handleJSEvent:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (BOOL)isToSpecificContact;
- (void)setIsToSpecificContact:(BOOL)arg1;
- (void).cxx_destruct;
@end
