@interface MMFinderLiveOnlineStateView : MMLiveOnlineStateView <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, MMFinderLiveOnlineStateCollectionViewCellDelegate, MMFinderLiveRecentRewardCollectionCellDelegate, MMFinderLiveOnlineUserLogicDelegate, MMFinderLiveGloryTopViewDelegate, MMPageSheetAdapterDelegate>
{
    BOOL isOpening; // +0x8
    BOOL _shouldShowRewardAmount; // +0x9
    BOOL _shouldHeatValue; // +0xa
    BOOL _liveRewardEnabled; // +0xb
    BOOL _showNewRewardCountAndHeatValueStyle; // +0xc
    BOOL _shouldRunningRank; // +0xd
    BOOL _newStyleEnableFlag; // +0xe
    BOOL _needShowNoUserLabel; // +0xf
    BOOL _gloryListDataPrepared; // +0x10
    BOOL _onlineStateUsersDataPrepared; // +0x11
    unsigned int _liveOnlineMemberBoardVersion; // +0x14
    MMFinderLiveOnlineUserLogic * onlineUserLogic; // +0x18
    id <MMFinderLiveOnlineStateViewDataSource> _dataSource; // +0x20
    unsigned long long _rewardTotalAmountInHeat; // +0x28
    unsigned long long _heatValue; // +0x30
    NSString * _liveHeatValueStr; // +0x38
    unsigned long long _paidUserCount; // +0x40
    NSString * _liveParticipateMemberCountStr; // +0x48
    NSString * _liveOnlineCountStr; // +0x50
    NSString * _anonymousOnlineCountStr; // +0x58
    UICollectionView * _onlineUsersCollectionView; // +0x60
    WCPinBottomCollectionViewFlowLayout * _onlineUsersCollectionLayout; // +0x68
    NSMutableArray * _recentRewardCache; // +0x70
    RichTextView * _noUserLabel; // +0x78
    MMUIActivityIndicatorView * _onlineContentLoadingView; // +0x80
    NSMutableArray * _sessionInfos; // +0x88
    NSMutableArray * _onlineUsersSessionInfos; // +0x90
    unsigned long long _previewLiveOnlineMemberCount; // +0x98
    MMFinderLiveOnlineStateSessionInfo * _glorySessionInfo; // +0xa0
    MMPageSheetAdapter * _pageSheetAdapter; // +0xa8
    MMFinderLiveOnlineStateRewardCountView * _rewardCountView; // +0xb0
    MMFinderLiveGloryTopView * _gloryTopView; // +0xb8
    NSMutableArray * _gloryContacts; // +0xc0
    UIView * _adContainerView; // +0xc8
    MMWebImageView * _adImageView; // +0xd0
    UILabel * _adLogoLabel; // +0xd8
    UIView * _titleBarMaskView; // +0xe0
    NSString * _onlineStateAdUrl; // +0xe8
    unsigned long long _watchAdStartTs; // +0xf0
    MMFinderLiveUserStateItem * _myUserStateItem; // +0xf8
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (id)liveTask;
- (id)getNoUserLabelTitle;
- (void)updateTitleBarTitle;
- (void)updateTitleBarTitleForNewStyle;
- (void)updateTitleBarSubTitle;
- (void)updateSubTitleForUnpublicWith:(id)arg1;
- (void)updateSubTitleForPublicWith:(id)arg1;
- (id)getOnlineButtonTitle:(unsigned long long)arg1;
- (void)initView;
- (void)reloadData;
- (void)reloadSubtitleAndOnlineUsersView;
- (void)layoutContentView;
- (void)reloadCollectionViewIfNeedWith:(CGSize)arg1;
- (void)updateTitleBarContentsAlphaWith:(id)arg1;
- (void)layoutAdContainerView;
- (void)updateCollectionViewTop;
- (void)layoutLoadingView;
- (void)layoutNoUserLabel;
- (double)getNoUserLabelHeight;
- (id)createSectionHeaderForSessionInfo:(id)arg1 size:(CGSize)arg2;
- (id)createTableFooterViewForTitle:(id)arg1 size:(CGSize)arg2;
- (void)showMoreRecentReward;
- (void)removeRewardCountViewFromSessionInfos;
- (void)addRewardCountViewFromSessionInfos;
- (void)onHeadImageClicked:(id)arg1 userItem:(id)arg2;
- (void)onGloryHeadImageClickWith:(id)arg1;
- (void)onGloryTopViewTipsClick;
- (void)onSelectGiftButtonClickedWithUserItem:(id)arg1;
- (void)onSwitchAcountPubbleClick:(id)arg1;
- (id)onlineUsersScrollView;
- (BOOL)showRewardUserOnly;
- (id)onlineUsersCollectionLayout;
- (id)onlineUsersCollectionView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (id)adContainerView;
- (id)titleBarMaskView;
- (id)adLogoLabel;
- (id)adImageView;
- (void)setOnlineViewCount:(unsigned long long)arg1;
- (void)setOnlineUserCount:(long long)arg1;
- (void)setRewardTotalAmountInHeat:(unsigned long long)arg1;
- (void)setHeatValue:(unsigned long long)arg1;
- (void)setShouldShowRewardAmount:(BOOL)arg1;
- (void)setShouldHeatValue:(BOOL)arg1;
- (void)setLiveRewardEnabled:(BOOL)arg1;
- (void)setShowNewRewardCountAndHeatValueStyle:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setContentViewBackground;
- (void)layoutHalfScreenContentView;
- (BOOL)shouldInstallCollectionViewInteractivePan;
- (BOOL)shouldInstallContentViewPanGesture;
- (void)startLoadingAnimation;
- (void)openWithAnimation:(BOOL)arg1 completeBlock:(id /* block */)arg2;
- (void)closeWithAnimation:(BOOL)arg1;
- (void)reportOnlineStateAd:(unsigned long long)arg1;
- (void)fetchOnlineUserList;
- (void)onIntroductionButtonClicked;
- (void)pageSheetWillAppear:(id)arg1;
- (void)pageSheetDidAppear:(id)arg1;
- (void)pageSheetWillClose:(id)arg1 isManualTrigger:(BOOL)arg2;
- (void)pageSheetDidDisappear:(id)arg1;
- (void)updateTitleBarColor;
- (void)tryCommitOnlineStateViewDataUpdate;
- (void)updatePinnedBottomIndex;
- (void)resetDataPreparedStatus;
- (BOOL)onlineStateViewDataPrepared;
- (void)onGetLiveGloryList:(id)arg1 error:(id)arg2;
- (void)setupGloryListModelWith:(id)arg1 error:(id)arg2;
- (void)onFetchFinderOnlineUserListWithError:(id)arg1 onlineMemberResult:(id)arg2;
- (void)setupOnlineStateViewModelWith:(id)arg1 result:(id)arg2;
- (void)setupNeedShowNoUserLabelModelWith:(id)arg1;
- (void)setupOnlineUsersModelWith:(id)arg1 recentRewardUserItems:(id)arg2 result:(id)arg3;
- (void)updateOnlineUsersRankWith:(id)arg1 onlineUserStateItems:(id)arg2;
- (void)setupRecentRewardUsersWith:(id)arg1 result:(id)arg2;
- (void)setupOnlineUsersWith:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)liveShowPrivacyIdentity;
- (void)onClickLastOneItem:(id)arg1;
- (BOOL)needShowGloryList;
- (id)onlineUserLogic;
- (void)setOnlineUserLogic:(id)arg1;
- (BOOL)isOpening;
- (void)setIsOpening:(BOOL)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (BOOL)shouldShowRewardAmount;
- (BOOL)shouldHeatValue;
- (BOOL)liveRewardEnabled;
- (unsigned long long)rewardTotalAmountInHeat;
- (unsigned long long)heatValue;
- (id)liveHeatValueStr;
- (void)setLiveHeatValueStr:(id)arg1;
- (BOOL)isShowNewRewardCountAndHeatValueStyle;
- (BOOL)shouldRunningRank;
- (void)setShouldRunningRank:(BOOL)arg1;
- (BOOL)newStyleEnableFlag;
- (void)setNewStyleEnableFlag:(BOOL)arg1;
- (unsigned long long)paidUserCount;
- (void)setPaidUserCount:(unsigned long long)arg1;
- (id)liveParticipateMemberCountStr;
- (void)setLiveParticipateMemberCountStr:(id)arg1;
- (id)liveOnlineCountStr;
- (void)setLiveOnlineCountStr:(id)arg1;
- (unsigned int)liveOnlineMemberBoardVersion;
- (void)setLiveOnlineMemberBoardVersion:(unsigned int)arg1;
- (id)anonymousOnlineCountStr;
- (void)setAnonymousOnlineCountStr:(id)arg1;
- (void)setOnlineUsersCollectionView:(id)arg1;
- (void)setOnlineUsersCollectionLayout:(id)arg1;
- (id)recentRewardCache;
- (void)setRecentRewardCache:(id)arg1;
- (id)noUserLabel;
- (void)setNoUserLabel:(id)arg1;
- (id)onlineContentLoadingView;
- (void)setOnlineContentLoadingView:(id)arg1;
- (BOOL)needShowNoUserLabel;
- (void)setNeedShowNoUserLabel:(BOOL)arg1;
- (id)sessionInfos;
- (void)setSessionInfos:(id)arg1;
- (id)onlineUsersSessionInfos;
- (void)setOnlineUsersSessionInfos:(id)arg1;
- (unsigned long long)previewLiveOnlineMemberCount;
- (void)setPreviewLiveOnlineMemberCount:(unsigned long long)arg1;
- (id)glorySessionInfo;
- (void)setGlorySessionInfo:(id)arg1;
- (id)pageSheetAdapter;
- (void)setPageSheetAdapter:(id)arg1;
- (id)rewardCountView;
- (void)setRewardCountView:(id)arg1;
- (BOOL)gloryListDataPrepared;
- (void)setGloryListDataPrepared:(BOOL)arg1;
- (BOOL)onlineStateUsersDataPrepared;
- (void)setOnlineStateUsersDataPrepared:(BOOL)arg1;
- (id)gloryTopView;
- (void)setGloryTopView:(id)arg1;
- (id)gloryContacts;
- (void)setGloryContacts:(id)arg1;
- (void)setAdContainerView:(id)arg1;
- (void)setAdImageView:(id)arg1;
- (void)setAdLogoLabel:(id)arg1;
- (void)setTitleBarMaskView:(id)arg1;
- (id)onlineStateAdUrl;
- (void)setOnlineStateAdUrl:(id)arg1;
- (unsigned long long)watchAdStartTs;
- (void)setWatchAdStartTs:(unsigned long long)arg1;
- (id)myUserStateItem;
- (void)setMyUserStateItem:(id)arg1;
- (void).cxx_destruct;
@end

