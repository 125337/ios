@interface MMFinderLivePaymentVisivilityShareSettingView : MMFinderLiveVisivilityShareSettingView <MMFinderLivePaymentSettingViewDelegate, MMFinderLivePaymentTrialModeSettingViewDelegate, MMCommonActionSheetPickerDelegate>
{
    MMFinderLivePaymentVisivilitySettingInfo * _paymentSettingInfo; // +0x8
    MMFinderLivePaymentSettingView * _paymentSettingPanel; // +0x10
    MMFinderLivePaymentTrialModeSettingView * _paymentTrialModeSettingView; // +0x18
    MMCommonActionSheetPicker * _startTimePicker; // +0x20
}
- (id)initWithSettingInfo:(id)arg1 initParam:(id)arg2 forceDarkMode:(BOOL)arg3 rootVC:(id)arg4;
- (void)initSettingInfo:(id)arg1;
- (id)navTitle;
- (double)getContentHeight;
- (double)getActualContentHeight;
- (void)reloadTableData;
- (void)updateSettingInfo:(id)arg1;
- (void)updateConfirmButtonEnabled;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)layoutSettingTableView;
- (double)getSettingTableHeight;
- (void)layoutConfirmButton;
- (id)getRightViewByCurrentPayPrice;
- (id)getRightViewByCurrentTrialMode;
- (id)getRightViewByCurrentTrialTime;
- (id)getRightViewByCurrentFreeUsers:(double)arg1;
- (id)getRightViewForFreeUserFileListCell:(double)arg1;
- (id)getCustomViewForCreateFreeFileList;
- (id)getFormatTrialTimeString;
- (id)getDatePickerData;
- (id)getHourDataWithDayComponent:(long long)arg1;
- (id)getMinuteDataWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getMinuteArrWithDayComponent:(long long)arg1 hourComponent:(long long)arg2;
- (id)getHourArrWithDayComponent:(long long)arg1;
- (long long)getNearestIndexWithTarggetItem:(id)arg1 itemList:(id)arg2;
- (void)showPaymentPriceSettingView;
- (void)showPaymentPreviewModeView;
- (void)showStartTimePicker;
- (void)selectFreeContactsFromRecentSessions;
- (void)selectFreeFileListFromAllVisibilityFileLists;
- (void)onLiveMemberFreeSwitchValueChange:(id)arg1;
- (void)onMMFinderLivePaymentSettingViewChoosePriceInWecoin:(unsigned int)arg1;
- (void)onMMFinderLivePaymentSettingViewClosed:(id)arg1;
- (void)onUpdatePurchaseLivePreviewType:(long long)arg1;
- (void)onPaymentTrialModeSettingViewClosed:(id)arg1;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (void)commonPickerDismissed:(id)arg1;
- (id)paymentSettingInfo;
- (void)setPaymentSettingInfo:(id)arg1;
- (id)paymentSettingPanel;
- (void)setPaymentSettingPanel:(id)arg1;
- (id)paymentTrialModeSettingView;
- (void)setPaymentTrialModeSettingView:(id)arg1;
- (id)startTimePicker;
- (void)setStartTimePicker:(id)arg1;
- (void).cxx_destruct;
@end

