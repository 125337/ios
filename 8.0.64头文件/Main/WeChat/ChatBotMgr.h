@interface ChatBotMgr : MMUserService <CLLocationManagerDelegate, IMinimizeTaskDelegateInterface, MMServiceProtocol, PBMessageObserverDelegate, IMsgExt>
{
    BOOL _bGettingLocation; // +0x8
    BOOL _enableAsstChatBotVoIPCache; // +0x9
    BOOL _enableNormalChatBotVoIPCache; // +0xa
    NSMutableSet * _clickTaskIdSet; // +0x10
    MMLocatingCoordinateLogic * _locationLogic; // +0x18
    NSString * _curLocationCallId; // +0x20
    NSData * _curLocationContext; // +0x28
}
+ (void)setUserDataJsonString:(id)arg1;
+ (id)getUserDataJsonString;
+ (void)removeUserDataJsonString;
+ (void)setSuccessAuthFor:(id)arg1;
+ (BOOL)getIsAuthedFor:(id)arg1;
+ (id)getMemoryKV;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)checkChatBotResUdr;
- (BOOL)enableChatBotVoIP;
- (BOOL)enableAsstChatBotVoIP;
- (id)getMainFrameChatBotVoIPEntryUsername;
- (BOOL)enableChatBotMultitalk;
- (BOOL)enableChatBotShowOpenIMInfo:(id)arg1;
- (void)dealloc;
- (void)applicationWillEnterForeground;
- (BOOL)enableForUserName:(id)arg1;
- (void)updateChatBotFromServer;
- (id)tryGetChatBotContact:(id)arg1;
- (id)tryGetChatBotContact:(id)arg1 isFake:(BOOL *)arg2;
- (void)showChatBotQuickReply;
- (void)showChatBotQuickReplyWithUserName:(id)arg1;
- (void)showChatBotQuickReplyWith:(id)arg1 userName:(id)arg2;
- (void)sendChatBotCommandForCmd:(int)arg1 toUserName:(id)arg2;
- (void)sendChatBotCommandForCmd:(int)arg1 toUserName:(id)arg2 loginInfo:(id)arg3 posInfo:(id)arg4;
- (void)locationSettingLogic;
- (void)getLocationAndAuthorizationSingle:(id)arg1 retryTime:(int)arg2 isFirstReq:(BOOL)arg3 callId:(id)arg4 context:(id)arg5;
- (void)getLocationAndAuthorization:(id)arg1 posTitle:(id)arg2 showSysTips:(BOOL)arg3 retryTime:(int)arg4;
- (void)sendGetIlinkAuth:(id)arg1 username:(id)arg2 title:(id)arg3 posTitle:(id)arg4 needPos:(BOOL)arg5 userAuthed:(BOOL)arg6;
- (void)sendGetIlinkAuth:(id)arg1 username:(id)arg2 title:(id)arg3 userAuthed:(BOOL)arg4 location:(CLLocationCoordinate2D)arg5;
- (void)handleSendChatBotCommandResp:(id)arg1 Event:(unsigned int)arg2;
- (id)getAgreementIdListForUserName:(id)arg1;
- (id)getSignedAgreementInfo;
- (BOOL)hasSignedAllAgreementForUserName:(id)arg1;
- (unsigned int)getSignedServiceAgreementVersion;
- (unsigned int)getSignedPrivacyAgreementVersion;
- (unsigned int)getSignedAgreementVersionWithId:(unsigned int)arg1;
- (void)updateSignedAgreementInfo:(id)arg1 agree:(BOOL)arg2;
- (void)handleModServiceAgreementResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleGetIlinkAuthInfoForAIAgentResp:(id)arg1 Event:(unsigned int)arg2;
- (id)getExternalInfoForUsername:(id)arg1;
- (id)getAgreementInfosForUsername:(id)arg1;
- (id)getServiceAgreementUrlForUsername:(id)arg1;
- (id)getPrivacyAgreementUrlForUsername:(id)arg1;
- (id)bizMenuInfoForUsername:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onLogCdpDownWithSessionId:(id)arg1 cmdId:(id)arg2 cmdTaskId:(id)arg3 cmdMethod:(id)arg4;
- (void)onLogCdpUpWithSessionId:(id)arg1 cmdId:(id)arg2 cmdTaskId:(id)arg3 cmdMethod:(id)arg4 retCode:(int)arg5;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)uploadFinderVideoData:(id)arg1 minimizeTaskData:(id)arg2 position:(double)arg3;
- (void)uploadWebPageMinimizeTaskData:(id)arg1 preloadPageUrl:(id)arg2;
- (void)uploadMessageData:(id)arg1 minimizeTaskData:(id)arg2;
- (void)tryAddMsgToStar:(id)arg1 nickName:(id)arg2 userName:(id)arg3;
- (id)filterMsgTaskDataInSwitchClose:(id)arg1;
- (id)clickTaskIdSet;
- (void)setClickTaskIdSet:(id)arg1;
- (id)locationLogic;
- (void)setLocationLogic:(id)arg1;
- (BOOL)bGettingLocation;
- (void)setBGettingLocation:(BOOL)arg1;
- (id)curLocationCallId;
- (void)setCurLocationCallId:(id)arg1;
- (id)curLocationContext;
- (void)setCurLocationContext:(id)arg1;
- (BOOL)enableAsstChatBotVoIPCache;
- (void)setEnableAsstChatBotVoIPCache:(BOOL)arg1;
- (BOOL)enableNormalChatBotVoIPCache;
- (void)setEnableNormalChatBotVoIPCache:(BOOL)arg1;
- (void).cxx_destruct;
@end
