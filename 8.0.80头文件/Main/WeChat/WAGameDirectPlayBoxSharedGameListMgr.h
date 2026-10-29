@interface WAGameDirectPlayBoxSharedGameListMgr : MMUserService <WAGameDirectPlayBoxListViewModelDelegate, MMServiceProtocol>
{
    BOOL _didLoadFirstPage; // +0x8
    BOOL _observingAppActiveForAudit; // +0x9
    id <WAGameDirectPlayBoxSharedGameListMgrDelegate> _delegate; // +0x10
    NSString * _boxHostAppId; // +0x18
    NSString * _dyeingQuery; // +0x20
    NSDictionary * _boxLaunchInfo; // +0x28
    WAGameDirectPlayBoxNode * _head; // +0x30
    WAGameDirectPlayBoxNode * _tail; // +0x38
    WAGameDirectPlayBoxListViewModel * _viewModel; // +0x40
    id <WAGameDirectPlayBoxMessageHost> _activeBox; // +0x48
    NSMutableSet * _preloadPkgRequestedAppIds; // +0x50
    NSMutableDictionary * _lastCapsuleDecisionSignatures; // +0x58
    NSMutableOrderedSet * _boxLaunchedGameAppIds; // +0x60
    NSDictionary * _gameFeedQueries; // +0x68
}
+ (id)sharedMgr;
+ (id)existingMgr;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceTerminate;
- (void)dealloc;
- (void)clearSessionState;
- (id)nodeForAppId:(id)arg1;
- (void)insertNode:(id)arg1 afterNode:(id)arg2;
- (void)appendNode:(id)arg1;
- (void)prependNode:(id)arg1;
- (void)unlinkNode:(id)arg1;
- (id)orderedGames;
- (long long)nodeCount;
- (BOOL)dispatchPinGameWithAppId:(id)arg1;
- (BOOL)containsGameWithAppId:(id)arg1;
- (BOOL)pinGameWithAppId:(id)arg1 afterAppId:(id)arg2 ephemeral:(BOOL)arg3;
- (long long)purgeEphemeralPinnedNodesExceptAppId:(id)arg1;
- (BOOL)removeEphemeralPinnedGameWithAppId:(id)arg1 notify:(BOOL)arg2;
- (BOOL)pinGameToFrontByAppId:(id)arg1;
- (void)loadFirstPageIfNeeded;
- (void)directPlayBoxListViewModelDidUpdate:(id)arg1;
- (void)directPlayBoxListViewModel:(id)arg1 didFailWithError:(id)arg2;
- (void)notifyListUpdated;
- (void)trackBoxHostAppId:(id)arg1;
- (BOOL)isBoxHostCallerAppId:(id)arg1;
- (void)trackBoxLaunchedGameAppId:(id)arg1 reason:(id)arg2;
- (void)untrackBoxLaunchedGameAppId:(id)arg1 reason:(id)arg2;
- (void)auditOrphanBoxGameTasksWithReason:(id)arg1;
- (void)startObservingAppActiveForAuditIfNeeded;
- (void)onAppDidBecomeActiveForOrphanAudit;
- (void)applyLaunchInfo:(id)arg1 dyeingQuery:(id)arg2;
- (void)applyGameFeedsFromLaunchInfo:(id)arg1;
- (id)effectiveDyeingQueryForAppId:(id)arg1;
- (id)normalizedQueryString:(id)arg1;
- (void)setDyeingQuery:(id)arg1;
- (id)pagePathByAppendingDyeingQuery:(id)arg1 reason:(id)arg2;
- (id)pagePathByAppendingDyeingQuery:(id)arg1 forAppId:(id)arg2 reason:(id)arg3;
- (id)pagePathByAppendingQuery:(id)arg1 query:(id)arg2 reason:(id)arg3;
- (id)jumpQueryStringFromLaunchInfo:(id)arg1;
- (id)queryStringFromDictionary:(id)arg1;
- (void)registerActiveBox:(id)arg1;
- (void)unregisterActiveBox:(id)arg1;
- (id)lastCapsuleDecisionSignatures;
- (BOOL)isDirectPlayBoxProjectedTask:(id)arg1;
- (BOOL)isAppIdOccupiedByActiveBox:(id)arg1;
- (BOOL)shouldSuppressCapsuleMenuForTask:(id)arg1;
- (void)dispatchUpdateAction:(id)arg1 appId:(id)arg2;
- (void)routeMessageFromAppId:(id)arg1 sendTo:(id)arg2 type:(id)arg3 data:(id)arg4 extra:(id)arg5;
- (void)deliverGameDirectPlayBoxMessageToAppId:(id)arg1 type:(id)arg2 data:(id)arg3 extra:(id)arg4 reason:(id)arg5;
- (id)buildMessagePayloadWithType:(id)arg1 data:(id)arg2 extra:(id)arg3;
- (void)deliverMessageToAppId:(id)arg1 type:(id)arg2 data:(id)arg3 extra:(id)arg4 reason:(id)arg5;
- (void)deliverMessageToWebVC:(id)arg1 type:(id)arg2 data:(id)arg3 extra:(id)arg4 reason:(id)arg5;
- (void)dispatchFeedChangedAtIndex:(long long)arg1 fromIndex:(long long)arg2;
- (void)dispatchFeedChangedAtIndex:(long long)arg1 direction:(id)arg2;
- (void)prefetchNextPageIfNeededForSettledIndex:(long long)arg1 totalCount:(long long)arg2;
- (void)dispatchAppListLoadedWithAppendedAppIds:(id)arg1;
- (id)preloadPkgRequestedAppIds;
- (void)preloadPackagesFromIndex:(long long)arg1;
- (void)downloadPkgIfNeededForAppId:(id)arg1 reason:(id)arg2;
- (BOOL)jumpToGameWithAppId:(id)arg1 launchInfo:(id)arg2 extra:(id)arg3;
- (id)buildJumpPassThroughWithLaunchInfo:(id)arg1 extra:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)boxHostAppId;
- (void)setBoxHostAppId:(id)arg1;
- (id)dyeingQuery;
- (id)boxLaunchInfo;
- (void)setBoxLaunchInfo:(id)arg1;
- (id)head;
- (void)setHead:(id)arg1;
- (id)tail;
- (void)setTail:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)didLoadFirstPage;
- (void)setDidLoadFirstPage:(BOOL)arg1;
- (id)activeBox;
- (void)setActiveBox:(id)arg1;
- (void)setPreloadPkgRequestedAppIds:(id)arg1;
- (void)setLastCapsuleDecisionSignatures:(id)arg1;
- (id)boxLaunchedGameAppIds;
- (void)setBoxLaunchedGameAppIds:(id)arg1;
- (BOOL)observingAppActiveForAudit;
- (void)setObservingAppActiveForAudit:(BOOL)arg1;
- (id)gameFeedQueries;
- (void)setGameFeedQueries:(id)arg1;
- (void).cxx_destruct;
@end
