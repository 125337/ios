@interface IlinkAppContextService : MMUserService <MMKernelExt, CNetworkStatusExt, PBMessageObserverDelegate, IMsgExt, MMServiceProtocol>
{
    NSString * app_dir_; // +0x8
    AffIlinkKeeperCallback * aff_ilink_callback; // +0x10
    BOOL is_ilink_cloud_session_init_; // +0x18
    shared_ptr<ilink::IlinkContext> ilink_ctx_; // +0x20
    shared_ptr<ilink::CloudSession> cloud_session_; // +0x30
    int ilink_cgi_retry_count_; // +0x40
    long long _selfUin; // +0x48
}
+ (id)iLinkPath;
- (void)sendCloudSessionRequest:(unsigned int)arg1 body:(const void *)arg2 longPolling:(BOOL)arg3 timeout:(unsigned int)arg4;
- (void)sendIlinkAuthRequest:(unsigned int)arg1 body:(const void *)arg2 longPolling:(BOOL)arg3 timeout:(unsigned int)arg4;
- (void)sendRequest:(id)arg1 Retry:(int)arg2;
- (void)IlinkInit;
- (shared_ptr<void>)getCloudSession;
- (void)handleNewXmlMsg:(id)arg1;
- (void)onIPXX:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onAuthOK;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)ReachabilityChange:(unsigned int)arg1;
- (long long)selfUin;
- (void)setSelfUin:(long long)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
