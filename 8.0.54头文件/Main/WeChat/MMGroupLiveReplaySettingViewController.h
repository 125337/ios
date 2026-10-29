@interface MMGroupLiveReplaySettingViewController : MMCPUIViewController <MMGroupLiveMgrExt, MMGroupLiveReplaySettingPickerControllerDelegate, MMAcceptAgreementResultViewControllerDelegate>
{
    BOOL _needAutoRotateToPortrait; // +0x68
    BOOL _enableLiveReplay; // +0x69
    long long _currDeviceOrientation; // +0x70
    LiveInfo * _liveInfo; // +0x78
    MMLiveTask * _liveTask; // +0x80
    NSString * _roomId; // +0x88
    NSString * _replayUrl; // +0x90
    MMUILabel * _titleLabel; // +0x98
    MMUILabel * _subTitleLabel; // +0xa0
    UIView * _replaySettingTopLine; // +0xa8
    UIView * _replaySettingBottomLine; // +0xb0
    UIButton * _replaySettingButton; // +0xb8
    MMUILabel * _replaySettingButtonLabel; // +0xc0
    MMUILabel * _replayStatusTitle; // +0xc8
    MMUILabel * _replayStatusTips; // +0xd0
    UIButton * _replayButton; // +0xd8
}
- (id)initWithLiveTask:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadData;
- (void)updateWithLiveInfo:(id)arg1;
- (void)updateReplayStatus;
- (void)updateReplaySettingButtonLabel;
- (void)hideReplayStatus;
- (void)updateReplayButtonIfReplayIsReady;
- (void)updateReplayButtonIfReplayInProcess;
- (void)setupUI;
- (void)layoutHeaderView;
- (void)layoutReplaySettingButtonView;
- (void)layoutReplayStatusView;
- (void)onReplaySettingButtonClicked;
- (void)onReplayButtonClicked;
- (void)onReplayButtonIfReplayExpiredClicked;
- (void)onReplayButtonIfReplayErrorClicked;
- (void)onMMGroupLiveReplaySettingPickerControllerReplayStatus:(BOOL)arg1;
- (void)onOpenLiveReplayResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 enableLiveReplay:(BOOL)arg4;
- (void)onGetLiveInfoWithResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 andLiveInfo:(id)arg4;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (id)createReportLabel:(id)arg1 withFontSize:(id)arg2 withTextColor:(id)arg3;
- (id)createHorizontalSeperator;
- (BOOL)needAutoRotateToPortrait;
- (void)setNeedAutoRotateToPortrait:(BOOL)arg1;
- (long long)currDeviceOrientation;
- (void)setCurrDeviceOrientation:(long long)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (id)liveTask;
- (void)setLiveTask:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (id)replayUrl;
- (void)setReplayUrl:(id)arg1;
- (BOOL)enableLiveReplay;
- (void)setEnableLiveReplay:(BOOL)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)replaySettingTopLine;
- (void)setReplaySettingTopLine:(id)arg1;
- (id)replaySettingBottomLine;
- (void)setReplaySettingBottomLine:(id)arg1;
- (id)replaySettingButton;
- (void)setReplaySettingButton:(id)arg1;
- (id)replaySettingButtonLabel;
- (void)setReplaySettingButtonLabel:(id)arg1;
- (id)replayStatusTitle;
- (void)setReplayStatusTitle:(id)arg1;
- (id)replayStatusTips;
- (void)setReplayStatusTips:(id)arg1;
- (id)replayButton;
- (void)setReplayButton:(id)arg1;
- (void).cxx_destruct;
@end

