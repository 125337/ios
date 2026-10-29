@interface WebviewJSEventHandler_sendGameNameCard : WebviewJSEventHandlerBase <NSURLConnectionDelegate, ForwardMessageLogicDelegate>
{
    CMessageWrap * m_wrapMsg; // +0x8
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x10
    NSURLConnection * _m_connecttion; // +0x18
    JSEvent * _m_curEvent; // +0x20
    NSDictionary * _m_curExtraData; // +0x28
    NSMutableData * _m_recData; // +0x30
    long long _orientation; // +0x38
    WWKMsgForwarder * _weworkMsgForwarder; // +0x40
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)clearCurData;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)sendAppMessage:(id)arg1 extraData:(id)arg2 imageData:(id)arg3;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)dealloc;
- (void)stopForcedRotationToPortrait;
- (id)m_wrapMsg;
- (void)setM_wrapMsg:(id)arg1;
- (id)m_connecttion;
- (void)setM_connecttion:(id)arg1;
- (id)m_curEvent;
- (void)setM_curEvent:(id)arg1;
- (id)m_curExtraData;
- (void)setM_curExtraData:(id)arg1;
- (id)m_recData;
- (void)setM_recData:(id)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (id)weworkMsgForwarder;
- (void)setWeworkMsgForwarder:(id)arg1;
- (void).cxx_destruct;
@end
