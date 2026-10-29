@interface SessionActionStatMgr : MMUserService <IContactMgrExt, IMMNewSessionMgrExt, IMsgExt, MMServiceProtocol>
{
    NSMutableArray * _actionList; // +0x8
    MemoryMappedKV * _actionStorage; // +0x10
    BOOL _bDidEnterChatRoom; // +0x18
    unsigned int _uiStayWebViewTime; // +0x1c
    WCStatTimerHelper * _oStatTimerHelper; // +0x20
    map<unsigned long, NSMutableDictionary *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, NSMutableDictionary *>>> _mapExpourseTypeToDic; // +0x28
    Log_IMOperation * _Log_IMOperation; // +0x40
}
- (void)onServiceInit;
- (BOOL)tryLoadSessionActionCache;
- (unsigned int)getMaxCacheTime;
- (unsigned int)getMaxCacheLogCount;
- (int)getSessionTypeWithContact:(id)arg1;
- (BOOL)hadExposuredWithMessageId:(unsigned long long)arg1 expourseType:(unsigned long long)arg2;
- (void)markExposuredWithMessageId:(unsigned long long)arg1 expourseType:(unsigned long long)arg2;
- (void)clearExposureMsgIdDic;
- (id)getFromChatRoomWithMsgWrap:(id)arg1;
- (id)getPosterUserNameWithMsgWrap:(id)arg1;
- (void)enterChatRoom;
- (void)recordStayWebViewTimeInMS:(unsigned long long)arg1;
- (void)exitChatRoom:(id)arg1 beginTime:(unsigned int)arg2 unreadCount:(unsigned int)arg3;
- (void)tryUploadActionList;
- (void)uploadActionList;
- (BOOL)needUploadIMOperationKV;
- (BOOL)needUploadIMOperationPB;
- (void)initIMOperation;
- (void)startRecordIMOperation;
- (void)addIMBehaviorMsgOp:(unsigned int)arg1 appMsgInnerType:(unsigned int)arg2 msgOpType:(int)arg3;
- (void)reportMsgOperation:(id)arg1;
- (void)addIMBehaviorContactExpose:(id)arg1 scene:(unsigned int)arg2;
- (void)addIMBehaviorContactOp:(id)arg1 contactOpType:(int)arg2;
- (id)strAppendKeyValue:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)reportLogIMOperation:(id)arg1;
- (void)onSessionTopStatusChanged:(id)arg1 bTop:(BOOL)arg2;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

