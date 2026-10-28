@interface MMShareExtMgr : MMUserService <MMKernelExt, IMMNewSessionMgrExt, ICdnComMgrExt, PBMessageObserverDelegate, IMsgExt, ForwardMessageLogicDelegate, INetworkStatusMgrExt, MMServiceProtocol>
{
    ForwardMessageLogicController * m_forwardLogic; // +0x8
    BOOL _sessionDidChanged; // +0x10
    BOOL _isMsgFailChecking; // +0x11
    BOOL _didHandleShareExtEventAfterActive; // +0x12
    BOOL _isRefreshingSessionKey; // +0x13
    MMTimer * _msgFailCkeckTimer; // +0x18
    NSMutableDictionary * _msgClientIdDict; // +0x20
    NSMutableSet * _headImgHashUsernameSet; // +0x28
    NSObject<OS_dispatch_queue> * _sessionRefreshQueue; // +0x30
}
+ (void)showActivityViewControllerWithActivityItems:(id)arg1 excludedActivityTypes:(id)arg2 fromViewController:(id)arg3;
+ (void)showActivityViewControllerWithActivityItems:(id)arg1 excludedActivityTypes:(id)arg2 fromViewController:(id)arg3 sourceRect:(CGRect)arg4;
+ (void)showActivityViewControllerWithActivityItems:(id)arg1 fromViewController:(id)arg2 completion:(id /* block */)arg3;
+ (void)showActivityViewControllerWithActivityItems:(id)arg1 excludedActivityTypes:(id)arg2 fromViewController:(id)arg3 sourceRect:(CGRect)arg4 completion:(id /* block */)arg5;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onAuthOK;
- (void)saveShareExtUserData;
- (void)onPreQuit;
- (void)refershExtensionKey;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnUpdatedCdnDnsInfo:(id)arg1 snsCdnInfo:(id)arg2 appCdnInfo:(id)arg3;
- (BOOL)isSupportExtension;
- (void)refreshServerIPForExtension;
- (void)onNeedReload;
- (void)onDeleteSession:(unsigned int)arg1 withUser:(id)arg2;
- (id)GetSessionRefreshQueue;
- (void)refreshShareSessionData;
- (void)refreshShareSessionIfNeed;
- (id)getRecentShareSessionWithSessionList:(id)arg1;
- (id)genMsgByTransmitImageData:(id)arg1;
- (id)genMsgByTransmitUrlData:(id)arg1;
- (id)genMsgByTransmitFileData:(id)arg1;
- (id)genMsgByTransmitVideoData:(id)arg1;
- (void)shareMessageToFriend:(long long)arg1 scene:(int)arg2;
- (BOOL)needRefreshExtraShareSession;
- (void)refreshExtraSessionListData;
- (id)getUserNamesOnContactsListMaxCount:(unsigned int)arg1;
- (void)handleShareExtEventAfterServiceActive;
- (void)updateShareExtKeyAfterServiceActive;
- (void)handleShareExtTimelineFailRequestAfterAppActive;
- (void)handleShareExtMessageFailRequestAfterServiceActive;
- (void)removeMessageMetaDataWithSessionID:(id)arg1 withTaskID:(unsigned long long)arg2;
- (void)genMsgFailClientIdDict;
- (void)onMsgFailCheckTimeout;
- (void)removeImageMsgID:(id)arg1;
- (void)removeVideoMsgID:(id)arg1;
- (void)removeAppMsgID:(id)arg1;
- (BOOL)hasFailMessageTask;
- (void)addImageMsgClientID:(id)arg1;
- (void)addVideoMsgClientID:(id)arg1;
- (void)addAppmsgClientID:(id)arg1;
- (void)handleTimelineUploadTaskWithURLSessionID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)handleMessageUploadTaskWithURLSessionID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reportSendTimelineFailIdKeyWithStatuscode:(long long)arg1;
- (void)reportSendMsgFailIdKeyWithStatuscode:(long long)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleImageMsgNewXml:(id)arg1;
- (void)handleVideoMsgNewXml:(id)arg1;
- (void)handleAppMsgNewXml:(id)arg1;
- (void)handleImageMsgSendStatus:(id)arg1;
- (void)handleImageMsgSendStatus:(BOOL)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (BOOL)saveImageMsgImg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)saveImageMsgThumb:(id)arg1 MsgWrap:(id)arg2;
- (void)handleVideoMsgSendStatus:(id)arg1;
- (void)handleVideoMsgSendStatus:(BOOL)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (void)saveVideoMsgFileData:(id)arg1 videoInfo:(id)arg2;
- (void)handleAppMsgSendStatus:(id)arg1;
- (void)handleAppMsgSendStatus:(BOOL)arg1 withMsgClientID:(id)arg2 withMsgSvrID:(id)arg3;
- (void)handleShareExtFavRequestAfterAppActive;
- (void)handleShareExtFavImageUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavUrlUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavVideoUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtFavFileUploadRequestWithTaskFiles:(id)arg1;
- (void)handleShareExtIdKeyReportAfterAppActive;
- (void)handleShareExtKVReportAfterAppActive;
- (unsigned long long)clearShareExtResourceInternal;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onNetworkStatusChange:(unsigned int)arg1;
- (BOOL)sessionDidChanged;
- (void)setSessionDidChanged:(BOOL)arg1;
- (id)msgFailCkeckTimer;
- (void)setMsgFailCkeckTimer:(id)arg1;
- (BOOL)isMsgFailChecking;
- (void)setIsMsgFailChecking:(BOOL)arg1;
- (id)msgClientIdDict;
- (void)setMsgClientIdDict:(id)arg1;
- (BOOL)didHandleShareExtEventAfterActive;
- (void)setDidHandleShareExtEventAfterActive:(BOOL)arg1;
- (BOOL)isRefreshingSessionKey;
- (void)setIsRefreshingSessionKey:(BOOL)arg1;
- (id)headImgHashUsernameSet;
- (void)setHeadImgHashUsernameSet:(id)arg1;
- (id)sessionRefreshQueue;
- (void)setSessionRefreshQueue:(id)arg1;
- (void).cxx_destruct;
@end
