@interface MMGroupLiveCompleteViewController : MMLiveCompleteViewController <MMGroupLiveMgrExt, StatViewCellDelegate, MMAcceptAgreementResultViewControllerDelegate>
{
    BOOL _isAudience; // +0x68
    LiveInfo * _liveInfo; // +0x70
    MMLiveTask * _liveTask; // +0x78
    NSString * _roomId; // +0x80
    NSString * _anchorIdentityId; // +0x88
    NSString * _liveName; // +0x90
    UIView * _backgroundView; // +0x98
    MMUIButton * _closeButton; // +0xa0
    MMUILabel * _liveNameLabel; // +0xa8
    MMUILabel * _liveVideoLengthLabel; // +0xb0
    MMUILabel * _reportTitleEndingLabel; // +0xb8
    UIView * _statView; // +0xc0
    StatViewCell * _totalUsersCell; // +0xc8
    StatViewCell * _totalCommentsCell; // +0xd0
    StatViewCell * _totalLikesCell; // +0xd8
    UIView * _replayStatusTopLine; // +0xe0
    UIView * _replayStatusBottomLine; // +0xe8
    MMUILabel * _replayStatusLabel; // +0xf0
    MMUIButton * _replayStatusButton; // +0xf8
    UIView * _replayStatusRightArrow; // +0x100
    UIButton * _doneButton; // +0x108
    long long _closeButtonStyle; // +0x110
}
- (id)initWithLiveTask:(id)arg1 closeButtonStyle:(long long)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)forceRotateToPortrait;
- (long long)getCurrentOrientation;
- (BOOL)useBlackStatusbar;
- (long long)preferredStatusBarStyle;
- (BOOL)shouldInteractivePop;
- (void)loadData;
- (void)updateWithLiveInfo:(id)arg1;
- (void)updateReplayStatus;
- (void)updateReplayStatusForAudience;
- (void)hideReplayStatusButtonView;
- (void)updateReplayStatusButtonIfReplayIsReadyAudienceOnly;
- (void)updateReplayStatusButtonIfReplayClosedAudienceOnly;
- (void)updateReplayStatusButtonIfReplayErrorAnchorOnly;
- (void)updateReplayStatusButtonIfReplayExpired;
- (void)setupBlurBackground;
- (void)setupUI;
- (void)layoutTopLabels;
- (void)layoutStatView;
- (void)layoutDoneButton;
- (void)onReplayStatusButtonClicked;
- (void)onReplayStatusButtonClickedToReplayPageAuidenceOnlyClicked;
- (void)onReplayStatusButtonIfReplayClosedAudienceOnlyClicked;
- (void)onReplayStatusButtonIfReplayErrorAnchorOnlyClicked;
- (void)onReplayStatusButtonIfReplayExpiredClicked;
- (void)onDoneButtonClicked:(id)arg1;
- (void)onBackButtonClicked;
- (void)onOpenLiveReplayResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 enableLiveReplay:(BOOL)arg4;
- (void)onLiveClosedResult:(id)arg1 andLiveId:(unsigned long long)arg2;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (void)onStatViewCellClicked:(id)arg1;
- (BOOL)isReplayExpired;
- (unsigned int)expiredDays;
- (id)createReportLabel:(id)arg1 withFontSize:(id)arg2 withTextColor:(id)arg3;
- (id)createHorizontalSeperator;
- (id)createVerticalSeperator;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (id)anchorIdentityId;
- (void)setAnchorIdentityId:(id)arg1;
- (id)liveName;
- (void)setLiveName:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)liveNameLabel;
- (void)setLiveNameLabel:(id)arg1;
- (id)liveVideoLengthLabel;
- (void)setLiveVideoLengthLabel:(id)arg1;
- (id)reportTitleEndingLabel;
- (void)setReportTitleEndingLabel:(id)arg1;
- (id)statView;
- (void)setStatView:(id)arg1;
- (id)totalUsersCell;
- (void)setTotalUsersCell:(id)arg1;
- (id)totalCommentsCell;
- (void)setTotalCommentsCell:(id)arg1;
- (id)totalLikesCell;
- (void)setTotalLikesCell:(id)arg1;
- (id)replayStatusTopLine;
- (void)setReplayStatusTopLine:(id)arg1;
- (id)replayStatusBottomLine;
- (void)setReplayStatusBottomLine:(id)arg1;
- (id)replayStatusLabel;
- (void)setReplayStatusLabel:(id)arg1;
- (id)replayStatusButton;
- (void)setReplayStatusButton:(id)arg1;
- (id)replayStatusRightArrow;
- (void)setReplayStatusRightArrow:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (long long)closeButtonStyle;
- (void)setCloseButtonStyle:(long long)arg1;
- (void).cxx_destruct;
@end

