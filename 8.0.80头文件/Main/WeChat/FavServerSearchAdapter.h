@interface FavServerSearchAdapter : NSObject <IFTSContactMgrExt>
{
    BOOL _localSearchDone; // +0x8
    BOOL _contactSearchCompleted; // +0x9
    BOOL _tagSearchCompleted; // +0xa
    WCCgiBlockHelper * _currentHelper; // +0x10
    NSArray * _localSearchResults; // +0x18
    NSString * _currentQuery; // +0x20
    NSString * _currentRequestId; // +0x28
    NSMutableDictionary * _searchResultsByTaskKey; // +0x30
    long long _pendingSearchCount; // +0x38
    NSString * _contactSearchRequestId; // +0x40
    NSString * _contactSearchTaskKey; // +0x48
    NSString * _firstSearchCtx; // +0x50
    NSMutableArray * _contactSearchLocalText; // +0x58
    FavNameInfo * _contactSearchResult; // +0x60
    NSDictionary * _tagSearchResultMap; // +0x68
}
- (void)searchWithQuery:(id)arg1 taskKey:(id)arg2;
- (void)sendFavAiSearchCGIWithQuery:(id)arg1 taskKey:(id)arg2 requestId:(id)arg3 reqType:(int)arg4 nameInfo:(id)arg5 tagSearchResultList:(id)arg6;
- (id)favItemsFromServerResults:(id)arg1 withQuery:(id)arg2;
- (void)checkBothSearchCompleteAndSendSecondCGI;
- (void)favAiSearch:(id)arg1 taskKey:(id)arg2;
- (void)searchContactOnly:(id)arg1 taskKey:(id)arg2 localSearchText:(id)arg3;
- (void)cancelCurrentRequest;
- (void)cancelContactSearch;
- (id)getRecentContact:(int)arg1;
- (void)searchContactAsync:(id)arg1;
- (void)finishContactSearchAndSendCGI;
- (void)onContactSearchCompleteWithResult:(id)arg1;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)localSearchByTags:(id)arg1 requestId:(id)arg2 completion:(id /* block */)arg3;
- (id)favNameInfoFromContacts:(id)arg1;
- (id)currentHelper;
- (void)setCurrentHelper:(id)arg1;
- (id)localSearchResults;
- (void)setLocalSearchResults:(id)arg1;
- (BOOL)localSearchDone;
- (void)setLocalSearchDone:(BOOL)arg1;
- (id)currentQuery;
- (void)setCurrentQuery:(id)arg1;
- (id)currentRequestId;
- (void)setCurrentRequestId:(id)arg1;
- (id)searchResultsByTaskKey;
- (void)setSearchResultsByTaskKey:(id)arg1;
- (long long)pendingSearchCount;
- (void)setPendingSearchCount:(long long)arg1;
- (id)contactSearchRequestId;
- (void)setContactSearchRequestId:(id)arg1;
- (id)contactSearchTaskKey;
- (void)setContactSearchTaskKey:(id)arg1;
- (id)firstSearchCtx;
- (void)setFirstSearchCtx:(id)arg1;
- (id)contactSearchLocalText;
- (void)setContactSearchLocalText:(id)arg1;
- (BOOL)contactSearchCompleted;
- (void)setContactSearchCompleted:(BOOL)arg1;
- (BOOL)tagSearchCompleted;
- (void)setTagSearchCompleted:(BOOL)arg1;
- (id)contactSearchResult;
- (void)setContactSearchResult:(id)arg1;
- (id)tagSearchResultMap;
- (void)setTagSearchResultMap:(id)arg1;
- (void).cxx_destruct;
@end
