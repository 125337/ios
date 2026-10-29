@interface BraceletRankProfileViewController : MMUIViewController <MMSightCameraViewControllerDelegate, WCCommitViewResultDelegate, BraceletSportRecordDelegate, MMImagePickerManagerDelegate, IDeviceRankProfileMgrExt, WCActionSheetDelegate, MMWebImageViewDelegate, UITableViewDataSource, UITableViewDelegate, IDeviceRankSnsMgrExt, IDeviceRankWorkoutMgrExt, ForwardMessageLogicDelegate>
{
    NSString * nsUserName; // +0x70
    NSString * nsBrandUserName; // +0x78
    NSArray * arrAffectedUser; // +0x80
    DeviceRankDetailResonse * _oDataSource; // +0x88
    NSURL * _coverUrl; // +0x90
    NSMutableArray * _sectionDatas; // +0x98
    NSMutableArray * _stepDatas; // +0xa0
    NSString * _stepCacheFilePath; // +0xa8
    int _cacheDistance; // +0xb0
    MMTableView * _tableView; // +0xb8
    MMWebImageView * _coverWebImageView; // +0xc0
    UIImageView * _cameraImageView; // +0xc8
    MMUILabel * _tipLablel; // +0xd0
    UILabel * _headTipLabel; // +0xd8
    UILabel * _nickNameLabel; // +0xe0
    MMHeadImageView * _headImageView; // +0xe8
    UIView * _affectTipView; // +0xf0
    UIScrollView * _affectedUserListView; // +0xf8
    UIView * _tableHeaderView; // +0x100
    UIView * _tableFooterView; // +0x108
    UIButton * _followBtn; // +0x110
    MMUIImageView * _reverseImageView; // +0x118
    UIImageView * _blurView; // +0x120
    UIImage * _snapShotImg; // +0x128
    UIImage * _shareBGImage; // +0x130
    BOOL _bCoverChanged; // +0x138
    BOOL _bMySelf; // +0x139
    BOOL _isBluring; // +0x13a
    BOOL _bDidBePushed; // +0x13b
    BOOL _bIsNotifySetCover; // +0x13c
    BOOL _bIsMakeLike; // +0x13d
    ForwardMessageLogicController * _forwardMsgLogic; // +0x140
    BraceletRankUtils * _braceletRankUtils; // +0x148
    BraceletSportView * _sportView; // +0x150
    NSMutableArray * _likeMeUserList; // +0x158
    CAGradientLayer * _gradientLayer; // +0x160
    BOOL _isStepScoreExpanded; // +0x168
    BOOL _hasReportedAllSportsBtnExposure; // +0x169
    id <BraceletRankProfileViewControllerDelegate> _delegate; // +0x170
    NSString * _reportSessionId; // +0x178
    NSMutableArray * _targetList; // +0x180
    NSMutableArray * _checkedList; // +0x188
    BraceletSportViewV2 * _sportViewV2; // +0x190
    UIView * _pullDownBackgroundView; // +0x198
}
- (id)initWithUserName:(id)arg1 withBrandUserName:(id)arg2 AffectedUserList:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)initData;
- (void)reloadData;
- (void)reloadRowData;
- (void)initView;
- (double)p_navBarFadeInStartOffset;
- (double)p_navBarFadeInEndOffset;
- (double)p_profileTitleHeight;
- (id)braceletRankUtils;
- (void)initTableFooterView;
- (id)getSportView;
- (void)updateNewHeadImageView;
- (void)updateHeadImageView;
- (void)onClickHeadImage;
- (void)updateCoverImageView;
- (void)notifyEmptyCoverIfNeed;
- (void)slashCameraImage:(int)arg1;
- (void)updateTableHeaderView;
- (id)getAffectTipView;
- (id)getAffectUserListView;
- (void)updateTableFooterView;
- (void)updateRightNavBarItem;
- (id)getNotRankTitle;
- (BOOL)shouldShowRightBarItem;
- (void)updateInfoViewSnapshot;
- (id)removeAllNumberAndComma:(id)arg1;
- (void)onGotUserRankDetail:(id)arg1 rankDetailResp:(id)arg2 err:(int)arg3;
- (void)onAddFollowWithFollowItems:(id)arg1 error:(int)arg2;
- (void)onDelFollowWithUserName:(id)arg1 error:(int)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)makeStepsCell:(id)arg1;
- (void)makeWorkoutHistoryCell:(id)arg1;
- (void)p_makeSingleEntryCell:(id)arg1 title:(id)arg2 action:(SEL)arg3;
- (void)makeOperateCell:(id)arg1 index:(long long)arg2;
- (void)makeButtonCell:(id)arg1 row:(unsigned long long)arg2;
- (void)onClickCellButton:(id)arg1;
- (void)openFocusList;
- (void)launchDonateStepWAApp;
- (void)onRightNavBtnClickedInSelfProfile;
- (void)onRightNavBtnClickedInProfile;
- (void)showNotRankActionSheet;
- (void)onSingleTap;
- (void)clickAffectedImage:(id)arg1;
- (void)onAffectTipSingleTap:(id)arg1;
- (void)onFollowBtnClick;
- (void)p_applyFollowBtnStyleForFollowed:(BOOL)arg1;
- (void)onAddFollow;
- (void)onDelFollow;
- (void)onNotRank;
- (void)onReport;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onHandleImage:(id)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(BOOL)arg3 editImageAttr:(id)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealAffectUserViewState:(id)arg1;
- (void)shareToFriend;
- (void)shareToTimeline;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onLikeFriendRank:(id)arg1 optype:(unsigned int)arg2 err:(int)arg3;
- (void)onGetWeRunTargetList:(id)arg1 err:(int)arg2;
- (void)operateWeRunTarget:(id)arg1 optype:(int)arg2 err:(int)arg3;
- (void)p_updateTargetListWithTargets:(id)arg1;
- (void)updateCheckInRecords;
- (void)updateCheckInRecordsWithPreferredTargets:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onSportViewDidUpdateHeight:(id)arg1;
- (void)onClickCheckInButton;
- (void)showCheckInSheet:(id)arg1;
- (void)p_showWorkoutCheckInSheet;
- (void)onClickHistoryButton;
- (void)onClickAppWithWAContact:(id)arg1;
- (void)onClickAppWithFinderUsername:(id)arg1 records:(id)arg2;
- (void)onClickLikeButton:(id)arg1;
- (void)onClickSportRecord:(id)arg1;
- (id)nsUserName;
- (void)setNsUserName:(id)arg1;
- (id)nsBrandUserName;
- (void)setNsBrandUserName:(id)arg1;
- (id)arrAffectedUser;
- (void)setArrAffectedUser:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)targetList;
- (void)setTargetList:(id)arg1;
- (id)checkedList;
- (void)setCheckedList:(id)arg1;
- (BOOL)isStepScoreExpanded;
- (void)setIsStepScoreExpanded:(BOOL)arg1;
- (id)sportViewV2;
- (void)setSportViewV2:(id)arg1;
- (id)pullDownBackgroundView;
- (void)setPullDownBackgroundView:(id)arg1;
- (BOOL)hasReportedAllSportsBtnExposure;
- (void)setHasReportedAllSportsBtnExposure:(BOOL)arg1;
- (void).cxx_destruct;
@end
