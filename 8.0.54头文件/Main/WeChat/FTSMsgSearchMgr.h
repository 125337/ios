@interface FTSMsgSearchMgr : NSObject
{
    NSMutableDictionary * m_searchHandler; // +0x8
    NSMutableDictionary * m_searchResult; // +0x10
    NSMutableDictionary * m_searchStatus; // +0x18
    BOOL _bIsIgnoreCluster; // +0x20
    FTSMessageDB * _ftsDB; // +0x28
}
+ (id)ClusterUsernames;
- (id)initWithDB:(id)arg1;
- (id)startSearch:(id)arg1 limitUsername:(id)arg2 searchFinishTarget:(id)arg3;
- (void)internalStartSearch:(id)arg1 limitUsername:(id)arg2;
- (id)memSearch:(id)arg1 queryText:(id)arg2 limitUsername:(id)arg3;
- (id)getSearchKeyWithQuery:(id)arg1 limitSession:(id)arg2;
- (void)callSearchFinish:(id)arg1;
- (void)cancelSearch:(id)arg1 withHandlerKey:(id)arg2;
- (BOOL)isFavWeAppMsgWithUsername:(id)arg1;
- (BOOL)isClusterId:(id)arg1;
- (BOOL)isSessionId:(id)arg1 belongsToClusterId:(id)arg2;
- (id)getClusterIdFor:(id)arg1;
- (BOOL)bIsIgnoreCluster;
- (void)setBIsIgnoreCluster:(BOOL)arg1;
- (id)ftsDB;
- (void)setFtsDB:(id)arg1;
- (void).cxx_destruct;
@end

