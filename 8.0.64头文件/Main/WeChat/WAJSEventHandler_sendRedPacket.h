@interface WAJSEventHandler_sendRedPacket : WAJSEventHandler_BaseEvent <WARedEnvelopesMakeViewControllerDelegate>
- (void)handleJSEvent:(id)arg1;
- (void)onWARedEnvelopesMakeViewControllerBack;
- (void)onWARedEnvelopesMakeViewControllerComplete:(id)arg1;
- (void)onWARedEnvelopesMakeViewControllerError:(id)arg1 errCode:(long long)arg2;
@end
