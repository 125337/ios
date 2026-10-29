@interface MMLiveRewardGiftSearchPanelView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMLiveRewardGiftPreviewWindowDelegate, MMLiveRewardGiftAIGCOperationPanelDelegate, MMLiveRewardGiftCustomizationTipViewDelegate, MMLiveRewardGiftCustomizationTextPageSheetDelegate, MMLiveRewardGiftAttackContactSelectionLogicDelegate>
{
    BOOL _isSearchMode; // +0x8
    BOOL _newGiftSectionVisible; // +0x9
    BOOL _hasReportedNewGiftSectionExpose; // +0xa
    BOOL _hasReportedSearchResultExpose; // +0xb
    BOOL _hasSubmittedSearch; // +0xc
    BOOL _identityEntranceEnhancementEnabled; // +0xd
    BOOL _isPageLoading; // +0xe
    BOOL _wecoinBalanceUpdated; // +0xf
    BOOL _fetchWecoinBalanceFinished; // +0x10
    unsigned int _continueFlag; // +0x14
    unsigned int _selectedGiftSearchSource; // +0x18
    id <MMLiveRewardGiftSelectionViewDelegate> _viewDelegate; // +0x20
    id <MMLiveRewardGiftSelectionLogicDelegate> _logicDelegate; // +0x28
    MMLiveRewardGiftSelectionView * _hostSelectionView; // +0x30
    unsigned long long _selectionMode; // +0x38
    NSData * _currentTabCtx; // +0x40
    NSString * _searchSessionUUID; // +0x48
    MMFinderLiveTaskId * _taskId; // +0x50
    MMUIView * _contentView; // +0x58
    MMLiveHalfScreenTitleBarView * _mainTitleBar; // +0x60
    MMLiveRewardGiftCoinButton * _coinsButton; // +0x68
    UIView * _headerView; // +0x70
    MMUISearchBar * _searchBar; // +0x78
    UITableView * _suggestionTableView; // +0x80
    NSArray * _suggestions; // +0x88
    double _suggestionIconLeft; // +0x90
    UIView * _resultBackView; // +0x98
    CAGradientLayer * _resultBackMaskGradientLayer; // +0xa0
    UICollectionView * _resultCollectionView; // +0xa8
    NSMutableArray * _searchResultItems; // +0xb0
    NSData * _lastBuffer; // +0xb8
    NSMutableArray * _newedGiftItems; // +0xc0
    double _newGiftWholeScrollHeaderHeight; // +0xc8
    UILabel * _newedGiftTitleLabel; // +0xd0
    UICollectionView * _newedGiftCollectionView; // +0xd8
    NSString * _searchSessionId; // +0xe0
    NSData * _searchExtraInfo; // +0xe8
    NSMutableArray * _searchResultExtraInfos; // +0xf0
    NSMutableArray * _newedGiftExtraInfos; // +0xf8
    NSMutableSet * _exposedSearchItemPositions; // +0x100
    NSMutableSet * _exposedNewGiftItemPositions; // +0x108
    long long _selectedGiftSearchPosition; // +0x110
    NSData * _selectedGiftSearchExtraInfo; // +0x118
    MMUIActivityIndicatorView * _loadingIndicator; // +0x120
    UILabel * _statusLabel; // +0x128
    UIView * _privilegeEntranceView; // +0x130
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x138
    UILabel * _identityStatusLabel; // +0x140
    MMCPLabel * _nextLevelWecoinAmountLabel; // +0x148
    UIImageView * _arrowView; // +0x150
    WCFinderHeadImageView * _identityHeadImageView; // +0x158
    UIImageView * _identitySwitchIconView; // +0x160
    MMUILabel * _identityNicknameLabel; // +0x168
    UIView * _wholeProgressView; // +0x170
    UIView * _currentProgressView; // +0x178
    CAGradientLayer * _currentProgressGradientLayer; // +0x180
    CALayer * _currentProgressColorLayer; // +0x188
    UIView * _loadMoreRetryView; // +0x190
    MMLiveRewardGiftSendingCountMenuBar * _sendingCountMenuBar; // +0x198
    MMFinderLiveRewardGiftItem * _longPressedGiftItem; // +0x1a0
    MMNormalTipsView * _giftMultipleSendTipsView; // +0x1a8
    MMNormalTipsView * _packageGiftSendTipsView; // +0x1b0
    MMLiveRewardGiftAttackContactBubbleView * _giftAttackContactBubbleView; // +0x1b8
    MMNormalTipsView * _attackGiftSendTipsView; // +0x1c0
    long long _requestGeneration; // +0x1c8
    unsigned long long _searchRoomLiveId; // +0x1d0
    long long _balance; // +0x1d8
    NSTimer * _debounceTimer; // +0x1e0
    NSString * _lastSuggestionRequest; // +0x1e8
    NSArray * _allSuggestionsCache; // +0x1f0
    NSString * _lastServerSuggestionInput; // +0x1f8
    MMLiveRewardGiftPreviewWindow * _previewWindow; // +0x200
    UICollectionView * _previewHostCollectionView; // +0x208
    MMLiveRewardGiftCustomizationTipView * _customizationTipView; // +0x210
    MMLiveRewardGiftNewCustomizationTipView * _newedCustomizationTipView; // +0x218
    MMLiveRewardGiftNewCustomizationSettingPanel * _newedCustomizationSettingPanel; // +0x220
    MMLiveRewardGiftAIGCOperationPanel * _aigcPanel; // +0x228
    MMFinderLiveFansGroupIntimacyInfo * _fansGroupIntimacyInfo; // +0x230
}
- (id)initWithTaskId:(id)arg1 selectionMode:(unsigned long long)arg2;
- (void)dealloc;
- (void)initView;
- (void)fetchFansGroupIntimacyIfNeeded;
- (unsigned int)selfFanClubLevelForGiftCheck;
- (void)initPrivilegeEntranceView;
- (double)pageSheetContentHeight;
- (void)reloadDataForPrivilegeEntranceView;
- (void)handlePrivilegeEntranceTapped;
- (id)liveTask;
- (void)fetchWecoinBalance;
- (void)updateWecoinBalance:(long long)arg1;
- (void)onCoinButtonClicked;
- (id)headerView;
- (id)searchBar;
- (id)suggestionTableView;
- (id)resultBackView;
- (id)resultCollectionView;
- (id)loadingIndicator;
- (id)statusLabel;
- (void)layoutSubviews;
- (BOOL)isNewGiftSectionDisplayable;
- (void)updateNewGiftSectionContentViewsWithWholeScroll:(BOOL)arg1;
- (void)updateSuggestionIconLeft;
- (void)reloadSuggestionData;
- (void)adjustSearchBarInnerIcons;
- (void)updateSearchBarClearButtonIcon;
- (id)searchBarTextField;
- (id)recursiveFindViewOfClass:(Class)arg1 inView:(id)arg2;
- (id)recursiveFindClearButtonInView:(id)arg1;
- (void)onPageSheetShowInContainer:(id)arg1;
- (void)dismissWithFade;
- (void)dismissSelfAndHost;
- (void)notifyLogicRewardSource:(unsigned int)arg1;
- (void)notifyLogicRewardSearchSessionId:(id)arg1;
- (void)notifyLogicRewardSearchIndex:(id)arg1;
- (id)generateSearchSessionIdWithKeyword:(id)arg1;
- (id)searchGiftIndexStringWithPosition:(long long)arg1;
- (void)clearGiftSearchReportState;
- (void)selectGiftSearchAttributionInCollectionView:(id)arg1 position:(long long)arg2;
- (void)reportVisibleSearchGiftItems;
- (id)rewardExtInfoByFillingSearchExtraInfo:(id)arg1;
- (void)layoutPrivilegeEntranceView;
- (void)updateIdentityHeadImageAndNickname;
- (void)onIdentityHeadImageTapped;
- (void)updateCurrentProgressLayers;
- (void)createCurrentProgressGradientLayer;
- (void)createCurrentProgressColorLayer;
- (void)updateResultCollectionLayout;
- (void)hideAllStateViews;
- (void)showSearchIdle;
- (void)showSearchLoading;
- (void)showSearchResult;
- (void)showSearchEmpty;
- (void)showSearchError;
- (void)onErrorRetryTapped;
- (void)showLoadMoreRetryView;
- (void)removeLoadMoreRetryView;
- (BOOL)isCallbackValid:(long long)arg1;
- (BOOL)isSameCursor:(id)arg1 newCursor:(id)arg2;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)fetchSuggestionsWithInput:(id)arg1 generation:(long long)arg2;
- (id)localPrefixMatchSuggestions:(id)arg1;
- (void)mergeSuggestionsToCache:(id)arg1;
- (void)submitSearch:(id)arg1;
- (void)submitSearch:(id)arg1 reportAction:(unsigned long long)arg2 reportSearchTxt:(id)arg3;
- (void)requestSearchPage:(BOOL)arg1;
- (void)loadMoreSearchResults;
- (void)tryLoadMoreIfNeeded;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dismissAccessories;
- (void)onLongPressNormalGiftItemInCollectionView:(id)arg1 giftItem:(id)arg2 atIndexPath:(id)arg3;
- (void)onLongPressAttackContactGiftItemInCollectionView:(id)arg1 giftItem:(id)arg2 atIndexPath:(id)arg3;
- (void)tryShowAttackGiftSendTipsViewInCollectionView:(id)arg1 giftItem:(id)arg2 atIndexPath:(id)arg3;
- (void)openAttackGiftHelpWebView;
- (void)onSelectLiveRewardGiftAttackContact:(id)arg1 pageSheetView:(id)arg2;
- (void)onSelectLiveRewardGiftAttackContactFinished:(id)arg1;
- (void)showPreviewWindowWithGiftItem:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3;
- (id)designerMenuContentViewForGiftItem:(id)arg1;
- (void)onCustomizationMenuItemTapped:(id)arg1 giftItem:(id)arg2;
- (void)sendRewardGiftWithGiftItem:(id)arg1;
- (void)commitCustomizationForModel:(id)arg1 blocking:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (unsigned int)getCurrentLevel;
- (id)indexPathForGiftItemWithProductId:(id)arg1 inCollectionView:(id *)arg2;
- (void)layoutCustomizationTipViewAnimated:(BOOL)arg1 prelayoutActions:(id /* block */)arg2;
- (void)onGiftCustomizationTipViewExpandButtonTapped:(id)arg1;
- (void)onGiftCustomizationTipViewStyleSelectionChanged:(id)arg1;
- (void)onGiftCustomizationTipViewTextCustomizationButtonTapped:(id)arg1;
- (void)onGiftTextCustomizationCanceled:(id)arg1 model:(id)arg2;
- (void)onGiftTextCustomizationConfirmed:(id)arg1 model:(id)arg2;
- (void)onGiftTextCustomizationCleared:(id)arg1 model:(id)arg2;
- (void)tryShowNewCustomizationTipViewInCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (void)showNewCustomizationSettingPanel:(id)arg1 inCollectionView:(id)arg2 atIndexPath:(id)arg3 recoverPreviewWindow:(BOOL)arg4;
- (void)updateNewedCustomizationTipViewOriginInCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (void)dismissNewedCustomizationTipView;
- (id)rewardGiftCellInCollectionView:(id)arg1 atIndexPath:(id)arg2;
- (void)showAIGCOperationPanel:(id)arg1;
- (void)_showAIGCOperationPanel:(id)arg1;
- (void)onLiveRewardAIGCGiftOperationPageViewWillClose;
- (void)onLiveRewardAIGCGiftOperationPageShouldReturnToGiftPanel;
- (void)onClickActivityUnlockGiftJumpAction:(id)arg1 giftItem:(id)arg2;
- (void)onClickAIGCGiftJumpAction:(id)arg1 giftItem:(id)arg2;
- (void)show;
- (void)prefetchAllSuggestions;
- (void)pageSheetWillClose:(BOOL)arg1;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)viewDelegate;
- (void)setViewDelegate:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)hostSelectionView;
- (void)setHostSelectionView:(id)arg1;
- (unsigned long long)selectionMode;
- (void)setSelectionMode:(unsigned long long)arg1;
- (id)currentTabCtx;
- (void)setCurrentTabCtx:(id)arg1;
- (id)searchSessionUUID;
- (void)setSearchSessionUUID:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)mainTitleBar;
- (void)setMainTitleBar:(id)arg1;
- (id)coinsButton;
- (void)setCoinsButton:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setSearchBar:(id)arg1;
- (void)setSuggestionTableView:(id)arg1;
- (id)suggestions;
- (void)setSuggestions:(id)arg1;
- (double)suggestionIconLeft;
- (void)setSuggestionIconLeft:(double)arg1;
- (void)setResultBackView:(id)arg1;
- (id)resultBackMaskGradientLayer;
- (void)setResultBackMaskGradientLayer:(id)arg1;
- (void)setResultCollectionView:(id)arg1;
- (id)searchResultItems;
- (void)setSearchResultItems:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned int)continueFlag;
- (void)setContinueFlag:(unsigned int)arg1;
- (BOOL)isSearchMode;
- (void)setIsSearchMode:(BOOL)arg1;
- (id)newedGiftItems;
- (void)setNewedGiftItems:(id)arg1;
- (BOOL)newGiftSectionVisible;
- (void)setNewGiftSectionVisible:(BOOL)arg1;
- (double)newGiftWholeScrollHeaderHeight;
- (void)setNewGiftWholeScrollHeaderHeight:(double)arg1;
- (id)newedGiftTitleLabel;
- (void)setNewedGiftTitleLabel:(id)arg1;
- (id)newedGiftCollectionView;
- (void)setNewedGiftCollectionView:(id)arg1;
- (BOOL)hasReportedNewGiftSectionExpose;
- (void)setHasReportedNewGiftSectionExpose:(BOOL)arg1;
- (id)searchSessionId;
- (void)setSearchSessionId:(id)arg1;
- (id)searchExtraInfo;
- (void)setSearchExtraInfo:(id)arg1;
- (BOOL)hasReportedSearchResultExpose;
- (void)setHasReportedSearchResultExpose:(BOOL)arg1;
- (id)searchResultExtraInfos;
- (void)setSearchResultExtraInfos:(id)arg1;
- (id)newedGiftExtraInfos;
- (void)setNewedGiftExtraInfos:(id)arg1;
- (id)exposedSearchItemPositions;
- (void)setExposedSearchItemPositions:(id)arg1;
- (id)exposedNewGiftItemPositions;
- (void)setExposedNewGiftItemPositions:(id)arg1;
- (unsigned int)selectedGiftSearchSource;
- (void)setSelectedGiftSearchSource:(unsigned int)arg1;
- (long long)selectedGiftSearchPosition;
- (void)setSelectedGiftSearchPosition:(long long)arg1;
- (id)selectedGiftSearchExtraInfo;
- (void)setSelectedGiftSearchExtraInfo:(id)arg1;
- (BOOL)hasSubmittedSearch;
- (void)setHasSubmittedSearch:(BOOL)arg1;
- (void)setLoadingIndicator:(id)arg1;
- (void)setStatusLabel:(id)arg1;
- (id)privilegeEntranceView;
- (void)setPrivilegeEntranceView:(id)arg1;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)identityStatusLabel;
- (void)setIdentityStatusLabel:(id)arg1;
- (id)nextLevelWecoinAmountLabel;
- (void)setNextLevelWecoinAmountLabel:(id)arg1;
- (id)arrowView;
- (void)setArrowView:(id)arg1;
- (id)identityHeadImageView;
- (void)setIdentityHeadImageView:(id)arg1;
- (id)identitySwitchIconView;
- (void)setIdentitySwitchIconView:(id)arg1;
- (id)identityNicknameLabel;
- (void)setIdentityNicknameLabel:(id)arg1;
- (id)wholeProgressView;
- (void)setWholeProgressView:(id)arg1;
- (id)currentProgressView;
- (void)setCurrentProgressView:(id)arg1;
- (id)currentProgressGradientLayer;
- (void)setCurrentProgressGradientLayer:(id)arg1;
- (id)currentProgressColorLayer;
- (void)setCurrentProgressColorLayer:(id)arg1;
- (BOOL)identityEntranceEnhancementEnabled;
- (void)setIdentityEntranceEnhancementEnabled:(BOOL)arg1;
- (BOOL)isPageLoading;
- (void)setIsPageLoading:(BOOL)arg1;
- (id)loadMoreRetryView;
- (void)setLoadMoreRetryView:(id)arg1;
- (id)sendingCountMenuBar;
- (void)setSendingCountMenuBar:(id)arg1;
- (id)longPressedGiftItem;
- (void)setLongPressedGiftItem:(id)arg1;
- (id)giftMultipleSendTipsView;
- (void)setGiftMultipleSendTipsView:(id)arg1;
- (id)packageGiftSendTipsView;
- (void)setPackageGiftSendTipsView:(id)arg1;
- (id)giftAttackContactBubbleView;
- (void)setGiftAttackContactBubbleView:(id)arg1;
- (id)attackGiftSendTipsView;
- (void)setAttackGiftSendTipsView:(id)arg1;
- (long long)requestGeneration;
- (void)setRequestGeneration:(long long)arg1;
- (unsigned long long)searchRoomLiveId;
- (void)setSearchRoomLiveId:(unsigned long long)arg1;
- (long long)balance;
- (void)setBalance:(long long)arg1;
- (BOOL)wecoinBalanceUpdated;
- (void)setWecoinBalanceUpdated:(BOOL)arg1;
- (BOOL)fetchWecoinBalanceFinished;
- (void)setFetchWecoinBalanceFinished:(BOOL)arg1;
- (id)debounceTimer;
- (void)setDebounceTimer:(id)arg1;
- (id)lastSuggestionRequest;
- (void)setLastSuggestionRequest:(id)arg1;
- (id)allSuggestionsCache;
- (void)setAllSuggestionsCache:(id)arg1;
- (id)lastServerSuggestionInput;
- (void)setLastServerSuggestionInput:(id)arg1;
- (id)previewWindow;
- (void)setPreviewWindow:(id)arg1;
- (id)previewHostCollectionView;
- (void)setPreviewHostCollectionView:(id)arg1;
- (id)customizationTipView;
- (void)setCustomizationTipView:(id)arg1;
- (id)newedCustomizationTipView;
- (void)setNewedCustomizationTipView:(id)arg1;
- (id)newedCustomizationSettingPanel;
- (void)setNewedCustomizationSettingPanel:(id)arg1;
- (id)aigcPanel;
- (void)setAigcPanel:(id)arg1;
- (id)fansGroupIntimacyInfo;
- (void)setFansGroupIntimacyInfo:(id)arg1;
- (void).cxx_destruct;
@end
