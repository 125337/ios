@interface WXGRoamNewChooseRangeViewController : MMWindowViewController <IRoamBackupPackageServiceExt, WCMomentsContactTagListViewControllerDelegate>
{
    BOOL _isUpadte; // +0x7c
    UINavigationItem * _customNavigationItem; // +0x80
    MMUINavigationBar * _customNavigationBar; // +0x88
    UIScrollView * _sheetView; // +0x90
    UIView * _topView; // +0x98
    UIView * _secondView; // +0xa0
    UIView * _allChatCell; // +0xa8
    UIView * _exactChatCell; // +0xb0
    UIView * _exactChatExtraView; // +0xb8
    UIView * _userExtraView; // +0xc0
    UIView * _labelExtraView; // +0xc8
    UILabel * _userExtraTips; // +0xd0
    UILabel * _labelExtraTips; // +0xd8
    UILabel * _autoBackupTimeTips; // +0xe0
    UIView * _timeExtraView; // +0xe8
    WXGRoamBackupPackageDetailCell * _startTimeCell; // +0xf0
    WXGRoamBackupPackageDetailCell * _endTimeCell; // +0xf8
    UIView * _allChatExcludeFoldedCell; // +0x100
    UIImageView * _autoArrowImg; // +0x108
    UIImageView * _chosenImg; // +0x110
    UIView * _typeCell; // +0x118
    UIView * _timeCell; // +0x120
    UISwitch * _typeSwitch; // +0x128
    UISwitch * _timeSwitch; // +0x130
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupNavBar;
- (void)setupViews;
- (void)setupChosenImg;
- (void)setupTopView;
- (void)setupSecondeView;
- (void)setupExtraView;
- (void)setupTimeExtraView;
- (void)addTopViewAction;
- (void)updateView;
- (void)onSelectContactTag;
- (void)onSwitchTime;
- (void)onSwitchType;
- (void)onCancel;
- (void)onCreate;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (BOOL)isUpadte;
- (void)setIsUpadte:(BOOL)arg1;
- (id)customNavigationItem;
- (void)setCustomNavigationItem:(id)arg1;
- (id)customNavigationBar;
- (void)setCustomNavigationBar:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)topView;
- (void)setTopView:(id)arg1;
- (id)secondView;
- (void)setSecondView:(id)arg1;
- (id)allChatCell;
- (void)setAllChatCell:(id)arg1;
- (id)exactChatCell;
- (void)setExactChatCell:(id)arg1;
- (id)exactChatExtraView;
- (void)setExactChatExtraView:(id)arg1;
- (id)userExtraView;
- (void)setUserExtraView:(id)arg1;
- (id)labelExtraView;
- (void)setLabelExtraView:(id)arg1;
- (id)userExtraTips;
- (void)setUserExtraTips:(id)arg1;
- (id)labelExtraTips;
- (void)setLabelExtraTips:(id)arg1;
- (id)autoBackupTimeTips;
- (void)setAutoBackupTimeTips:(id)arg1;
- (id)timeExtraView;
- (void)setTimeExtraView:(id)arg1;
- (id)startTimeCell;
- (void)setStartTimeCell:(id)arg1;
- (id)endTimeCell;
- (void)setEndTimeCell:(id)arg1;
- (id)allChatExcludeFoldedCell;
- (void)setAllChatExcludeFoldedCell:(id)arg1;
- (id)autoArrowImg;
- (void)setAutoArrowImg:(id)arg1;
- (id)chosenImg;
- (void)setChosenImg:(id)arg1;
- (id)typeCell;
- (void)setTypeCell:(id)arg1;
- (id)timeCell;
- (void)setTimeCell:(id)arg1;
- (id)typeSwitch;
- (void)setTypeSwitch:(id)arg1;
- (id)timeSwitch;
- (void)setTimeSwitch:(id)arg1;
- (void).cxx_destruct;
@end
