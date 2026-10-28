@interface LiteAppJsApiShareToTimeline : LiteAppJsApi <NSURLConnectionDelegate, WCCommitViewResultDelegate>
{
    NSURLConnection * _m_connection; // +0x20
    NSMutableData * _m_recData; // +0x28
    NSDictionary * _m_extraData; // +0x30
}
- (id)init;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)clearCurData;
- (void)showCanNotShareEmptyPage;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)shardTimeline:(id)arg1 imageData:(id)arg2;
- (void)dealloc;
- (id)m_connection;
- (void)setM_connection:(id)arg1;
- (id)m_recData;
- (void)setM_recData:(id)arg1;
- (id)m_extraData;
- (void)setM_extraData:(id)arg1;
- (void).cxx_destruct;
@end
