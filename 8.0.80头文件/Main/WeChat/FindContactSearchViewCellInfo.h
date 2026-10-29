@interface FindContactSearchViewCellInfo : WCTableViewNormalCellManager <SearchContactDataProviderDelegate, IOpenImResourceMgrExt, FindContactSearchViewTestExt, MMWebViewDelegate, WCSearchDelegate, WCDataSearchDelegate, IBrandServiceSearchExt, PBMessageObserverDelegate, contactInfoDelegate>
{
    UITextField * m_userNameTextField; // +0x8
    MMLoadingView * m_loadingView; // +0x10
    NSString * m_nsUserNameToFind; // +0x18
    MMUIViewController * m_containViewController; // +0x20
    UIView * m_backGroundView; // +0x28
    UIView * m_backGroundBlurView; // +0x30
    unsigned int _requestEventID; // +0x38
    WCDataSearcher * _searcher; // +0x40
    BOOL _lastSearchIncludeIntelligence; // +0x48
    BOOL _didSearchContactDone; // +0x49
    BOOL _isSearching; // +0x4a
    BOOL _isActived; // +0x4b
    BOOL _bShowNoResult; // +0x4c
    BOOL _bOnlyShowResult; // +0x4d
    BOOL _bHasShownWebSearchCell; // +0x4e
    BOOL _bHasOperateOnlineResult; // +0x4f
    BOOL _useVerticalSearchNewStyle; // +0x50
    id <FindContactSearchViewCellInfoDelegate> _m_delegate; // +0x58
    NSArray * _foundContactArray; // +0x60
    unsigned long long _searchContactState; // +0x68
    SearchContactDataProvider * _searchContactDataProvider; // +0x70
    AISearchContactDataProvider * _aiSearchContactDataProvider; // +0x78
    MMUILabel * _nonResultLabel; // +0x80
}
+ (id)contactsFromSearchResponse:(id)arg1 req:(id)arg2;
- (void)dealloc;
- (id)initWithContentController:(id)arg1 backGroundView:(id)arg2;
- (void)setDimsDuringSearch:(BOOL)arg1;
- (void)onTagBackgroundView:(id)arg1;
- (void)layoutViews;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)OnSearchUser;
- (void)makeCell:(id)arg1;
- (id)makeEntryCell:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (BOOL)isShowAIContact;
- (void)wcsSearchBarSearchButtonClicked:(id)arg1;
- (void)wcsWillPresentSearch:(id)arg1;
- (void)wcsDidPresentSearch:(id)arg1;
- (void)wcsSearchBar:(id)arg1 textDidChange:(id)arg2;
- (void)wcsSearchBarCancelButtonClicked:(id)arg1;
- (void)cancelSearch;
- (void)clearSearchInfo;
- (void)wcsWillDismissSearch:(id)arg1;
- (long long)numberOfSectionsForSearchViewTable:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)viewForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)titleForHeaderInSection:(long long)arg1 ForSearchViewTable:(id)arg2;
- (id)getAddressBookPersonImage:(id)arg1;
- (id)cellForIndex:(id)arg1 ForSearchViewTable:(id)arg2;
- (double)heightForSearchViewTable:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch;
- (void)doSearchWithIntelligence:(BOOL)arg1;
- (void)onlySetActive:(id)arg1;
- (void)updateResultArray:(id)arg1;
- (void)onGetSearchContactRet:(id)arg1 req:(id)arg2;
- (void)sendBrandContactListRequest;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startBlockedLoadingWithText:(id)arg1;
- (void)updateLoadingWithText:(id)arg1;
- (void)startLoading;
- (void)stopLoading;
- (id)getSearchBarText;
- (id)filterUserName:(id)arg1;
- (BOOL)isObj:(id)arg1 match:(id)arg2;
- (BOOL)isBestGuessPhoneNumber:(id)arg1;
- (void)addFriendScene:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (BOOL)allTextIsBlank;
- (void)removeNoResultLabelWhenSearching;
- (BOOL)isValidLocalQuery:(id)arg1;
- (id)getSearcher;
- (BOOL)handleDebugCommand:(id)arg1;
- (void)onSearch:(id)arg1;
- (void)SearchBarBecomeActive;
- (void)SearchBarBecomeUnActive;
- (BOOL)isSearchActived;
- (void)onGetNonResult;
- (void)doShowContactListInfoView;
- (void)doShowAIContactInfoView;
- (void)showContactListInfoView;
- (void)showWebSearchEntryWithSrvErrMsg:(id)arg1 bfail:(BOOL)arg2 response:(id)arg3;
- (void)showContactInfoView:(id)arg1;
- (void)openContactInfoViewForPhone:(id)arg1;
- (void)delayPardusSearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delayPardusSearchImp:(id)arg1;
- (void)onPardusSearchResultReturn:(id)arg1 request:(id)arg2;
- (void)onPardusSearchResultFail:(id)arg1 request:(id)arg2;
- (void)onSearchResultViewNeedReload;
- (void)onSearchResultViewNeedPushViewController:(id)arg1;
- (void)onSearchResultViewNeedStartWebSearch;
- (void)onSearchResultViewNeedStartWebSearchWithQuery:(id)arg1;
- (id)getCurrSearchText;
- (id)getLocalSearchResult;
- (id)getNavigationController;
- (void)do_LogExt:(int)arg1;
- (void)onGetSearchDetailPageResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)endSearch;
- (void)logWebSearchClickByKeyword:(id)arg1 clickType:(unsigned int)arg2;
- (void)onTestCrash;
- (void)onTestCrash1;
- (void)onTestCrash2;
- (void)onTestCrash4;
- (void)onTestCrash5;
- (void)onTestCrash6;
- (void)onTestCrash66;
- (void)onTestCrash60;
- (void)onTestCrash7;
- (void)onTestCrash8;
- (void)onTestCrash9;
- (void)onEnterRDMDeviceList;
- (void)onTestCrashSwift;
- (void)onTestCrashPureSwift;
- (void)onTestCrashMemoryCorruption;
- (void)onTestCrashStackOverflow;
- (void)onFoom;
- (void)onTestMainThreadLockTrace;
- (void)onTestCrashResort:(id)arg1;
- (void)doExit;
- (void)showBizConfig;
- (id)m_userNameTextField;
- (void)setM_userNameTextField:(id)arg1;
- (id)m_nsUserNameToFind;
- (void)setM_nsUserNameToFind:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)foundContactArray;
- (void)setFoundContactArray:(id)arg1;
- (unsigned long long)searchContactState;
- (void)setSearchContactState:(unsigned long long)arg1;
- (id)searchContactDataProvider;
- (void)setSearchContactDataProvider:(id)arg1;
- (id)aiSearchContactDataProvider;
- (void)setAiSearchContactDataProvider:(id)arg1;
- (BOOL)lastSearchIncludeIntelligence;
- (void)setLastSearchIncludeIntelligence:(BOOL)arg1;
- (id)nonResultLabel;
- (void)setNonResultLabel:(id)arg1;
- (BOOL)didSearchContactDone;
- (void)setDidSearchContactDone:(BOOL)arg1;
- (BOOL)isSearching;
- (void)setIsSearching:(BOOL)arg1;
- (BOOL)isActived;
- (void)setIsActived:(BOOL)arg1;
- (BOOL)bShowNoResult;
- (void)setBShowNoResult:(BOOL)arg1;
- (BOOL)bOnlyShowResult;
- (void)setBOnlyShowResult:(BOOL)arg1;
- (BOOL)bHasShownWebSearchCell;
- (void)setBHasShownWebSearchCell:(BOOL)arg1;
- (BOOL)bHasOperateOnlineResult;
- (void)setBHasOperateOnlineResult:(BOOL)arg1;
- (BOOL)useVerticalSearchNewStyle;
- (void)setUseVerticalSearchNewStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
