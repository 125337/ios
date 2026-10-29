@interface WebviewJSEventHandler_translateVoice : WebviewJSEventHandlerBase <VoiceTransDelegate>
{
    VoiceTransHelper * _transHelper; // +0x8
    NSString * _transResult; // +0x10
    BOOL _isShowProgressTips; // +0x18
}
- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onVoiceTransVoiceID:(id)arg1 transResult:(id)arg2;
- (void)onVoiceTransEnd:(id)arg1 FromCache:(BOOL)arg2;
- (void)onVoiceTransFail:(id)arg1 baseResponse:(id)arg2;
- (void).cxx_destruct;
@end
