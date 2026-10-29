@interface BraceletRankViewController : MMUIViewController <MMSightCameraViewControllerDelegate, WCCommitViewResultDelegate, UITableViewDelegate, UITableViewDataSource, IDeviceRankSnsMgrExt, IDeviceRankProfileMgrExt, IDeviceRankWorkoutMgrExt, WCActionSheetDelegate, MMWebImageViewDelegate, ForwardMessageLogicDelegate, MMImageLoaderObserver, BraceletAbroadRankViewDelegate, BraceletRankProfileViewControllerDelegate>
{
    MMTableView * _tableView; // +0x70
    UIView * _tableHeaderView; // +0x78
    UIView * _championTipView; // +0x80
    MMWebImageView * _championCoverView; // +0x88
    UIImageView * _leaderView; // +0x90
    MMUILabel * _tipLablel; // +0x98
    NSString * _rankId; // +0xa0
    NSDictionary * _infoDic; // +0xa8
    NSString * _championCoverUrl; // +0xb0
    NSString * _championMotto; // +0xb8
    NSMutableArray * _rankInfoArray; // +0xc0
    NSTimer * m_disappearTimer; // +0xc8
    BOOL _bExpired; // +0xd0
    NSString * _nsScrollToName; // +0xd8
    NSString * _nsJumpChampionUrl; // +0xe0
    BOOL _isLikedCover; // +0xe8
    BOOL _hasCoverUrl; // +0xe9
    NSString * _donateStepsUrl; // +0xf0
    NSString * _nsShareTitle; // +0xf8
    NSString * _nsShareUrl; // +0x100
    NSString * _nsSelfCoverUrl; // +0x108
    unsigned int _iEntranceScence; // +0x110
    UIImageView * _blurView; // +0x118
    UIImage * _snapShotImg; // +0x120
    BOOL _isBluring; // +0x128
    RankExtInfo * m_rankExtInfo; // +0x130
    DeviceRankInfo * m_myselfRankInfo; // +0x138
    NSMutableSet * friendLikeSet; // +0x140
    UIView * m_oTableFooterView; // +0x148
    ForwardMessageLogicController * m_forwardLogic; // +0x150
    MMHeadImageView * m_oHeadImageView; // +0x158
    BOOL m_bAbroad; // +0x160
    BraceletRankUtils * m_oBraceletRankUtils; // +0x168
    UIImage * m_oSelfCoverImage; // +0x170
    long long _timestamp; // +0x178
    BOOL _needShowCheckInSheet; // +0x180
    BOOL _hasReportedCheckInButtonExposure; // +0x181
    BOOL _hasReportedZeroStep; // +0x182
    BOOL _hasInitPageInParams; // +0x183
    BOOL _showOwnSportRecord; // +0x184
    int _hardwareRecordCount; // +0x188
    int _workoutRecordCount; // +0x18c
    int _showFriendCount; // +0x190
    NSString * _championUsername; // +0x198
    UIView * _championView; // +0x1a0
    UILabel * _currentDayLabel; // +0x1a8
    MMHeadImageView * _championHeadImageView; // +0x1b0
    UILabel * _championDisplayLabel; // +0x1b8
    BraceletChampionTailView * _championTailView; // +0x1c0
    CAGradientLayer * _gradientLayer; // +0x1c8
    NSMutableArray * _likeMeUserList; // +0x1d0
    NSMutableArray * _focusArray; // +0x1d8
    NSMutableArray * _focusInfoArray; // +0x1e0
    NSMutableArray * _werunTargetList; // +0x1e8
    UIView * _pullDownBackgroundView; // +0x1f0
    NSString * _reportSessionId; // +0x1f8
    SportRecord * _myOriginSportRecord; // +0x200
    NSNumber * _ownSportRecordType; // +0x208
}
+ (BOOL)launchDonateStepWAApp:(id)arg1 fromRank:(BOOL)arg2;
- (id)initWithRankInfoDictionary:(id)arg1 bExpire:(BOOL)arg2;
- (id)initForLatestRank;
- (id)initForCheckIn;
- (id)initWithLikeUserInfoDictionary:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidPop:(BOOL)arg1;
- (void)dealloc;
- (void)initData;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)initNotSupportView;
- (void)initTableView;
- (void)clickCheckInBtn;
- (void)goCheckIn;
- (void)showWorkoutCheckInSheet;
- (BOOL)canShowChampionTailView;
- (void)updateHeadImageView;
- (void)updateInfoViewSnapshot;
- (void)openChampionProfile;
- (id)braceletRankUtils;
- (void)onRankProfile;
- (void)onClickLike:(id)arg1;
- (void)animatChangeLikeStateForUser:(id)arg1 isTolikeState:(BOOL)arg2;
- (void)onSingleTap:(id)arg1;
- (void)updateTableBgView;
- (double)p_reservedUnitWidthForRankInfo:(id)arg1 font:(id)arg2;
- (void)updateRankListReservedUnitWidth;
- (void)reloadTable;
- (void)updateTableFooterView;
- (void)clickToInviteFriend:(id)arg1;
- (void)onRankInfoClicked:(id)arg1;
- (void)setChampionUsername:(id)arg1;
- (id)currentDayLabel;
- (id)championHeadImageView;
- (id)championDisplayLabel;
- (void)initChampionTailView;
- (id)gradientLayer;
- (id)likeMeUserList;
- (id)focusArray;
- (id)focusInfoArray;
- (id)removeAllNumberAndComma:(id)arg1;
- (id)defaultChampionCoverImage;
- (void)addRightBarButtonForShare;
- (void)setTipsForSettingCoverVisible:(BOOL)arg1;
- (BOOL)shouldChangeChampionCover:(id)arg1;
- (void)addBkgView;
- (void)addChampionView;
- (double)p_navBarFadeInStartOffset;
- (double)p_navBarFadeInEndOffset;
- (id)genChampionView;
- (void)layoutChampionView;
- (void)updateMyCover:(id)arg1;
- (BOOL)shouldChangeMyCover:(id)arg1;
- (void)updateChampionCover:(id)arg1;
- (void)updateChampionTailView;
- (id)checkInRankModuleHeaderViewWithTitle:(id)arg1 showCheckInButton:(BOOL)arg2 showTopSeparator:(BOOL)arg3;
- (double)checkInRankModuleHeaderHeightWithTitle:(id)arg1 showCheckInButton:(BOOL)arg2 showTopSeparator:(BOOL)arg3;
- (BOOL)checkInRankModuleHasContentInSection:(long long)arg1;
- (BOOL)shouldShowCheckInRankModuleSeparatorBeforeSection:(long long)arg1;
- (id)getRankInfoAtIndexPath:(id)arg1;
- (void)makeCell:(id)arg1 AtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (BOOL)p_shouldShowCheckInButton;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)onReceivedRankingResp:(id)arg1 rankId:(id)arg2 success:(BOOL)arg3;
- (void)cacheRankList:(id)arg1 forRankId:(id)arg2;
- (id)getRankListCachePath:(id)arg1;
- (void)updateDataForResp:(id)arg1;
- (void)reportRankPageIn;
- (void)reportZeroStepIfNeeded;
- (unsigned long long)p_zeroStepReasonWithLocalStep:(unsigned int)arg1 sportsAuthStatus:(unsigned int)arg2;
- (unsigned int)p_todayLocalStepCount;
- (void)updateViewForResp:(id)arg1;
- (id)convertRankingInfoFromRawItem:(id)arg1;
- (void)refreshRankingDataWith:(id)arg1;
- (void)refreshLikedMeDataWith:(id)arg1;
- (void)mergeLikeCountWith:(id)arg1;
- (void)sortMyFollows;
- (void)refreshFollowsDataWith:(id)arg1;
- (void)updateChampionUsername;
- (void)onClickChampionTailView;
- (void)onLikeFriendRank:(id)arg1 optype:(unsigned int)arg2 err:(int)arg3;
- (void)onGetWeRunTargetList:(id)arg1 err:(int)arg2;
- (void)operateWeRunTarget:(id)arg1 optype:(int)arg2 err:(int)arg3;
- (void)p_updateTargetListWithTargets:(id)arg1;
- (void)p_updateSelfWorkoutRecordWithTargets:(id)arg1 preferredTargets:(id)arg2;
- (void)scrollToLikeUser;
- (void)scrollViewDidScroll:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)onCoverImageChanged;
- (void)onAddFollowWithFollowItems:(id)arg1 error:(int)arg2;
- (void)onDelFollowWithUserName:(id)arg1 error:(int)arg2;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (void)onShare;
- (void)launchChatStepRank;
- (void)shareToFriend;
- (void)shareToTimeline;
- (void)donateSteps;
- (void)launchDonateStepWAApp;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onShareAbroadStep;
- (void)onClickHeadImage;
- (void)onRankBeBlackedWithUserName:(id)arg1;
- (id)championUsername;
- (id)championView;
- (void)setChampionView:(id)arg1;
- (void)setCurrentDayLabel:(id)arg1;
- (void)setChampionHeadImageView:(id)arg1;
- (void)setChampionDisplayLabel:(id)arg1;
- (id)championTailView;
- (void)setChampionTailView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setLikeMeUserList:(id)arg1;
- (void)setFocusArray:(id)arg1;
- (void)setFocusInfoArray:(id)arg1;
- (id)werunTargetList;
- (void)setWerunTargetList:(id)arg1;
- (BOOL)needShowCheckInSheet;
- (void)setNeedShowCheckInSheet:(BOOL)arg1;
- (id)pullDownBackgroundView;
- (void)setPullDownBackgroundView:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)myOriginSportRecord;
- (void)setMyOriginSportRecord:(id)arg1;
- (BOOL)hasReportedCheckInButtonExposure;
- (void)setHasReportedCheckInButtonExposure:(BOOL)arg1;
- (BOOL)hasReportedZeroStep;
- (void)setHasReportedZeroStep:(BOOL)arg1;
- (BOOL)hasInitPageInParams;
- (void)setHasInitPageInParams:(BOOL)arg1;
- (BOOL)showOwnSportRecord;
- (void)setShowOwnSportRecord:(BOOL)arg1;
- (id)ownSportRecordType;
- (void)setOwnSportRecordType:(id)arg1;
- (int)hardwareRecordCount;
- (void)setHardwareRecordCount:(int)arg1;
- (int)workoutRecordCount;
- (void)setWorkoutRecordCount:(int)arg1;
- (int)showFriendCount;
- (void)setShowFriendCount:(int)arg1;
- (void).cxx_destruct;
@end
