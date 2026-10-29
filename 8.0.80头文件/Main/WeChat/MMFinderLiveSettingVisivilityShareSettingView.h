@interface MMFinderLiveSettingVisivilityShareSettingView : MMFinderLiveVisivilityShareSettingView
{
    BOOL _highlightChooseModeOnce; // +0x8
    BOOL _modeSwitchRowHidden; // +0x9
    unsigned long long _originalMode; // +0x10
    unsigned long long _currentMode; // +0x18
    id /* block */ _hostSheetDismissCallback; // +0x20
    id /* block */ _hostSheetRestoreCallback; // +0x28
    NSMutableArray * _requiredContacts; // +0x30
    NSMutableArray * _requiredTags; // +0x38
    NSMutableArray * _requiredFiles; // +0x40
    NSMutableArray * _selectedContacts; // +0x48
    NSMutableArray * _selectedTags; // +0x50
    NSMutableArray * _selectedFiles; // +0x58
    NSMutableArray * _disabledContacts; // +0x60
    NSMutableArray * _disabledTags; // +0x68
    NSMutableArray * _disabledFiles; // +0x70
    NSMutableArray * _displayContacts; // +0x78
    NSMutableArray * _displayTags; // +0x80
    NSMutableArray * _displayFiles; // +0x88
}
- (void)setModeSwitchRowHidden:(BOOL)arg1;
- (id)initWithSettingInfo:(id)arg1 initParam:(id)arg2 rootVC:(id)arg3;
- (BOOL)isTransferToPartialInvisible;
- (void)preselectPublicModeForTestLiveInfoConfirm;
- (BOOL)isContinuePartialInvisible;
- (BOOL)isContinuePartialVisible;
- (void)resetSettingInfo;
- (void)resetContactArrays;
- (void)resetTagArrays;
- (void)resetFileArrays;
- (void)reloadTableData;
- (id)getSectionInfoFromCellInfoArray:(id)arg1;
- (id)settingSelectedVisibleFileLists;
- (BOOL)onShouldFilterContact:(id)arg1;
- (void)onSelectDisabledContact:(id)arg1;
- (void)customParamWithSelectContactsFromRecentSessions:(unsigned int)arg1 selectedContacts:(id)arg2 viewController:(id)arg3;
- (void)OnSelectSessions:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)customParamWithController:(id)arg1;
- (BOOL)contactTagListViewController:(id)arg1 onShouldFilterTag:(id)arg2;
- (void)contactTagListViewController:(id)arg1 didSelectContactTag:(id)arg2;
- (void)showWithForceOrientation:(BOOL)arg1;
- (void)contactTagListViewControllerCancelSelect:(id)arg1;
- (void)onWCFinderLiveRosterSelectFinishWithVisibilityIdList:(id)arg1 visibilityMode:(long long)arg2 liveMode:(long long)arg3;
- (void)onWCFinderLiveRosterSelectDisabledFile:(id)arg1;
- (BOOL)onWCFinderLiveRosterShouldFilterFile:(id)arg1;
- (void)onWCFinderLiveRosterSelectCancel;
- (void)pageSheetDidShow;
- (BOOL)isChangeModeEnabled;
- (BOOL)enableShowVisibilityModeSection;
- (BOOL)enableChooseModeInTestLive;
- (double)getContentHeight;
- (void)updateSettingInfo:(id)arg1;
- (void)updateConfirmButtonEnabled;
- (void)onConfirm;
- (id)navTitle;
- (id)getDescriptionForCurrentSetting;
- (id)getChooseModeDetailView;
- (id)getChooseVisibilityDetailView;
- (id)getRightViewByCurrentVisibleUsers:(double)arg1;
- (id)getRightViewByCurrentVisibleTags:(double)arg1;
- (id)getRightViewForVisibleUserFileListCell:(double)arg1;
- (id)currentRealAllVisibilityFileList:(id)arg1 selectedVisibleFileLists:(id)arg2;
- (id)getCustomViewForCreateVisibleFileList;
- (void)resetPartialVisibilityFlags;
- (void)updateCellStyleAfterCellForRowAtIndexPath:(id)arg1 tableView:(id)arg2 cell:(id)arg3 cellInfo:(id)arg4;
- (void)addHighlightMaskForTableViewCell:(id)arg1;
- (void)chooseVisibilityMode;
- (void)chooseModeInTestLive;
- (void)selectVisibleContactsFromRecentSessions;
- (void)selectVisibleTags;
- (void)selectVisibleFileListFromAllVisibilityFileLists;
- (BOOL)isLandscapeLive;
- (BOOL)isOriginTestMode;
- (BOOL)isCurrentTestMode;
- (id)requiredContacts;
- (id)requiredTags;
- (id)requiredFiles;
- (id)selectedContacts;
- (id)selectedTags;
- (id)selectedFiles;
- (id)disabledContacts;
- (id)disabledTags;
- (id)disabledFiles;
- (id)displayContacts;
- (id)displayTags;
- (id)displayFiles;
- (unsigned long long)originalMode;
- (void)setOriginalMode:(unsigned long long)arg1;
- (unsigned long long)currentMode;
- (void)setCurrentMode:(unsigned long long)arg1;
- (BOOL)highlightChooseModeOnce;
- (void)setHighlightChooseModeOnce:(BOOL)arg1;
- (BOOL)modeSwitchRowHidden;
- (id /* block */)hostSheetDismissCallback;
- (void)setHostSheetDismissCallback:(id /* block */)arg1;
- (id /* block */)hostSheetRestoreCallback;
- (void)setHostSheetRestoreCallback:(id /* block */)arg1;
- (void)setRequiredContacts:(id)arg1;
- (void)setRequiredTags:(id)arg1;
- (void)setRequiredFiles:(id)arg1;
- (void)setSelectedContacts:(id)arg1;
- (void)setSelectedTags:(id)arg1;
- (void)setSelectedFiles:(id)arg1;
- (void)setDisabledContacts:(id)arg1;
- (void)setDisabledTags:(id)arg1;
- (void)setDisabledFiles:(id)arg1;
- (void)setDisplayContacts:(id)arg1;
- (void)setDisplayTags:(id)arg1;
- (void)setDisplayFiles:(id)arg1;
- (void).cxx_destruct;
@end
