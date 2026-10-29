@interface WebviewJSEventHandler_timelineCheckIn : WebviewJSEventHandlerBase <NSURLConnectionDelegate, WCCommitViewResultDelegate>
{
    NSURLConnection * _m_connecttion; // +0x8
    JSEvent * _m_curEvent; // +0x10
    NSMutableData * _m_recData; // +0x18
}
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)clearCurData;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)shareTimelineWithEvent:(id)arg1 imageData:(id)arg2;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)dealloc;
- (id)m_connecttion;
- (void)setM_connecttion:(id)arg1;
- (id)m_curEvent;
- (void)setM_curEvent:(id)arg1;
- (id)m_recData;
- (void)setM_recData:(id)arg1;
- (void).cxx_destruct;
@end
