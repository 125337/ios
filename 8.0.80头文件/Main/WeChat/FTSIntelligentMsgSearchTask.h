@interface FTSIntelligentMsgSearchTask : NSObject <FTSIntelligentMsgSearchMgrDelegate>
{
    FTSIntelligentMsgSearchMgr * _ftsSearchMgr; // +0x8
    NSMutableArray * _arrResultWrap; // +0x10
    BOOL _isCancelled; // +0x18
    NSString * _toParseTalker; // +0x20
    NSString * _toParseRealQuery; // +0x28
    NSArray * _arrSourceContact; // +0x30
    CContact * _restrictSessionContact; // +0x38
    CContact * _restrictTalkerContact; // +0x40
    NSArray * _arrTalkerMatchContact; // +0x48
    NSMutableDictionary * _dicMatchTip; // +0x50
    unsigned long long _startSearchTime; // +0x58
    BOOL _hasSearchDone; // +0x60
    BOOL _hasFinishDBSearch; // +0x61
    BOOL _isRunning; // +0x62
    BOOL _hasIndexMsgResult; // +0x63
    BOOL _hasMemMsgResult; // +0x64
    int _resultType; // +0x68
    unsigned int _newestSearchType; // +0x6c
    NSString * _taskKey; // +0x70
    id <FTSIntelligentMsgSearchTaskDelegate> _delegate; // +0x78
    NSString * _newestQueryText; // +0x80
    NSString * _lastQueryText; // +0x88
    NSMutableArray * _arrLastQueryTerm; // +0x90
    NSString * _restrictSessionUsrname; // +0x98
    FTSIntelligentMsgSearchResultHandler * _searchResultHandler; // +0xa0
}
- (id)initWithSearchMgr:(id)arg1;
- (void)cancel;
- (id)getSearchResult;
- (id)getMsgItem;
- (id)getSessionDic;
- (id)getSessionMsgItemsForindex:(unsigned long long)arg1;
- (id)getSessionUserNameForindex:(unsigned long long)arg1;
- (id)getArrSearchResultWrap;
- (unsigned int)getTotalSessionCount;
- (unsigned int)getTotalMsgItemCount;
- (id)getSessionTotalMsgItem;
- (id)getSessionArrFaceClusterItem;
- (void)setLastQueryText:(id)arg1;
- (BOOL)checkValid:(id)arg1;
- (void)asynSearch:(id)arg1 searchType:(unsigned int)arg2;
- (void)updateResultType;
- (void)prepareRestrictSearchContent:(id)arg1;
- (void)onDBSearchFinish;
- (void)searchMoreContent;
- (id)genResultWrapIn:(id)arg1;
- (void)appendResult:(id)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)resultType;
- (void)setResultType:(int)arg1;
- (id)newestQueryText;
- (void)setNewestQueryText:(id)arg1;
- (id)lastQueryText;
- (id)arrLastQueryTerm;
- (BOOL)hasSearchDone;
- (void)setHasSearchDone:(BOOL)arg1;
- (BOOL)hasFinishDBSearch;
- (void)setHasFinishDBSearch:(BOOL)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (BOOL)hasIndexMsgResult;
- (void)setHasIndexMsgResult:(BOOL)arg1;
- (BOOL)hasMemMsgResult;
- (void)setHasMemMsgResult:(BOOL)arg1;
- (unsigned int)newestSearchType;
- (void)setNewestSearchType:(unsigned int)arg1;
- (id)restrictSessionUsrname;
- (void)setRestrictSessionUsrname:(id)arg1;
- (id)searchResultHandler;
- (void)setSearchResultHandler:(id)arg1;
- (void).cxx_destruct;
@end
