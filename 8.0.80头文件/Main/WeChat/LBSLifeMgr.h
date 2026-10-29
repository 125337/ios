@interface LBSLifeMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    SKBuiltinBuffer_t * _getBuff; // +0x8
    SKBuiltinBuffer_t * _searchBuff; // +0x10
}
- (void)dealloc;
- (int)getLBSLife:(id)arg1 StartFromFirst:(BOOL)arg2 Scene:(unsigned int)arg3 EntryTime:(unsigned int)arg4;
- (int)getLBSLife:(id)arg1 StartFromFirst:(BOOL)arg2 Scene:(unsigned int)arg3 EntryTime:(unsigned int)arg4 eventIdLdr:(unsigned int *)arg5;
- (int)autoSearchLBSLife:(id)arg1;
- (int)continueSearchLBSLife:(id)arg1;
- (int)getLBSLifeDetail:(id)arg1;
- (void)handleGetLifeListResponse:(id)arg1 eventId:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getBuff;
- (void)setGetBuff:(id)arg1;
- (id)searchBuff;
- (void)setSearchBuff:(id)arg1;
- (void).cxx_destruct;
@end
