@interface GCChatRoomServer : GCBaseServer
{
    BOOL _hasReceivedMesg; // +0x8
    BOOL _shouldFullUpdateAtListTable; // +0x9
    BOOL _isWaitPerform; // +0xa
    BOOL _isPullAllMemberNameList; // +0xb
    BOOL _hasStopSaveSimpleMemberInfo; // +0xc
    BOOL _ignoreChatroomFirstEnterTip; // +0xd
    id <GCChatRoomServerDelegate> _serverDelegate; // +0x10
    GCChatRoomInfo * _chatRoomInfo; // +0x18
    unsigned long long _minReceiveMessageSeq; // +0x20
    unsigned long long _maxReceiveMessageSeq; // +0x28
    ExportExternInfo * _reportExternInfo; // +0x30
    GetChatroomBaseInfoResponse * _chatRoomBaseInfoResponse; // +0x38
    unsigned long long _nextReceiveMessageSeq; // +0x40
    NSString * _nextReciveMsgVersion; // +0x48
    NSString * _lastRoomInfoVersion; // +0x50
    GameCenterCommonDb * _gameCenterCommonDb; // +0x58
    WCTTable * _gameChatContactTable; // +0x60
    WCTTable * _atListUserNameTable; // +0x68
    MMLockMutableDictionary * _contactDict; // +0x70
    NSMutableDictionary * _contactDictFromServer; // +0x78
    MMLockMutableDictionary * _simpleContactDict; // +0x80
    NSMutableArray * _atListNameDBUpdateArray; // +0x88
    NSMutableArray * _simpleInfoRequestArray; // +0x90
    NSMutableSet * _needUpDbWhenExitSet; // +0x98
    GCRecursiveRunTask * _realTimeUpdateTask; // +0xa0
    GCRecursiveRunTask * _receiveMessageTask; // +0xa8
    NSMutableDictionary * _batchPerfromDict; // +0xb0
    NSMutableArray * _allMsgPackList; // +0xb8
    GetChatroomRealtimeInfoResponse * _lastRealTimeInfoResponse; // +0xc0
    double _atMemberPullStartTime; // +0xc8
    NSMutableString * _atMemberPullCostTimeStr; // +0xd0
    long long _simpleInfoPullTotalFailCount; // +0xd8
    long long _oneBatchFailCount; // +0xe0
}
- (id)initWithChatRoomInfo:(id)arg1;
- (id)genCliMsgId;
- (id)getSendRequestWithTextMessage:(id)arg1 atList:(id)arg2;
- (id)getSendRequestWithEmoticonMsg:(id)arg1;
- (id)getSendRequestWithMsgContent:(id)arg1 options:(id)arg2 chatRoomMsgPack:(id)arg3 msgType:(unsigned long long)arg4;
- (id)getSendRequestWithMsgContent:(id)arg1 options:(id)arg2 msgType:(unsigned long long)arg3;
- (id)getNewChatRoomMsgPack;
- (void)sendMessage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)sendJoinRoom:(id /* block */)arg1;
- (void)kickOutUser:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)sendConfirmRemovedFromGroup:(id /* block */)arg1;
- (void)sendConfirmStatus:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)sendConfirmWithRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)blockMsgWithSeq:(unsigned long long)arg1;
- (void)sendEnterChatRoom;
- (void)sendLeaveChatRoom;
- (void)startUpdateGameRoomInfo;
- (void)pullAllMemberNameListWithLastVersion:(id)arg1 completion:(id /* block */)arg2;
- (id)getSimpleUserDataBy:(id)arg1;
- (void)sepratePageGetSimpleInfoFromRequestArray:(id /* block */)arg1 response:(id)arg2;
- (void)endOfAllSeparateSimpleInfoPullBack:(id /* block */)arg1 response:(id)arg2;
- (void)batchGetSimpleChatroomMemberInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)stopSavePullingSimpleMemberInfo;
- (void)removeAllUserNameListFromDB;
- (void)removeGroupMemberFromDBByUserName:(id)arg1;
- (BOOL)replaceAllContentOfUserNameList:(id)arg1;
- (void)getRecentlyAtNameList:(id /* block */)arg1;
- (id)getDebugOption;
- (void)sendUpdateGameRoomInfoWithCompletionBlock:(id /* block */)arg1;
- (void)getChatRoomMemberInfo:(id)arg1;
- (void)onRoomMemberInfoResponse:(id)arg1;
- (void)didRecieveUserDatas:(id)arg1;
- (void)didRecieveUserDatas:(id)arg1 fromSlotUpdate:(BOOL)arg2;
- (void)insertOrReplaceAtListUserNameArray:(id)arg1;
- (id)contactFromUserData:(id)arg1;
- (id)atListUserNameFromUserData:(id)arg1;
- (id)atListUserNameMainKeyWithUserName:(id)arg1 chatroomName:(id)arg2;
- (void)sendReceiveRequestWithTask:(id)arg1;
- (void)sendReceiveRequest;
- (id)chatRoomMessageFromMsgPack:(id)arg1;
- (id)chatRoomMsgArrayFromMsgPackList:(id)arg1;
- (id)handleMessagePackList:(id)arg1 isCache:(BOOL)arg2;
- (void)onNewMessageReceived:(id)arg1;
- (id)roomMessageResponseFromPbResponse:(id)arg1 isCache:(BOOL)arg2;
- (id)receiveCustomKey;
- (id)realTimeCustomKey;
- (id)cachedKeyForCategory:(id)arg1;
- (id)getCachedRoomMessageResponse;
- (id)getCachedMsgResponse;
- (void)setCachedMsgResponse:(id)arg1;
- (id)getCachedRealtimeControlInfoResponse;
- (void)setCachedRealtimeControlInfoResponse:(id)arg1;
- (void)sendReceiveRoomRealtimeInfoRequestWithTask:(id)arg1;
- (id)chatRoomDesc;
- (void)sendReceiveRoomRealtimeInfoRequest;
- (void)onRoomInfoRealtimeReceived:(id)arg1;
- (id)getAndUpdateUserInfoIfNeed:(id)arg1;
- (void)requestContactOfUserName:(id)arg1;
- (id)batchArgArrayFromSelector:(SEL)arg1;
- (void)throttlePerformWithSelector:(SEL)arg1 argArray:(id)arg2;
- (void)runPerformWithSelector:(id)arg1;
- (id)getUserInfoOfUser:(id)arg1;
- (id)getDBMemberNameList;
- (id)getDBMemberNameListWithSearch:(id)arg1;
- (void)getChatRoomMsg:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)loadMessageLtSeq:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)loadMessageGtSeq:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)clearMinAndMaxMsgSeq;
- (void)reportAtMsgRead:(id)arg1;
- (void)onExitRoom;
- (void)setChatroomMsgChosen:(unsigned long long)arg1 isChosen:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)getChatroomPanelWithCompletionBlock:(id /* block */)arg1;
- (void)voeteMsg:(unsigned long long)arg1 isVote:(BOOL)arg2 isFirstTime:(BOOL)arg3 completionBlock:(id /* block */)arg4;
- (void)publishChoosenMsg:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (void)tickleAtUsername:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)revokeTickleMsg:(unsigned long long)arg1 completionBlock:(id /* block */)arg2;
- (id)serverDelegate;
- (void)setServerDelegate:(id)arg1;
- (id)chatRoomInfo;
- (void)setChatRoomInfo:(id)arg1;
- (unsigned long long)minReceiveMessageSeq;
- (void)setMinReceiveMessageSeq:(unsigned long long)arg1;
- (unsigned long long)maxReceiveMessageSeq;
- (void)setMaxReceiveMessageSeq:(unsigned long long)arg1;
- (id)reportExternInfo;
- (void)setReportExternInfo:(id)arg1;
- (id)chatRoomBaseInfoResponse;
- (void)setChatRoomBaseInfoResponse:(id)arg1;
- (unsigned long long)nextReceiveMessageSeq;
- (void)setNextReceiveMessageSeq:(unsigned long long)arg1;
- (id)nextReciveMsgVersion;
- (void)setNextReciveMsgVersion:(id)arg1;
- (BOOL)hasReceivedMesg;
- (void)setHasReceivedMesg:(BOOL)arg1;
- (id)lastRoomInfoVersion;
- (void)setLastRoomInfoVersion:(id)arg1;
- (id)gameCenterCommonDb;
- (void)setGameCenterCommonDb:(id)arg1;
- (id)gameChatContactTable;
- (void)setGameChatContactTable:(id)arg1;
- (id)atListUserNameTable;
- (void)setAtListUserNameTable:(id)arg1;
- (id)contactDict;
- (void)setContactDict:(id)arg1;
- (id)contactDictFromServer;
- (void)setContactDictFromServer:(id)arg1;
- (id)simpleContactDict;
- (void)setSimpleContactDict:(id)arg1;
- (id)atListNameDBUpdateArray;
- (void)setAtListNameDBUpdateArray:(id)arg1;
- (BOOL)shouldFullUpdateAtListTable;
- (void)setShouldFullUpdateAtListTable:(BOOL)arg1;
- (id)simpleInfoRequestArray;
- (void)setSimpleInfoRequestArray:(id)arg1;
- (id)needUpDbWhenExitSet;
- (void)setNeedUpDbWhenExitSet:(id)arg1;
- (id)realTimeUpdateTask;
- (void)setRealTimeUpdateTask:(id)arg1;
- (id)receiveMessageTask;
- (void)setReceiveMessageTask:(id)arg1;
- (id)batchPerfromDict;
- (void)setBatchPerfromDict:(id)arg1;
- (BOOL)isWaitPerform;
- (void)setIsWaitPerform:(BOOL)arg1;
- (id)allMsgPackList;
- (void)setAllMsgPackList:(id)arg1;
- (id)lastRealTimeInfoResponse;
- (void)setLastRealTimeInfoResponse:(id)arg1;
- (double)atMemberPullStartTime;
- (void)setAtMemberPullStartTime:(double)arg1;
- (id)atMemberPullCostTimeStr;
- (void)setAtMemberPullCostTimeStr:(id)arg1;
- (long long)simpleInfoPullTotalFailCount;
- (void)setSimpleInfoPullTotalFailCount:(long long)arg1;
- (long long)oneBatchFailCount;
- (void)setOneBatchFailCount:(long long)arg1;
- (BOOL)isPullAllMemberNameList;
- (void)setIsPullAllMemberNameList:(BOOL)arg1;
- (BOOL)hasStopSaveSimpleMemberInfo;
- (void)setHasStopSaveSimpleMemberInfo:(BOOL)arg1;
- (BOOL)ignoreChatroomFirstEnterTip;
- (void)setIgnoreChatroomFirstEnterTip:(BOOL)arg1;
- (void).cxx_destruct;
@end

