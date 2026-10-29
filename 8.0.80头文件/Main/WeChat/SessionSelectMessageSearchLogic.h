@interface SessionSelectMessageSearchLogic : MMObject <IFTSMessageMgrExt>
{
    BOOL _querySearchStarted; // +0x8
    id <SessionSelectMessageSearchLogicDelegate> _delegate; // +0x10
    NSString * _taskKey; // +0x18
    NSString * _currentQuery; // +0x20
    NSMutableDictionary * _matchTips; // +0x28
    unsigned long long _missingMsgWrapCount; // +0x30
    unsigned long long _matchFallbackCount; // +0x38
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)prepareSearch:(id)arg1;
- (void)startPreparedSearch;
- (void)search:(id)arg1;
- (void)cancelSearch;
- (id)matchTipForUsername:(id)arg1;
- (BOOL)isSearchDone;
- (BOOL)isSearchBatchComplete;
- (void)onFTSRestrictSearchResultChanged:(id)arg1;
- (BOOL)mergeResultsIntoContacts:(id *)arg1 groups:(id *)arg2 topHitItems:(id)arg3 sectionKeys:(id *)arg4 sectionResults:(id *)arg5;
- (BOOL)shouldNotifyContactSearchResultWithContacts:(id)arg1 groups:(id)arg2 topHitItems:(id)arg3 hasAdditionalVisibleResult:(BOOL)arg4;
- (BOOL)mergeResultsAndShouldNotifyIntoContacts:(id *)arg1 groups:(id *)arg2 topHitItems:(id)arg3 sectionKeys:(id *)arg4 sectionResults:(id *)arg5 contactSearchDidFinish:(BOOL)arg6 hasAdditionalVisibleResult:(BOOL)arg7;
- (BOOL)getAddedContacts:(id *)arg1 addedGroups:(id *)arg2 existingContacts:(id)arg3 existingGroups:(id)arg4 topHitItems:(id)arg5;
- (void)setupMatchTipForUsername:(id)arg1 query:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)messageContentFromItems:(id)arg1 query:(id)arg2 taskKey:(id)arg3 matchPhase:(id *)arg4 matchRanges:(id *)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (id)currentQuery;
- (void)setCurrentQuery:(id)arg1;
- (id)matchTips;
- (void)setMatchTips:(id)arg1;
- (unsigned long long)missingMsgWrapCount;
- (void)setMissingMsgWrapCount:(unsigned long long)arg1;
- (unsigned long long)matchFallbackCount;
- (void)setMatchFallbackCount:(unsigned long long)arg1;
- (BOOL)querySearchStarted;
- (void)setQuerySearchStarted:(BOOL)arg1;
- (void).cxx_destruct;
@end
