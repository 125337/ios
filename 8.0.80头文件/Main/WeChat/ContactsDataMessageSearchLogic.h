@interface ContactsDataMessageSearchLogic : MMObject <IFTSMessageMgrExt>
{
    BOOL _querySearchStarted; // +0x8
    BOOL _startingKeywordSearch; // +0x9
    unsigned int _ftsSearchType; // +0xc
    id <ContactsDataMessageSearchLogicDelegate> _delegate; // +0x10
    unsigned long long _asyncSearchOption; // +0x18
    WCSTokenPickLogic * _tokenPickLogic; // +0x20
    NSString * _currentQuery; // +0x28
    NSString * _queryTaskKey; // +0x30
    NSMutableDictionary * _matchTips; // +0x38
    NSMutableDictionary * _keywordTaskKeys; // +0x40
    NSMutableDictionary * _taskKeyKeywords; // +0x48
    unsigned long long _missingMsgWrapCount; // +0x50
    unsigned long long _matchFallbackCount; // +0x58
    NSMutableSet * _keywordMatchedUsernames; // +0x60
}
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;
- (void)prepareQuerySearch:(id)arg1;
- (void)startPreparedQuerySearch;
- (void)searchQuery:(id)arg1;
- (void)searchKeywords:(id)arg1;
- (void)cancelSearch;
- (void)cancelQuerySearch;
- (id)matchTipForUsername:(id)arg1;
- (BOOL)isQuerySearchDone;
- (BOOL)isKeywordSearchDone;
- (BOOL)isQuerySearchBatchComplete;
- (BOOL)isKeywordSearchBatchComplete;
- (id)queryResultUsernames;
- (id)keywordResultUsernames;
- (void)notifySearchStateChangedForQuery:(id)arg1 tokenSearch:(BOOL)arg2;
- (void)onFTSRestrictSearchResultChanged:(id)arg1;
- (BOOL)mergeQueryResultsIntoSectionKeys:(id *)arg1 sectionTitles:(id *)arg2 sectionResults:(id *)arg3 filteredContacts:(id)arg4;
- (BOOL)shouldNotifyContactSearchResultWithSectionKeys:(id)arg1;
- (BOOL)mergeQueryResultsAndShouldNotifyIntoSectionKeys:(id *)arg1 sectionTitles:(id *)arg2 sectionResults:(id *)arg3 filteredContacts:(id)arg4 contactSearchDidFinish:(BOOL)arg5;
- (BOOL)getAddedContacts:(id *)arg1 addedGroups:(id *)arg2 existingContacts:(id)arg3 existingGroups:(id)arg4 topHitItems:(id)arg5;
- (BOOL)mergeKeywordResultsIntoTokens;
- (BOOL)mergeKeywordResult:(id)arg1 taskKey:(id)arg2;
- (BOOL)isValidContact:(id)arg1;
- (void)setupMatchTipForUsername:(id)arg1 query:(id)arg2 atIndex:(unsigned long long)arg3 taskKey:(id)arg4;
- (id)buildMatchTipForQuery:(id)arg1 atIndex:(unsigned long long)arg2 taskKey:(id)arg3;
- (id)messageContentFromItems:(id)arg1 query:(id)arg2 taskKey:(id)arg3 matchPhase:(id *)arg4 matchRanges:(id *)arg5;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)asyncSearchOption;
- (void)setAsyncSearchOption:(unsigned long long)arg1;
- (unsigned int)ftsSearchType;
- (void)setFtsSearchType:(unsigned int)arg1;
- (id)tokenPickLogic;
- (void)setTokenPickLogic:(id)arg1;
- (id)currentQuery;
- (void)setCurrentQuery:(id)arg1;
- (id)queryTaskKey;
- (void)setQueryTaskKey:(id)arg1;
- (id)matchTips;
- (void)setMatchTips:(id)arg1;
- (id)keywordTaskKeys;
- (void)setKeywordTaskKeys:(id)arg1;
- (id)taskKeyKeywords;
- (void)setTaskKeyKeywords:(id)arg1;
- (unsigned long long)missingMsgWrapCount;
- (void)setMissingMsgWrapCount:(unsigned long long)arg1;
- (unsigned long long)matchFallbackCount;
- (void)setMatchFallbackCount:(unsigned long long)arg1;
- (BOOL)querySearchStarted;
- (void)setQuerySearchStarted:(BOOL)arg1;
- (BOOL)startingKeywordSearch;
- (void)setStartingKeywordSearch:(BOOL)arg1;
- (id)keywordMatchedUsernames;
- (void)setKeywordMatchedUsernames:(id)arg1;
- (void).cxx_destruct;
@end
