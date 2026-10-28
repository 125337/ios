@interface FTSMsgScopeView : FTSResultView <IFTSMessageMgrExt>
{
    CContact * _session; // +0xc0
    NSArray * _arrTargetSessionMsgItems; // +0xc8
    CContact * _talkerContact; // +0xd0
    SearchMatchTip * _talkerMatchTip; // +0xd8
    NSString * _talkerQuery; // +0xe0
    NSMutableArray * _arrExpandStatus; // +0xe8
    NSMutableDictionary * m_dicWeakMedia; // +0xf0
    NSMutableDictionary * m_dicIndexItemCount; // +0xf8
    BOOL _asCluster; // +0x100
    NSString * _taskKey; // +0x108
}
- (id)init;
- (id)initWithSearchBar:(id)arg1 frame:(CGRect)arg2;
- (id)initWithSearchPage:(id)arg1;
- (void)initData;
- (void)configTagSearchLogicForSession:(id)arg1 asCluster:(BOOL)arg2 andSessionResult:(id)arg3 andTalkerContact:(id)arg4 andTalkerMatchTip:(id)arg5 andTalkerQuery:(id)arg6 andSearchText:(id)arg7 bSessionFirst:(BOOL)arg8;
- (BOOL)delaySearchImp:(id)arg1;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)handleTextChanged:(id)arg1 immediately:(BOOL)arg2;
- (BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)cancelSearch;
- (BOOL)isTalkerSearchEntry:(long long)arg1;
- (BOOL)isDisplayTalkerSearchEntry;
- (unsigned long long)convertPageType;
- (BOOL)isSessionPage;
- (void)prePopHandle;
- (void)pop;
- (void)popForSubResultView:(BOOL)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)makeFinderCellWithTableView:(id)arg1 finderMsgItem:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)needSeperatedFooterInSection:(long long)arg1;
- (BOOL)needNoResultTableFooterView;
- (long long)getSectionCount;
- (long long)getRowCountForSection:(long long)arg1;
- (BOOL)isUseSectionResult;
- (BOOL)isSearchRunning;
- (id)getSearchArray:(id)arg1;
- (id)getSearchSectionArray:(id)arg1;
- (BOOL)hasSearchDone:(id)arg1;
- (BOOL)hasMoreData;
- (void)onLoadMore;
- (void)hideKeyboard;
- (void)selectMsgItem:(id)arg1;
- (void)selectMsgItems:(id)arg1 withInTalkerContact:(id)arg2 andTalkerMatchTip:(id)arg3;
- (void)selectMsgEntry:(id)arg1;
- (void)openWeAppSessionView;
- (void)openWWKFSessionView;
- (void)onFTSRestrictSearchResultChanged:(id)arg1;
- (BOOL)shouldDisplayMoreCellInSection:(long long)arg1;
- (BOOL)isMoreCellAtIndexPath:(id)arg1;
- (BOOL)isExpandingForSection:(long long)arg1;
- (void)setExpandStatus:(BOOL)arg1 forSection:(long long)arg2;
- (id)ftsResultGetWCSearchContainerView;
- (id)taskKey;
- (void)setTaskKey:(id)arg1;
- (BOOL)asCluster;
- (void).cxx_destruct;
@end
