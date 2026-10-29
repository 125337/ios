@interface SessionActionStatMgr : MMUserService <MMServiceProtocol>
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
- (BOOL)hadExposuredWithMessageId:(unsigned long long)arg1 expourseType:(unsigned long long)arg2;
- (void)markExposuredWithMessageId:(unsigned long long)arg1 expourseType:(unsigned long long)arg2;
- (void)clearExposureMsgIdDic;
- (id)getFromChatRoomWithMsgWrap:(id)arg1;
- (id)getPosterUserNameWithMsgWrap:(id)arg1;
- (void)exitChatRoom:(id)arg1 beginTime:(unsigned int)arg2 unreadCount:(unsigned int)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
