@interface MMGroupLiveReplaySettingPickerController : MMUIHalfScreenViewController
{
    BOOL _enableLiveReplay; // +0x70
    id <MMGroupLiveReplaySettingPickerControllerDelegate> _settingDelegate; // +0x78
    LiveInfo * _liveInfo; // +0x80
    NSString * _roomId; // +0x88
    UIView * _headerView; // +0x90
    MMUILabel * _headerTitle; // +0x98
    UIView * _firstSeperator; // +0xa0
    UIView * _secondSeperator; // +0xa8
    UIView * _thirdSeperator; // +0xb0
    UIView * _closeReplayStatusView; // +0xb8
    MMUILabel * _closeReplayTitle; // +0xc0
    UIImageView * _closeReplayCheckbox; // +0xc8
    UIView * _openReplayStatusView; // +0xd0
    MMUILabel * _openReplayTitle; // +0xd8
    MMUILabel * _openReplaySubtitle; // +0xe0
    UIImageView * _openReplayCheckbox; // +0xe8
    UIButton * _doneButton; // +0xf0
}
- (id)initWithLiveInfo:(id)arg1 roomId:(id)arg2;
- (void)viewDidLoad;
- (void)setUpUI;
- (void)layoutPickerList;
- (void)onOpenReplayClicked;
- (void)onCloseReplayClicked;
- (void)onDoneButtonClicked;
- (void)onCloseButtonClicked;
- (void)updateCheckBox;
- (id)createLabel:(id)arg1 withFontSize:(id)arg2 withTextColor:(id)arg3;
- (id)createHorizontalSeperator;
- (id)settingDelegate;
- (void)setSettingDelegate:(id)arg1;
- (id)liveInfo;
- (void)setLiveInfo:(id)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (BOOL)enableLiveReplay;
- (void)setEnableLiveReplay:(BOOL)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)headerTitle;
- (void)setHeaderTitle:(id)arg1;
- (id)firstSeperator;
- (void)setFirstSeperator:(id)arg1;
- (id)secondSeperator;
- (void)setSecondSeperator:(id)arg1;
- (id)thirdSeperator;
- (void)setThirdSeperator:(id)arg1;
- (id)closeReplayStatusView;
- (void)setCloseReplayStatusView:(id)arg1;
- (id)closeReplayTitle;
- (void)setCloseReplayTitle:(id)arg1;
- (id)closeReplayCheckbox;
- (void)setCloseReplayCheckbox:(id)arg1;
- (id)openReplayStatusView;
- (void)setOpenReplayStatusView:(id)arg1;
- (id)openReplayTitle;
- (void)setOpenReplayTitle:(id)arg1;
- (id)openReplaySubtitle;
- (void)setOpenReplaySubtitle:(id)arg1;
- (id)openReplayCheckbox;
- (void)setOpenReplayCheckbox:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (void).cxx_destruct;
@end
