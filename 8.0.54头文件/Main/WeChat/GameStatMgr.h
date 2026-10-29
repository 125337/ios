@interface GameStatMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    unsigned int _networkType; // +0x8
    NSString * _UUID; // +0x10
    NSMutableDictionary * _gameLaunchTime; // +0x18
    NSMutableDictionary * _gameDescSDK; // +0x20
    BOOL _appInfoExtendLoaded; // +0x28
    NSMutableDictionary * _dictScene2LayerID; // +0x30
}
+ (id)genExternInfoWithNoticeID:(id)arg1;
+ (id)genExternInfoWithNoticeID:(id)arg1 withNew:(BOOL)arg2 sourceScene:(int)arg3;
- (id)init;
- (void)dealloc;
- (void)initScene2LayerID;
- (void)startStatAppInfoExtend;
- (void)endStatAppInfoExtend;
- (void)statShowTimeLineMessage:(id)arg1;
- (void)statShowConversation:(id)arg1;
- (void)statShowInAD:(id)arg1 index:(unsigned int)arg2;
- (void)statClickInConversation:(id)arg1;
- (void)statClickInConversation:(id)arg1 OpType:(int)arg2 ExternInfo:(id)arg3;
- (void)statClickTimeLineMessage:(id)arg1 isSource:(BOOL)arg2;
- (void)statClickTimeLineTail:(id)arg1 opType:(int)arg2 ExternInfo:(id)arg3 SceneType:(int)arg4;
- (void)statTimeLinePlaySight:(id)arg1 opType:(int)arg2 ExternInfo:(id)arg3;
- (void)statLoadMoreGameMsgs;
- (void)statRefuseMsgInConversation:(id)arg1 isReceived:(BOOL)arg2;
- (void)statRefuseMsgInGameSettingView:(id)arg1 isReceived:(BOOL)arg2;
- (void)statDeleteMsgInConversation:(id)arg1;
- (void)statGameSettingDetailView:(id)arg1 isReceived:(BOOL)arg2;
- (void)statGameDetailView:(id)arg1 sourceScene:(int)arg2;
- (void)statGameCenterClickSimple:(id)arg1 scenc:(int)arg2 opType:(int)arg3;
- (void)statGameCenterClickSimpleWithExternField:(id)arg1 scenc:(int)arg2 opType:(int)arg3 noticeID:(id)arg4 withNew:(BOOL)arg5 sourceScene:(int)arg6;
- (void)statGameCenterClickSimpleWithExternField:(id)arg1 scenc:(int)arg2 opType:(int)arg3 noticeID:(id)arg4 withNew:(BOOL)arg5;
- (void)statGameCenterClickSimpleWithExternField:(id)arg1 scenc:(int)arg2 opType:(int)arg3 msgType:(unsigned int)arg4 noticeID:(id)arg5 withNew:(BOOL)arg6;
- (void)statGameCenterClick:(id)arg1 scenc:(int)arg2 opType:(int)arg3 fromUsrName:(id)arg4 msgType:(unsigned int)arg5 msgID:(unsigned int)arg6 sourceScenc:(int)arg7;
- (void)statGameCenterClickAddSubMsgType:(id)arg1 scenc:(int)arg2 opType:(int)arg3 fromUsrName:(id)arg4 msgType:(unsigned int)arg5 msgID:(unsigned int)arg6 sourceScenc:(int)arg7 msgSubType:(unsigned int)arg8 noticeID:(id)arg9;
- (void)gameStatReport:(id)arg1 scenc:(int)arg2 opType:(int)arg3 fromUsrName:(id)arg4 msgType:(unsigned int)arg5 msgID:(unsigned int)arg6 sourceScenc:(int)arg7 msgSubType:(unsigned int)arg8 giftId:(id)arg9 giftUrl:(id)arg10 extInfo:(id)arg11;
- (void)statDiffAccountShare:(id)arg1 appID:(id)arg2 withOpID:(unsigned int)arg3;
- (void)statGameCenterAppstoreInfo:(id)arg1 productIdentifier:(id)arg2 errCode:(unsigned int)arg3;
- (BOOL)uploadGameReport:(unsigned int)arg1 withLogExt:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)isGameForStat:(id)arg1;
- (id)convertStr:(id)arg1;
- (void)saveAppInfoExtend;
- (BOOL)loadAppInfoExtend;
- (BOOL)writeToFile:(id)arg1 data:(id)arg2;
- (void)statGameCenterJsapiJump:(int)arg1 sourceScene:(int)arg2;
- (unsigned int)networkType;
- (void)setNetworkType:(unsigned int)arg1;
- (id)UUID;
- (void)setUUID:(id)arg1;
- (id)gameLaunchTime;
- (void)setGameLaunchTime:(id)arg1;
- (id)gameDescSDK;
- (void)setGameDescSDK:(id)arg1;
- (id)dictScene2LayerID;
- (void)setDictScene2LayerID:(id)arg1;
- (void).cxx_destruct;
@end

