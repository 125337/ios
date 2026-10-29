@interface SendPatMgr : MMUserService <IMsgExt, IMsgRevokeExt, MMServiceProtocol>
{
    BOOL _needRevokeLastPat; // +0x8
    NSMutableDictionary * _userNameToPatTimeMap; // +0x10
    SendPatWrap * _lastSendPatWrap; // +0x18
    OrderedDictionary * _availableSendPatWraps; // +0x20
    NSMutableDictionary * _serverIdToReceivePatWrapMap; // +0x28
    RevokePatReportObject * _revokePatReportObject; // +0x30
    SendPatToastViewController * _toastViewController; // +0x38
    NSMutableSet * _onGoingTimerSet; // +0x40
}
+ (BOOL)isValidContact:(id)arg1;
+ (BOOL)isValidChatContact:(id)arg1;
+ (id)filePathForServerIdToReceivePatWrapMap;
+ (id)decompoundMessageWrapForPatMessage:(id)arg1;
+ (id)compoundMessageWrapsForPatMessage:(id)arg1;
+ (id)patMessageServerIdSetInChat:(id)arg1;
+ (void)fixMessageWrapForPatMessage:(id)arg1;
+ (BOOL)isMessageWrapPatMessage:(id)arg1;
+ (id)generatePatMessageFromWrap:(id)arg1;
+ (void)updateMessageWrap:(id)arg1 fromWrap:(id)arg2;
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)canSendPat;
- (BOOL)canRevokePat;
- (unsigned long long)getPatMessageShowStyle;
- (BOOL)sendPatWithMessageWrap:(id)arg1;
- (BOOL)sendPatToUser:(id)arg1 scene:(unsigned long long)arg2;
- (BOOL)sendPatToUser:(id)arg1 inGroup:(id)arg2 scene:(unsigned long long)arg3;
- (BOOL)sendPat:(id)arg1;
- (id)getLastPatWrap;
- (void)revokePat:(id)arg1 fromChat:(id)arg2 patMessage:(id)arg3 type:(unsigned long long)arg4;
- (void)cancelRevokePat:(id)arg1 fromChat:(id)arg2 type:(unsigned long long)arg3;
- (void)beforeSendPat;
- (unsigned int)patSendDelayInterval;
- (void)delaySendPat:(id)arg1;
- (void)handleSendPat:(id)arg1;
- (BOOL)checkAndShowRevokeGuideForSendPat:(id)arg1;
- (void)modifyPatSuffix;
- (void)updateModifyPatSuffixTimeAndCount;
- (BOOL)needShowChangeSuffixRemind;
- (unsigned int)patSendDoubleTapRevokeInterval;
- (unsigned int)patSendLongPressRevokeInterval;
- (id)sendPatForPat:(id)arg1 fromChat:(id)arg2;
- (BOOL)needRevokeLastPatForSendPat:(id)arg1;
- (void)revokeSendPat:(id)arg1;
- (void)fastRevokeSendPat:(id)arg1;
- (void)fastRevokePat:(id)arg1 fromChat:(id)arg2 patMessage:(id)arg3;
- (void)normalRevokeSendPat:(id)arg1;
- (void)normalRevokePat:(id)arg1 fromChat:(id)arg2 patMessage:(id)arg3;
- (BOOL)normalRevokePatMessageForRevokeOnly:(id)arg1 fromChat:(id)arg2;
- (void)onRevokeSendPat:(id)arg1 isSuccess:(BOOL)arg2 isCancelSending:(BOOL)arg3;
- (void)onRevokePat:(id)arg1 fromChat:(id)arg2 isSuccess:(BOOL)arg3;
- (void)callRevokePatExtension:(id)arg1 fromChat:(id)arg2 isSuccess:(BOOL)arg3;
- (unsigned int)receivePatWrapCacheInterval;
- (void)loadServerIdToReceivePatWrapMap;
- (void)saveServerIdToReceivePatWrapMap;
- (BOOL)isServerIdCorrespondToReceivePat:(long long)arg1;
- (BOOL)hitFrequencyLimitForUserName:(id)arg1;
- (void)updatePatTimeForUsername:(id)arg1;
- (unsigned int)getMinFrequencyLimitInterval;
- (void)showToastForPat:(id)arg1 headImageView:(id)arg2 scene:(unsigned long long)arg3 andCompletionBlock:(id /* block */)arg4;
- (id)messageWrapForPatMessageWithChatUserName:(id)arg1 andMessageLocalID:(unsigned int)arg2;
- (unsigned int)addPatWrap:(id)arg1 toChat:(id)arg2 newXMLMessageWrap:(id)arg3 index:(unsigned long long *)arg4;
- (BOOL)deletePatWrap:(id)arg1 inMessageWrap:(id)arg2;
- (id)getLastAppPatMessageWrapForChat:(id)arg1;
- (id)getLastAppPatMessageWrapForChat:(id)arg1 createTime:(unsigned int)arg2;
- (id)createSendPatTempleteFromPattedUserName:(id)arg1 withSuffix:(id)arg2 andVersion:(unsigned long long)arg3;
- (unsigned long long)maxNumberOfContinousPats;
- (unsigned long long)minNumberOfContinousPatsToFold;
- (unsigned long long)numberOfPatsShowAfterFold;
- (id)patSuffixWrapForUserName:(id)arg1;
- (void)updatePatSuffixWrap:(id)arg1 forUserName:(id)arg2;
- (void)updatePatSuffix:(id)arg1 serverId:(long long)arg2 forSendPatWrap:(id)arg3;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (id)userNameToPatTimeMap;
- (void)setUserNameToPatTimeMap:(id)arg1;
- (BOOL)needRevokeLastPat;
- (void)setNeedRevokeLastPat:(BOOL)arg1;
- (id)lastSendPatWrap;
- (void)setLastSendPatWrap:(id)arg1;
- (id)availableSendPatWraps;
- (void)setAvailableSendPatWraps:(id)arg1;
- (id)serverIdToReceivePatWrapMap;
- (void)setServerIdToReceivePatWrapMap:(id)arg1;
- (id)revokePatReportObject;
- (void)setRevokePatReportObject:(id)arg1;
- (id)toastViewController;
- (void)setToastViewController:(id)arg1;
- (id)onGoingTimerSet;
- (void)setOnGoingTimerSet:(id)arg1;
- (void).cxx_destruct;
@end

