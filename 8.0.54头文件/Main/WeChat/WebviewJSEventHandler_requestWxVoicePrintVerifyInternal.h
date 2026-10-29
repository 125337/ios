@interface WebviewJSEventHandler_requestWxVoicePrintVerifyInternal : WebviewJSEventHandlerBase
{
    JSEvent * _cbEvent; // +0x8
    VoicePrintVerifyLogic * _voicePrintVerifyLogic; // +0x10
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)cbEvent;
- (void)setCbEvent:(id)arg1;
- (id)voicePrintVerifyLogic;
- (void)setVoicePrintVerifyLogic:(id)arg1;
- (void).cxx_destruct;
@end

