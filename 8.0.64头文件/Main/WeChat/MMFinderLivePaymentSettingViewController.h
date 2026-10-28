@interface MMFinderLivePaymentSettingViewController : MMCPUIViewController <MMFinderLivePaymentSettingViewDelegate, SessionSelectControllerDelegate, MMCommonActionSheetPickerDelegate, WCFinderLiveRosterSelectDelegate, MMFinderLivePaymentTrialModeSettingViewDelegate, MMFinderLivePaymentPolicyIntroViewDelegate>
{
    BOOL _forceDarkMode; // +0x70
    BOOL _isPaymentSwitchOn; // +0x71
    BOOL _bindNotice; // +0x72
    BOOL _hasTrialTimeManuallyModified; // +0x73
    unsigned int _curPriceInWecoin; // +0x74
    unsigned int _curTrialTimeHour; // +0x78
    unsigned int _curTrialTimeMinute; // +0x7c
    int _liveMode; // +0x80
    id <MMFinderLivePaymentSettingViewControllerDelegate> _actionDelegate; // +0x88
    MMTableViewInfo * _tableViewInfo; // +0x90
    NSMutableArray * _chooseFreeContactChatroomList; // +0x98
    NSMutableArray * _chooseFreeContactUsernameList; // +0xa0
    NSArray * _chooseFreeContactListForDigestDisplay; // +0xa8
    unsigned long long _entrySource; // +0xb0
    NSArray * _allVisibilityFileList; // +0xb8
    NSMutableArray * _selectedVisibleFileLists; // +0xc0
    NSMutableArray * _selectedFreeFileLists; // +0xc8
    MMFinderLivePaymentSettingView * _paymentSettingPanel; // +0xd0
    MMFinderLivePaymentTrialModeSettingView * _paymentTrialModeSettingView; // +0xd8
    long long _purchaseLivePreviewType; // +0xe0
    MMCommonActionSheetPicker * _startTimePicker; // +0xe8
}
- (id)initWithPaymentOpened:(BOOL)arg1 allVisibilityFileList:(id)arg2 freeContactChatroomList:(id)arg3 freeContactUsernameList:(id)arg4 freeContactListForDigestDisplay:(id)arg5 selectedFreeRosterList:(id)arg6 priceInWecoin:(unsigned int)arg7 purchaseLivePreviewType:(long long)arg8 trialTimeHour:(unsigned int)arg9 trialTimeMinute:(unsigned int)arg10 shareEntrySource:(unsigned long long)arg11 forceDarkMode:(BOOL)arg12 bindNotice:(BOOL)arg13;
- (id)navigationBarBackgroundColor;
- (BOOL)navigationBarBlurEffect;
- (long long)preferredStatusBarStyle;
- (long long)overrideUserInterfaceStyle;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)selectedVisibleFileLists;
- (id)selectedFreeFileLists;
- (void)clearPaySetting;
- (id)getColorProxy;
- (void)reloadTableData;
- (void)drawTopCornerForCell:(id)arg1 tableView:(id)arg2;
- (void)drawBottomCornerForCell:(id)arg1 tableView:(id)arg2;
- (id)getRightViewByCurrentTrialTime;
- (id)getFormatTrialTimeString;
- (id)getRightViewByCurrentPayPrice;
- (id)getRightViewByCurrentTrialMode;
- (id)getRightViewByCurrentFreeUsers;
- (id)getCustomViewForFreeUserFileListCell;
- (void)onTapCancel;
- (void)onTapDone;
- (void)onPaymentSwitch:(id)arg1;
- (void)showPaymentPriceSettingView;
- (void)showPaymentPreviewModeView;
- (void)showStartTimePicker;
- (id)getDatePickerData;
- (id)getHourDataWithDayComponent:(long long)arg1;
- (id)getMinuteDataWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getMinuteArrWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getHourArrWithDayComponent:(long long)arg1;
- (void)dismissStartTimePicker;
- (void)selectFreeContactsFromRecentSessions;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)selectFreeFileListFromAllVisibilityFileLists;
- (void)onWCFinderLiveRosterSelectCancel;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (void)onMMFinderLivePaymentSettingViewChoosePriceInWecoin:(unsigned int)arg1;
- (void)onMMFinderLivePaymentPolicyIntroViewConfirmButtonClicked:(id)arg1;
- (void)onUpdatePurchaseLivePreviewType:(long long)arg1;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (BOOL)shouldEnablePaidLive;
- (void)showPaymentSettingPanelAndLegalIntro;
- (id)lowerCellDigestWithContactUsernames:(id)arg1 chatroomUsernames:(id)arg2;
- (id)lowerCellDigestWithAudienceLists:(id)arg1 selectedLists:(id)arg2;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (id)tableViewInfo;
- (void)setTableViewInfo:(id)arg1;
- (BOOL)isPaymentSwitchOn;
- (void)setIsPaymentSwitchOn:(BOOL)arg1;
- (BOOL)bindNotice;
- (void)setBindNotice:(BOOL)arg1;
- (id)chooseFreeContactChatroomList;
- (void)setChooseFreeContactChatroomList:(id)arg1;
- (id)chooseFreeContactUsernameList;
- (void)setChooseFreeContactUsernameList:(id)arg1;
- (id)chooseFreeContactListForDigestDisplay;
- (void)setChooseFreeContactListForDigestDisplay:(id)arg1;
- (unsigned long long)entrySource;
- (void)setEntrySource:(unsigned long long)arg1;
- (id)allVisibilityFileList;
- (void)setAllVisibilityFileList:(id)arg1;
- (void)setSelectedVisibleFileLists:(id)arg1;
- (void)setSelectedFreeFileLists:(id)arg1;
- (id)paymentSettingPanel;
- (void)setPaymentSettingPanel:(id)arg1;
- (unsigned int)curPriceInWecoin;
- (void)setCurPriceInWecoin:(unsigned int)arg1;
- (id)paymentTrialModeSettingView;
- (void)setPaymentTrialModeSettingView:(id)arg1;
- (long long)purchaseLivePreviewType;
- (void)setPurchaseLivePreviewType:(long long)arg1;
- (id)startTimePicker;
- (void)setStartTimePicker:(id)arg1;
- (unsigned int)curTrialTimeHour;
- (void)setCurTrialTimeHour:(unsigned int)arg1;
- (unsigned int)curTrialTimeMinute;
- (void)setCurTrialTimeMinute:(unsigned int)arg1;
- (int)liveMode;
- (void)setLiveMode:(int)arg1;
- (BOOL)hasTrialTimeManuallyModified;
- (void)setHasTrialTimeManuallyModified:(BOOL)arg1;
- (void).cxx_destruct;
@end
