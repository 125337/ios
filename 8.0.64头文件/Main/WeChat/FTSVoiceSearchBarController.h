@interface FTSVoiceSearchBarController : NSObject <IFtsWebSearchExt, IWSSearchUtilExtension, WCPayWalletLockVerifyLogicDelegate, contactVerifyLogicDelegate, contactInfoDelegate, PBMessageObserverDelegate, MFMessageComposeViewControllerDelegate, ContactPickerViewDelegate, CreateChatLogicDelegate, _TtP6WeChat21GlobalSearchDataOwner_, WCActionSheetDelegate, MMUIViewControllerDelegate, UITableViewDelegate, SearchGuideViewDelegate>
{
    map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> _mapSearchSectionType; // +0x8
    CContact * _curContact; // +0x20
    CContactVerifyLogic * _contactVerifyLogic; // +0x28
    unsigned long long _currentFeatureId; // +0x30
    unsigned long long _findType; // +0x38
    NSString * _newestSearchText; // +0x40
    NSMutableDictionary * m_dicWeakMedia; // +0x48
    NSMutableDictionary * _dicDisplayInfo; // +0x50
    NSString * _lastMonitorReportText; // +0x58
    NSMutableSet * _exposeContactSet; // +0x60
    CGRect _currentKeyboardRect; // +0x68
    NSString * _lastKeywordForRelatedSugReport; // +0x88
    CreateChatLogic * m_createChatLogic; // +0x90
    BOOL _isFromVoice; // +0x98
    BOOL _isKeyBoardSearch; // +0x99
    BOOL _isReplaceText; // +0x9a
    BOOL _disableRawQuerySug; // +0x9b
    unsigned long long _searchScene; // +0xa0
    NSMutableSet * _markExposeSet; // +0xa8
    WSWebViewPluginScheduler * _pluginScheduler; // +0xb0
    PardusSearchRequest_ClickContextInfo * _clickContextInfo; // +0xb8
    _TtC6WeChat22GlobalSearchDataSource * _dataSource; // +0xc0
    MMUIViewController<FTSResultPage><FTSHomePage> * _page; // +0xc8
    _TtC6WeChat31FTSWebSearchIntentionController * _searchIntentionController; // +0xd0
    double _fixedKeyboardHeight; // +0xd8
    NSString * _latestCompeleteWebSearchQuery; // +0xe0
}
- (void)doInitWebSearch;
- (void)doDeallocWebSearch;
- (void)delayPardusSearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delayPardusSearchImp:(id)arg1;
- (void)forbidPrepositionSugForExpired:(id)arg1;
- (id)fakeSugResultModel;
- (void)openWebRecommend;
- (void)startWebSearch:(id)arg1 urlParams:(id)arg2;
- (void)onPardusSearchResultReturn:(id)arg1 request:(id)arg2;
- (void)onPardusSearchResultFail:(id)arg1 request:(id)arg2;
- (id)localPageResult;
- (BOOL)canShowLocalPageResult;
- (BOOL)hasLocalPageResult;
- (id)genLocalPageWordConcatStr;
- (void)onClickSearchLocalPageItem:(id)arg1 wordIndex:(long long)arg2 parentScene:(long long)arg3 clickType:(unsigned long long)arg4 needReportClick:(BOOL)arg5 isFromVoice:(BOOL)arg6;
- (void)onExposeSearchLocalPageItem:(id)arg1 wordIndex:(long long)arg2;
- (id)genWebSearchPageWith:(id)arg1 baseUrlParams:(id)arg2;
- (void)bindExitFTSPageBlockForSearchPage:(id)arg1;
- (id)pardusSearchId;
- (id)pardusSearchRequestId;
- (void)openMyWeAppMessage;
- (void)openWeAppSessionView;
- (void)openWeAppWithContact:(id)arg1 withSceneNote:(id)arg2;
- (void)cancelWeAppRequestInfo;
- (void)openWeAppWithSchemeUrl:(id)arg1;
- (void)openWeAppMainList;
- (void)openCreateMyRedCover;
- (void)walletLockVerifySuccess:(id)arg1;
- (void)openWCPayView;
- (void)openWXHongBao;
- (void)openFacingRecvMoneyFeature;
- (void)openOfflinePayFeature;
- (void)openBalanceFeature;
- (void)openMobileRecharge;
- (id)sectionType2String:(unsigned int)arg1;
- (unsigned int)getSubClickTypeForClickType:(unsigned int)arg1 index:(unsigned int)arg2;
- (unsigned int)convertLogClickTypeFromSectionType:(unsigned int)arg1 indexPath:(id)arg2;
- (void)markDisplayForIndexPath:(id)arg1 cell:(id)arg2 tableView:(id)arg3;
- (void)tryDoMonitorReport:(id)arg1;
- (BOOL)searchFavDone:(id)arg1;
- (BOOL)searchMemoryDone:(id)arg1;
- (BOOL)searchWeAppDone:(id)arg1;
- (BOOL)searchWANetDone:(id)arg1;
- (id)addFTSResultCountLogParams:(id)arg1;
- (id)addFTSResultCountLogParams:(id)arg1 clickTopHitType:(unsigned int)arg2;
- (BOOL)isOpenPluginContactInfoView:(id)arg1;
- (void)addContact:(id)arg1;
- (void)verifyContact:(id)arg1;
- (void)showAlert:(id)arg1;
- (void)sendSMSInvite:(id)arg1;
- (void)openMessageContentView:(id)arg1;
- (void)openBrandSessionView;
- (void)openBrandServiceSessionView;
- (void)openWWKFSessionView;
- (void)openPluginContactInfoView:(id)arg1;
- (void)openEnterpriseConvergedSessionListController:(id)arg1;
- (void)openEnterpriseWebSubBrand:(id)arg1;
- (void)openContactInfo:(id)arg1;
- (void)openContactInfo:(id)arg1 fromSearchContact:(BOOL)arg2;
- (void)jumpFeatureUrl:(id)arg1;
- (BOOL)isPluginOpen:(long long)arg1;
- (void)openLBS;
- (void)openShake;
- (void)openAlbum;
- (void)openCameraScan;
- (void)openGameCenter:(id)arg1;
- (void)openContactInfoForFeature:(long long)arg1;
- (void)openMessageContentViewForFileHelper;
- (void)openEmoticonStoreView;
- (void)openFavoriteView;
- (void)openFavoriteViewWithSelectedType:(id)arg1;
- (void)openChatMigrationVC;
- (void)openPrivateConfigView;
- (void)openHelperView;
- (void)openBrandSession:(id)arg1;
- (void)openBrandProfile:(id)arg1 params:(id)arg2;
- (void)openTingAudio;
- (void)openTingMusic;
- (void)openMessageContentViewForFeature:(long long)arg1;
- (void)openContactPickerView;
- (void)openFinderLive;
- (void)openFinderUser:(id)arg1;
- (void)openChatBox;
- (void)openBrandTemplateMsg;
- (void)openKFContact:(id)arg1;
- (void)openWeShopItem:(id)arg1;
- (void)openVisionProLoginPage;
- (void)openBackupRestore;
- (void)openNewStorage;
- (void)openMinimizeTask:(id)arg1;
- (void)contactAddContactOk:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (id)filterUserName:(id)arg1;
- (void)onlineSearchContact;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)addContactFriendScene:(id)arg1;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)selectFeatureItem:(id)arg1;
- (void)onCreateChatRoom:(id)arg1;
- (void)onSelectCancel;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)openWXMiniGame;
- (void)doRegisterSearchModule;
- (void)doUnRegisterSearchModule;
- (void)onFTSContactSearchFinish:(id)arg1;
- (void)onFTSTopHitBeginSearch:(id)arg1;
- (void)onFTSTopHitFinishSearch:(id)arg1;
- (void)onFTSMemorySearchResultChanged:(BOOL)arg1;
- (void)onFTSHomePageMessageResultChanged:(BOOL)arg1;
- (void)onFTSHomePageFavResultChanged;
- (void)updateSearchContactSectionData;
- (void)onWASearchResultChanged;
- (void)onFTSFinderSearchResultChanged;
- (void)onFTSMinimizeTaskSearchResultChanged;
- (void)onFTSKFContactSearchResultChanged;
- (void)onFTSWeShopSearchResultChanged:(id)arg1;
- (id)initWithContentViewController:(id)arg1;
- (void)ftsCommonInit;
- (void)dealloc;
- (id)viewController;
- (BOOL)isLargeInputBox;
- (id)searchBarText;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)clearAllResource;
- (void)handleSearchEnd;
- (void)reloadSearchData;
- (void)reloadSearchDataAnimated:(BOOL)arg1;
- (void)updateSearchReport;
- (BOOL)isTotalSearchDone;
- (BOOL)onlyHasWebResult;
- (BOOL)hasResult;
- (long long)sectionIndex:(unsigned long long)arg1;
- (void)resetSearchSectionType;
- (id)logForSectionTypes;
- (id)searchResultList;
- (BOOL)isMsgTalkerSearchEntry:(long long)arg1;
- (BOOL)isMsgTalkerSearchEntry:(long long)arg1 resultsCount:(long long)arg2;
- (BOOL)isDisplayTalkerSearchEntry;
- (id)getExtInfo;
- (id)getExtInfoWithIsFromNewVoice:(BOOL)arg1;
- (unsigned int)getLogRowBeforeSectionType:(unsigned long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 resultsCount:(long long)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 resultsCount:(long long)arg3 sugType:(unsigned long long)arg4;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)doFTSSearch:(id)arg1;
- (void)cancelFTSSearch;
- (void)delaySearchImp:(id)arg1;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)doSearch:(id)arg1;
- (void)handleTextDidChange:(id)arg1;
- (void)resetDataSource;
- (void)onClickSearchButton:(BOOL)arg1;
- (void)directJumpToResultPage:(id)arg1 isFromNewVoiceInput:(BOOL)arg2;
- (void)tryRefreshSearchResult;
- (id)getItenUserNameWithCell:(id)arg1;
- (void)recordLocalSearchHistory:(id)arg1;
- (void)doS1SBarSearchWith:(id)arg1;
- (void)searchMoreFeatureItems;
- (void)onFeatureDetailViewSelectItem:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)selectMsgItem:(id)arg1;
- (void)selectMsgItems:(id)arg1 withSessionUsername:(id)arg2;
- (id)genContactWithMsgItem:(id)arg1;
- (void)selectMsgTalkerSearchEntry;
- (void)selectFavSearchItem:(id)arg1;
- (void)hideKeyboard;
- (void)onSelectContact:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)getViewController;
- (BOOL)shouldDisplayChatRoomEntry;
- (BOOL)isCreateChatRoomCellAtRow:(long long)arg1;
- (id)parseSeperatedKeyword:(id)arg1;
- (void)batchReportUnSelectedGroups:(id)arg1 exclude:(id)arg2;
- (void)batchReportContactExpose;
- (void)onDataChanged;
- (id)getFTSSearchText;
- (id)getSearchIntentionController;
- (void)onSearchDone;
- (unsigned long long)searchScene;
- (void)setSearchScene:(unsigned long long)arg1;
- (id)newestSearchText;
- (id)markExposeSet;
- (void)setMarkExposeSet:(id)arg1;
- (id)pluginScheduler;
- (void)setPluginScheduler:(id)arg1;
- (id)clickContextInfo;
- (void)setClickContextInfo:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)page;
- (void)setPage:(id)arg1;
- (id)searchIntentionController;
- (void)setSearchIntentionController:(id)arg1;
- (double)fixedKeyboardHeight;
- (void)setFixedKeyboardHeight:(double)arg1;
- (id)latestCompeleteWebSearchQuery;
- (void)setLatestCompeleteWebSearchQuery:(id)arg1;
- (BOOL)isFromVoice;
- (void)setIsFromVoice:(BOOL)arg1;
- (BOOL)isKeyBoardSearch;
- (void)setIsKeyBoardSearch:(BOOL)arg1;
- (BOOL)isReplaceText;
- (void)setIsReplaceText:(BOOL)arg1;
- (BOOL)disableRawQuerySug;
- (void)setDisableRawQuerySug:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
