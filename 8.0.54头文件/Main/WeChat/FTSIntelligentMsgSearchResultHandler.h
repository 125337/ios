@interface FTSIntelligentMsgSearchResultHandler : NSObject
{
    BOOL _searchFinish; // +0x8
    BOOL _isRuning; // +0x9
    unsigned int _resultMsgCount; // +0xc
    unsigned int _memResultCount; // +0x10
    unsigned int _currentOffset; // +0x14
    FTSIntelligentMsgSearchMgr * _searchMgr; // +0x18
    NSString * _searchKey; // +0x20
    NSString * _handleKey; // +0x28
    NSArray * _arrSessionResultItem; // +0x30
    id <FTSIntelligentMsgSearchMgrDelegate> _callbackTarget; // +0x38
    NSString * _limitUsername; // +0x40
}
- (void)cancelSearch;
- (void)dealloc;
- (id)getSessionResultLimit:(unsigned int)arg1;
- (id)getMsgResultLimit:(unsigned int)arg1;
- (id)copyHandlerIfSearchFinish;
- (id)getAllResult;
- (id)getAllResultWithSessionUserName:(id)arg1;
- (unsigned int)resultMsgCount;
- (void)setResultMsgCount:(unsigned int)arg1;
- (unsigned int)memResultCount;
- (void)setMemResultCount:(unsigned int)arg1;
- (id)searchMgr;
- (void)setSearchMgr:(id)arg1;
- (id)searchKey;
- (void)setSearchKey:(id)arg1;
- (id)handleKey;
- (void)setHandleKey:(id)arg1;
- (id)arrSessionResultItem;
- (void)setArrSessionResultItem:(id)arg1;
- (id)callbackTarget;
- (void)setCallbackTarget:(id)arg1;
- (id)limitUsername;
- (void)setLimitUsername:(id)arg1;
- (unsigned int)currentOffset;
- (void)setCurrentOffset:(unsigned int)arg1;
- (BOOL)searchFinish;
- (void)setSearchFinish:(BOOL)arg1;
- (BOOL)isRuning;
- (void)setIsRuning:(BOOL)arg1;
- (void).cxx_destruct;
@end

