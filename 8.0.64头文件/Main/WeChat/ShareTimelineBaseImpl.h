@interface ShareTimelineBaseImpl : MMObject <NSURLConnectionDelegate, WCCommitViewResultDelegate>
{
    WebviewJSEventHandlerBase * _eventHandler; // +0x8
    NSString * _variantEventName; // +0x10
    id /* block */ _beforeUploadBlock; // +0x18
    NSURLConnection * _m_connecttion; // +0x20
    JSEvent * _m_curEvent; // +0x28
    NSMutableData * _m_recData; // +0x30
    NSString * _publishedId; // +0x38
    NSDictionary * _extraData; // +0x40
}
- (id)webviewController;
- (id)mmWebViewController;
- (id)wxBaseWebViewController;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)showCanNotShareEmptyPage;
- (void)clearCurData;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)shareTimelineWithEvent:(id)arg1 imageData:(id)arg2;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)forwardViewController:(id)arg1 didFinishForwardingWithDataItem:(id)arg2;
- (void)forwardViewControllerDidCancel:(id)arg1;
- (void)dealloc;
- (void)reportAdLandingPageShareIfNeeded;
- (id)eventHandler;
- (void)setEventHandler:(id)arg1;
- (id)variantEventName;
- (void)setVariantEventName:(id)arg1;
- (id /* block */)beforeUploadBlock;
- (void)setBeforeUploadBlock:(id /* block */)arg1;
- (id)m_connecttion;
- (void)setM_connecttion:(id)arg1;
- (id)m_curEvent;
- (void)setM_curEvent:(id)arg1;
- (id)m_recData;
- (void)setM_recData:(id)arg1;
- (id)publishedId;
- (void)setPublishedId:(id)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (void).cxx_destruct;
@end
