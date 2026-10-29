@interface SendAppMessageBaseImpl : MMObject <NSURLConnectionDelegate, ForwardMessageLogicDelegate>
{
    CMessageWrap * m_wrapMsg; // +0x8
    ForwardMessageLogicController * m_forwardMsgLogic; // +0x10
    WebviewJSEventHandlerBase * _eventHandler; // +0x18
    NSString * _variantEventName; // +0x20
    NSURLConnection * _m_connecttion; // +0x28
    JSEvent * _m_curEvent; // +0x30
    NSDictionary * _m_curExtraData; // +0x38
    NSMutableData * _m_recData; // +0x40
    long long _orientation; // +0x48
    WWKMsgForwarder * _weworkMsgForwarder; // +0x50
    id /* block */ _beforeForwardBlock; // +0x58
}
- (id)webviewController;
- (id)mmWebViewController;
- (id)wxBaseWebViewController;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)showCanNotShareEmptyPage;
- (void)clearCurData;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)sendAppMessage:(id)arg1 extraData:(id)arg2 imageData:(id)arg3;
- (BOOL)enableExtraParseUrl;
- (void)getExtInfoFromExtraInfo:(id)arg1 mpInfoModel:(id)arg2 sourceUsername:(id *)arg3 sourceDisplayName:(id *)arg4;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageConfirmCanceled:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (id)buildWebPageFavItemFromEvent:(id)arg1 extraData:(id)arg2;
- (void)jsAdd2MyFav:(id)arg1 extraData:(id)arg2;
- (void)jsAddToWeNote:(id)arg1 extraData:(id)arg2;
- (void)dealloc;
- (void)stopForcedRotationToPortrait;
- (void)reportAdLandingPageShareIfNeededWithToUserName:(id)arg1 shareType:(unsigned int)arg2;
- (id)m_wrapMsg;
- (void)setM_wrapMsg:(id)arg1;
- (id)eventHandler;
- (void)setEventHandler:(id)arg1;
- (id)variantEventName;
- (void)setVariantEventName:(id)arg1;
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
- (id /* block */)beforeForwardBlock;
- (void)setBeforeForwardBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
