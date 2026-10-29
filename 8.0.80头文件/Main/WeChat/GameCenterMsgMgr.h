@interface GameCenterMsgMgr : MMUserService <IFunctionMsgExt, MMServiceProtocol, IMsgExt, MMImageLoaderObserver>
{
    BOOL shouldClearDb; // +0x8
    BOOL shouldClearNotify; // +0x9
    BOOL _useNewRedpointLogic; // +0xa
    BOOL _findVcVisible; // +0xb
    BOOL _needUpdateRedPointInfo; // +0xc
    BOOL _insideUpdateRedPointInfo; // +0xd
    GameCenterMessageRedPointInfo * _redPointInfo; // +0x10
    GameCenterMsgDb * _db; // +0x18
    GCMRedpointExposureControlModel * _redpointExposureControlModel; // +0x20
    GCRedPointLogicTypeModel * _logicTypeModel; // +0x28
    GameFindEntryRedDotInfo * _findGameEntryRedDotInfo; // +0x30
    GameMessageDBCleaner * _messageDBCleaner; // +0x38
    GameReddotManager * _gameReddotManager; // +0x40
    GameMsgSecurityCheck * _msgSecurityCheck; // +0x48
    NSArray * _hideConfigs; // +0x50
    NSMutableDictionary * _downloadTimeDict; // +0x58
    NSMutableArray * _reExposureDbArray; // +0x60
    NSMutableArray * _allReExposureArray; // +0x68
    NSMutableSet * _redpointUpdateListenerSet; // +0x70
}
- (void)enterForeground;
- (void)onFindEntryVcWillAppear:(id)arg1;
- (void)onFindEntryVcWillDisAppear:(id)arg1;
- (void)onUpdateGameCenterEntrance;
- (void)updateExposureCnt:(id)arg1;
- (void)updatecompleteExposureCnt:(id)arg1;
- (void)checkGameLifeRedPointExit;
- (BOOL)v2HasGameLifeRedPoint;
- (void)clearCurGameLifeRedPoint:(id)arg1;
- (id)reportObjectWithEntry:(id)arg1 msg:(id)arg2 externInfo:(id)arg3;
- (unsigned long long)getGameFinderSpecialReddotExptOptions;
- (id)init;
- (BOOL)checkUseNewRedpointStrategy;
- (void)initRedPointStrategy;
- (void)saveRedPointLogicTypeModel:(id)arg1;
- (void)pushCustomeXmlMsg:(id)arg1;
- (void)runPrefetchTest;
- (unsigned long long)validLastReceiveTime:(unsigned long long)arg1;
- (void)updateGameCenterMessageRedPointInfoIfChangeAndObserved;
- (void)updateGameCenterMessageRedPointInfoIfNeed;
- (void)updateGameCenterMessageRedPointInfoIfChange;
- (void)updateGameCenterMessageRedPointInfoWorker:(unsigned int)arg1 andNotiy:(unsigned int)arg2 andConversation:(unsigned int)arg3 andInterativeModel:(id)arg4 andNotifyModel:(id)arg5;
- (void)setMyGroupUnReadCnt:(unsigned int)arg1 lastGroupUpdateTime:(unsigned long long)arg2;
- (void)notifyReadPointInfoChange;
- (void)onConversationUpdated;
- (void)onReceiveNewGameLifeRedPoint:(id)arg1;
- (void)dealloc;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)handleControlNode:(XmlReaderNode_t *)arg1;
- (void)handleExposureMessageSettingNode:(XmlReaderNode_t *)arg1;
- (void)handleCdnSettingNode:(XmlReaderNode_t *)arg1;
- (void)handleHideConfig:(XmlReaderNode_t *)arg1;
- (void)handleDeleteConfig:(XmlReaderNode_t *)arg1;
- (void)handleReddotSyncNode:(XmlReaderNode_t *)arg1;
- (BOOL)checkHiddenForMsg:(id)arg1;
- (void)onFunctionMsgRevoke:(id)arg1 bussinessId:(unsigned long long)arg2 functionMsgId:(id)arg3;
- (void)handleRevokePushId:(id)arg1;
- (void)handleRevokeMsg:(id)arg1;
- (void)reportDelWith:(int)arg1 msgModel:(id)arg2;
- (BOOL)handleRevokeMsgIdDbModel:(id)arg1 actionStatus:(int)arg2;
- (void)reportDeleteWithMsgId:(id)arg1 pushId:(id)arg2 actionStatus:(int)arg3;
- (BOOL)checkPreRevokeMsgId:(id)arg1;
- (BOOL)checkPreRevokePushId:(id)arg1;
- (BOOL)checkPreRevokeIdWithIdKvKey:(id)arg1 targetId:(id)arg2;
- (void)savePreRevokeMsgId:(id)arg1;
- (void)savePreRevokeMsgWithIdKey:(id)arg1 targetId:(id)arg2;
- (BOOL)checkSupportVersion:(XmlReaderNode_t *)arg1;
- (void)notifyMsgReceived:(id)arg1 RootNode:(XmlReaderNode_t *)arg2;
- (void)checkMsgSecurity:(id)arg1;
- (void)handleReddotMsg:(id)arg1;
- (void)reportMsgVerifyFailed:(id)arg1;
- (BOOL)checkMsgExpired:(id)arg1;
- (void)wePkgMsgReceived:(XmlReaderNode_t *)arg1;
- (void)tryDownloadOrSave:(id)arg1 DownloadTriggerType:(unsigned int)arg2 updateOnly:(BOOL)arg3;
- (void)trySavePkgIdForFutureCheckUpdate:(id)arg1 DownloadTriggerType:(unsigned int)arg2;
- (void)tryCheckUpdateWhenEnterForeground;
- (void)tryCheckUpdateWhenEnterFindFriend;
- (void)tryCheckUpdateWithDownloadTriggerType:(unsigned int)arg1;
- (unsigned int)saveMsg:(id)arg1;
- (BOOL)mergeMsgIfNeed:(id)arg1;
- (BOOL)mergeOriginXmlFromDB:(id)arg1;
- (void)filterUserInfoList:(id)arg1 DbMsg:(id)arg2;
- (BOOL)mergeUserInfo:(id)arg1 DbMsg:(id)arg2 UserJumpInfoDic:(id)arg3;
- (BOOL)mergeJumpInfo:(id)arg1 JumpInfoDic:(id)arg2;
- (BOOL)refreshJumpInfoXmlSection:(id)arg1;
- (BOOL)replaceJumpInfoSection:(id)arg1 JumpInfoSection:(id)arg2;
- (BOOL)appendUserInfoToMsg:(id)arg1 WithXmlSection:(id)arg2;
- (BOOL)isMsgBlocked:(id)arg1 shouldReport:(BOOL)arg2;
- (BOOL)shouldCoverNotify:(id)arg1;
- (void)didChooseCurrentMsg:(id)arg1 reason:(long long)arg2;
- (BOOL)coverNotify:(id)arg1;
- (void)updateLastRedPointDisppearTime;
- (BOOL)checkCanReExposure;
- (id)getMsgWithKey:(id)arg1 checkExpired:(BOOL)arg2;
- (id)getUnexpiredMsgWithKey:(id)arg1;
- (id)getFindFriendEntryNotify;
- (id)getFindFriendMsg;
- (id)getFindFriendMsgWithCheck:(BOOL)arg1;
- (id)getFindFriendMsgNoCheck;
- (id)findFriendGetNotifyContentFromMsg:(id)arg1;
- (void)updateMsgtExposured:(id)arg1;
- (void)asyncCheckNotifyReExposure;
- (void)asyncGetDbExposureArray;
- (id)getReExposureMsgArray;
- (void)asyncPickReExposureMsg;
- (void)handleReExposureMsg:(id)arg1;
- (void)checkNotifiyContentDegrde:(id)arg1 baseMsg:(id)arg2;
- (id)getGameCenterBubble;
- (id)getGameCenterH5FloatLayer;
- (id)getGameCenterBanner;
- (id)getGameCenterMsgCenterRedDot;
- (id)getGameCenterGiftRedDot;
- (unsigned int)getLastMsgKey;
- (id)getLastUnExpiredMsg;
- (BOOL)setMessageReadWithLocalId:(unsigned int)arg1;
- (BOOL)clearFindFriendEntry;
- (BOOL)clearFindFriendEntryWithReason:(long long)arg1;
- (void)recordReddotExitTime:(id)arg1;
- (BOOL)clearBubbleBannerH5FloatLayerResource;
- (void)clearFindEntryAndResource;
- (void)clearFindEntryAndResource:(long long)arg1;
- (BOOL)clearGameCenterBubble:(unsigned int)arg1;
- (BOOL)clearGameCenterH5FloatLayer:(unsigned int)arg1;
- (BOOL)clearGameCenterBanner:(unsigned int)arg1;
- (BOOL)clearGameCenterMsgCenterAllRedDot;
- (BOOL)clearGameCenterGiftRedDot;
- (id)getMsgCenterUnreadList;
- (id)getMsgCenterListWithShowType:(int)arg1 readState:(int)arg2 oldThan:(unsigned int)arg3 maxCount:(unsigned int)arg4;
- (id)getMsgCenterUnReadListWithShowType:(int)arg1;
- (id)getMsgCenterReadListBefore:(unsigned int)arg1;
- (id)msgCenterContentV2FromMsg:(id)arg1;
- (id)getMsgCenterListForJsApi:(int)arg1 lastLocalId:(int)arg2 onlyUnRead:(BOOL)arg3 maxCount:(int)arg4 subMsgType:(int)arg5;
- (BOOL)setMsgCenterAllRead;
- (BOOL)setMsgCenterAllReadWithShowType:(unsigned int)arg1;
- (BOOL)setMsgReadWithLocalIdList:(id)arg1;
- (BOOL)deleteAllMsg;
- (BOOL)deleteMsgByLocalId:(int)arg1;
- (BOOL)deleteMsgBeforeTimeStamp:(unsigned int)arg1;
- (BOOL)deleteAllMsgByShowType:(unsigned int)arg1;
- (BOOL)hideAllMsgByShowType:(unsigned int)arg1;
- (BOOL)unhideAllMsgByShowType:(unsigned int)arg1;
- (BOOL)deleteMsgByLocalIdList:(id)arg1;
- (BOOL)cleanMsgDB;
- (BOOL)underWeakNetStrategy:(id)arg1;
- (BOOL)canClearMsgNotify:(unsigned int)arg1;
- (id)getNotifyContentFromMsg:(id)arg1;
- (id)getNotifyWithKey:(id)arg1;
- (BOOL)waitingForWePkgDownload:(id)arg1;
- (id)getMsgWithKey:(id)arg1;
- (id)getMsgWithSvrMsgId:(id)arg1;
- (id)getMsgWithLocalId:(unsigned int)arg1;
- (unsigned int)getKeyAtPosition:(id)arg1;
- (BOOL)clearKeyAtPosition:(id)arg1;
- (BOOL)setKeyAtPosition:(id)arg1 Value:(unsigned int)arg2;
- (BOOL)isForbiddenForBasicType:(unsigned int)arg1;
- (void)setForbidden:(BOOL)arg1 forBasicType:(unsigned int)arg2;
- (id)getAllForbiddenTypes;
- (BOOL)setDownloadTime:(unsigned int)arg1 DownloadTime:(int)arg2;
- (int)getDownloadTime:(unsigned int)arg1;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (BOOL)urlSameWithFindFriendEntry:(id)arg1 DownloadTime:(int *)arg2 LocalId:(unsigned int *)arg3;
- (BOOL)downloadEntryIconIfNeed:(id)arg1;
- (void)reportImageDecodeFailForUrl:(id)arg1 imageData:(id)arg2;
- (BOOL)isEntryIconDownloading:(id)arg1;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (id)getMsgDbModelByLocalId:(unsigned int)arg1;
- (id)getMsgDbModelBySvrMsgId:(id)arg1;
- (id)getMsgDbModelList;
- (void)clearAllRedDot;
- (void)clearMsgList;
- (BOOL)clearMsgDb:(id)arg1;
- (void)statMsgReceived:(id)arg1 hasRevoke:(BOOL)arg2 clickedMsgWithSameContentId:(id)arg3;
- (unsigned int)receiveActionStatusForMsg:(id)arg1 hasRevoke:(BOOL)arg2 clickedMsgWithSameContentId:(id)arg3;
- (void)reportCoverNotify:(id)arg1 OldMsg:(id)arg2 NewCoverOld:(BOOL)arg3;
- (void)reportMsgBeingSilence:(id)arg1;
- (void)onWekgOperateSuccess:(id)arg1;
- (void)wepkgEndWith:(id)arg1 bSuccess:(BOOL)arg2;
- (unsigned int)getMsgUnreadCoutWithShowType:(int)arg1;
- (id)getLastMessageWithShowType:(int)arg1;
- (BOOL)hasHistoryGameLifeMsg;
- (void)deleteHistroyGameLifeMsg;
- (unsigned int)getUnReadHistoryGameLifeMsgCount;
- (void)updateMsgWithReportType;
- (void)registerRedPointUpdateListener:(id)arg1;
- (void)unRegisterRedPointUpdateListener:(id)arg1;
- (id)redPointInfo;
- (void)setRedPointInfo:(id)arg1;
- (id)db;
- (void)setDb:(id)arg1;
- (id)redpointExposureControlModel;
- (void)setRedpointExposureControlModel:(id)arg1;
- (id)logicTypeModel;
- (void)setLogicTypeModel:(id)arg1;
- (BOOL)useNewRedpointLogic;
- (void)setUseNewRedpointLogic:(BOOL)arg1;
- (BOOL)findVcVisible;
- (void)setFindVcVisible:(BOOL)arg1;
- (id)findGameEntryRedDotInfo;
- (void)setFindGameEntryRedDotInfo:(id)arg1;
- (id)messageDBCleaner;
- (void)setMessageDBCleaner:(id)arg1;
- (id)gameReddotManager;
- (void)setGameReddotManager:(id)arg1;
- (id)msgSecurityCheck;
- (void)setMsgSecurityCheck:(id)arg1;
- (id)hideConfigs;
- (void)setHideConfigs:(id)arg1;
- (id)downloadTimeDict;
- (void)setDownloadTimeDict:(id)arg1;
- (id)reExposureDbArray;
- (void)setReExposureDbArray:(id)arg1;
- (id)allReExposureArray;
- (void)setAllReExposureArray:(id)arg1;
- (id)redpointUpdateListenerSet;
- (void)setRedpointUpdateListenerSet:(id)arg1;
- (BOOL)needUpdateRedPointInfo;
- (void)setNeedUpdateRedPointInfo:(BOOL)arg1;
- (BOOL)insideUpdateRedPointInfo;
- (void)setInsideUpdateRedPointInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end
