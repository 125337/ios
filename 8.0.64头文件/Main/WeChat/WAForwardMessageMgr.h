@interface WAForwardMessageMgr : ForwardMessageMgr
- (void)forwardMessage:(id)arg1 fromViewController:(id)arg2;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
@end
