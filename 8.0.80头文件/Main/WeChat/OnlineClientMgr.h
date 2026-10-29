@interface OnlineClientMgr : MMUserService <IMMLanguageMgrExt, PBMessageObserverDelegate, MMKernelExt, INewSyncExt, IMsgExt, MMServiceProtocol>
{
    NSNumber * m_isRunningAsBakDevice; // +0x8
    BOOL m_hasGetChatList; // +0x10
    BOOL m_needHeartBeat; // +0x11
    BOOL m_isLoginWebWX; // +0x12
    BOOL m_isGettingOnlineInfo; // +0x13
    BOOL m_shouldIgnorePushOpen; // +0x14
    unsigned int m_lastLogoutTime; // +0x18
    unsigned int m_curOnlineVersion; // +0x1c
    unsigned int m_iconType; // +0x20
    NSString * m_summaryXml; // +0x28
    NSMutableArray * m_arrOnlineInfo; // +0x30
    NSMutableArray * m_lastOnlineInfo; // +0x38
    NSMutableSet * m_markingMsgRead; // +0x40
    NSMutableSet * m_pendingMarkMsgRead; // +0x48
    unsigned long long m_lastReadItemCreateTime; // +0x50
    BOOL m_isNeedGetOnlineInfo; // +0x58
    NSNumber * m_nsLastOnelineInfoFlag; // +0x60
    MMTimer * m_autoLoginToastTimer; // +0x68
    MMOnlineSilentDownloadLogicController * _silentDownloadLogic; // +0x70
}
- (id)init;
- (void)dealloc;
- (unsigned int)genRandomClienMsgId;
- (void)setAuthFlag:(unsigned long long)arg1;
- (BOOL)isLoginWebWX;
- (void)logoutWeb:(BOOL)arg1 onlineInfo:(id)arg2;
- (BOOL)isNeedShowPush;
- (void)setIsNeedShowPush:(BOOL)arg1;
- (BOOL)isRunningAsBakDevice;
- (void)reloadBanner;
- (void)SendStatusNotifyTo:(id)arg1 code:(int)arg2;
- (void)SendStatusNotifyTo:(id)arg1 code:(int)arg2 lastMsg:(id)arg3;
- (void)SendStatusNotifyTo:(id)arg1 code:(int)arg2 function:(id)arg3;
- (void)SendStatusNotifyTo:(id)arg1 code:(int)arg2 function:(id)arg3 alwaysSend:(BOOL)arg4;
- (void)SendBypStatusNotifyTo:(id)arg1 sessionId:(id)arg2 code:(int)arg3 function:(id)arg4;
- (void)EnterChat:(id)arg1;
- (void)ExitChat:(id)arg1;
- (void)MarkChatUnread:(id)arg1;
- (void)MarkChatRead:(id)arg1;
- (void)markChatBoxRead;
- (void)setHideSession:(id)arg1;
- (void)onDeleteSession:(id)arg1;
- (void)onDeleteSession:(id)arg1 lastMsg:(id)arg2;
- (void)onClearSession:(id)arg1;
- (void)onDeleteMessages:(id)arg1 list:(id)arg2;
- (void)onDeleteAllSessions;
- (void)onMarkMsgReadReturn:(id)arg1 withResponse:(id)arg2;
- (void)enterWCMsgListWithLastItemCreateTime:(unsigned long long)arg1;
- (void)handleEnterWCMsgList:(id)arg1;
- (void)markTimelineListReadWithLastItemId:(id)arg1 itemCreateTime:(unsigned long long)arg2;
- (void)handleMarkTimelineListRead:(id)arg1;
- (void)notifyShareCardMessageStatusWithMessage:(id)arg1;
- (void)notifyScheduleChange:(id)arg1 action:(long long)arg2;
- (void)GetOnlineInfoFromServer;
- (void)GetOnlineInfoFromServerWithNewOnlineVersion:(unsigned int)arg1;
- (BOOL)createGetOnlineInfoEventWithNewOnlineVersion:(unsigned int)arg1;
- (void)onGetOnlineInfoResponse:(id)arg1 newOnlineVersion:(unsigned int)arg2;
- (void)checkExtDeviceOnlineStatusWithOnlineList:(id)arg1 flag:(unsigned int)arg2;
- (void)checkShouldHideOnelineInfoBarWithFlag:(unsigned int)arg1;
- (void)checkShouldAddFileHelperToTopWithFlag:(unsigned int)arg1;
- (void)checkShouldIgnorePushOpenWithFlag:(unsigned int)arg1;
- (void)statusNotifyGetChatListRequest;
- (unsigned int)GetOnlineIconType;
- (id)GetOnlineSummaryForKey:(id)arg1;
- (id)GetOnlineTitleForMuteDevice;
- (id)GetExtDeviceOnlineInfos;
- (void)UpdateExtDeviceOnlineInfos;
- (void)getAllChat;
- (void)onNewSyncGetAllChat;
- (void)onNewSyncHideSession:(id)arg1 createTime:(unsigned int)arg2;
- (void)onNewSyncMarkUnread:(id)arg1;
- (void)onNewSyncMarkRead:(id)arg1 lastMsgTime:(unsigned int)arg2;
- (void)onNewSyncOnlineStatus:(unsigned int)arg1 withVersion:(unsigned int)arg2;
- (void)updateLoginStatus:(BOOL)arg1;
- (void)onNewSyncChatListSession:(id)arg1;
- (void)onNewSyncEnterFunction:(id)arg1;
- (void)onNewSyncQuitFunction:(id)arg1;
- (void)onNewSyncMarkFunction:(id)arg1;
- (void)onNewSyncNotifyUnlock:(id)arg1;
- (void)onNewSyncSendCommand:(id)arg1;
- (void)onGetSendCommandFunction:(id)arg1;
- (void)onGetNotifyUnlockFunction:(id)arg1;
- (void)onGetMarkFunction:(id)arg1;
- (void)onGetQuitFunction:(id)arg1;
- (void)onGetEnterFunction:(id)arg1;
- (void)onGetChatListResponsed:(id)arg1;
- (void)onNewSyncQuitSession:(id)arg1 createTime:(unsigned int)arg2;
- (void)onNewSyncEnterSession:(id)arg1 createTime:(unsigned int)arg2;
- (BOOL)isNeedSyncChatname:(id)arg1;
- (void)onNewSyncShareCardMessageStatus:(id)arg1;
- (void)onNewSyncScheduleChange:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)shoudlSendActiveCGI;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)showDeviceAutoLoginToast:(id)arg1;
- (void)onKickQuit;
- (void)onLanguageChange;
- (void)markPatternLockUpdate;
- (void)handleMarkPatternLockUpdate:(id)arg1;
- (void)handleEnterEnterpriseChat:(id)arg1;
- (void)handleQuitEnterpriseChat:(id)arg1;
- (void)handleMarkEnterpriseChatRead:(id)arg1;
- (void)markVoiceMsgAsReadWithMessage:(id)arg1;
- (id)GetBannerIcon;
- (void)handleSilentDownloadFileList:(id)arg1;
- (id)silentDownloadLogic;
- (void)setSilentDownloadLogic:(id)arg1;
- (void).cxx_destruct;
@end
