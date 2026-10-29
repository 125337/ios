@interface FTSIntelligentMsgSearchMgr : NSObject
{
    NSMutableDictionary * m_searchHandler; // +0x8
    NSMutableDictionary * m_searchResult; // +0x10
    NSMutableDictionary * m_searchStatus; // +0x18
    FTSIntelligentMessageDB * _ftsDB; // +0x20
}
- (id)initWithDB:(id)arg1;
- (id)startSearch:(id)arg1 limitUsername:(id)arg2 searchType:(unsigned int)arg3 searchFinishTarget:(id)arg4;
- (void)internalStartSearch:(id)arg1 limitUsername:(id)arg2 searchType:(unsigned int)arg3;
- (id)memSearch:(id)arg1 queryText:(id)arg2 limitUsername:(id)arg3;
- (id)getAllSearchQueryText:(id)arg1 limitUsername:(id)arg2 searchType:(unsigned int)arg3;
- (id)getSearchKeyWithQuery:(id)arg1 limitSession:(id)arg2 searchType:(unsigned int)arg3;
- (void)callSearchFinish:(id)arg1;
- (void)cancelSearch:(id)arg1 withHandlerKey:(id)arg2;
- (id)ftsDB;
- (void)setFtsDB:(id)arg1;
- (void).cxx_destruct;
@end
