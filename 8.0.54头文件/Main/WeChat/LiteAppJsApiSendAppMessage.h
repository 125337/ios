@interface LiteAppJsApiSendAppMessage : LiteAppJsApi <NSURLConnectionDelegate, ForwardMessageLogicDelegate>
{
    CMessageWrap * m_wrapMsg; // +0x20
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x28
    NSURLConnection * _m_connecttion; // +0x30
    NSDictionary * _m_curExtraData; // +0x38
    NSMutableData * _m_recData; // +0x40
    long long _orientation; // +0x48
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)clearCurData;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)sendAppMessage:(id)arg1 imageData:(id)arg2;
- (void)sendMessage:(id)arg1 extraData:(id)arg2;
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
- (id)m_curExtraData;
- (void)setM_curExtraData:(id)arg1;
- (id)m_recData;
- (void)setM_recData:(id)arg1;
- (long long)orientation;
- (void)setOrientation:(long long)arg1;
- (void).cxx_destruct;
@end

