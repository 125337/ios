@interface MMMyChatRoomSessionMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    BOOL _hasPreLoadCache; // +0x8
    NSMutableDictionary * _dicMyChatTimeInfo; // +0x10
}
- (id)init;
- (void)onServiceClearData;
- (void)onServiceMemoryWarning;
- (void)loadMyChatTimeIfNeeded;
- (BOOL)hasLoaded;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)dicMyChatTimeInfo;
- (void)setDicMyChatTimeInfo:(id)arg1;
- (BOOL)hasPreLoadCache;
- (void)setHasPreLoadCache:(BOOL)arg1;
- (void).cxx_destruct;
@end

