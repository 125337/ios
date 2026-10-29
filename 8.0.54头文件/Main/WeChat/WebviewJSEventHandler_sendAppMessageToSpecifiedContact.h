@interface WebviewJSEventHandler_sendAppMessageToSpecifiedContact : WebviewJSEventHandlerBase <ShareMessageConfirmLogicHelperDelegate, NSURLConnectionDelegate, PBMessageObserverDelegate>
{
    ShareMessageConfirmLogicHelper * m_jsSendAppMsgHelper; // +0x8
    CMessageWrap * m_wrapMsg; // +0x10
    NSString * m_nsThumbUrl; // +0x18
    NSDictionary * m_dicExtraData; // +0x20
    NSString * m_nsUserName; // +0x28
    NSURLConnection * _m_connecttion; // +0x30
    JSEvent * _m_curEvent; // +0x38
    NSDictionary * _m_curExtraData; // +0x40
    NSMutableData * _m_recData; // +0x48
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)startSendMessage;
- (void)clearCurData;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)getTransIdRequest:(id)arg1 WithAppID:(id)arg2;
- (void)sendAppMessage:(id)arg1 extraData:(id)arg2 imageData:(id)arg3;
- (void)OnWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(unsigned long long)arg2;
- (void)OnSendMessageCancel:(id)arg1;
- (void)dealloc;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)m_wrapMsg;
- (void)setM_wrapMsg:(id)arg1;
- (id)m_nsThumbUrl;
- (void)setM_nsThumbUrl:(id)arg1;
- (id)m_connecttion;
- (void)setM_connecttion:(id)arg1;
- (id)m_curEvent;
- (void)setM_curEvent:(id)arg1;
- (id)m_curExtraData;
- (void)setM_curExtraData:(id)arg1;
- (id)m_recData;
- (void)setM_recData:(id)arg1;
- (void).cxx_destruct;
@end

