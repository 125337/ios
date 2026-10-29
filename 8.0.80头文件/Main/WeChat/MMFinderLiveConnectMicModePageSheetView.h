@interface MMFinderLiveConnectMicModePageSheetView : MMPageSheetBaseView <UITableViewDataSource, UITableViewDelegate, MMFinderLiveConnectMicModePageSheetSwitchCellDelegate, MMLiveTaskMgrExt, MMFinderLiveConnectMicConditionChooseDelegate, MMFinderLiveConnectMicSelectConnectModeDelegate>
{
    BOOL _modeSelectionEnabled; // +0x8
    BOOL _focusEnabled; // +0x9
    BOOL _modeOrFocusChanged; // +0xa
    BOOL _autoConnect; // +0xb
    BOOL _focusOnly; // +0xc
    id <MMFinderLiveConnectMicModePageSheetViewDelegate> _delegate; // +0x10
    MMFinderLiveConnectMicModePreviewView * _previewView; // +0x18
    UITableView * _usersTableView; // +0x20
    MMFinderLiveTaskId * _taskId; // +0x28
    unsigned long long _originalMode; // +0x30
    NSString * _originalFocusedUserId; // +0x38
    NSArray * _micUsers; // +0x40
    unsigned long long _anchorMicIndex; // +0x48
    unsigned long long _selectedMode; // +0x50
    NSString * _focusedUserId; // +0x58
    MMFinderLiveConnectMicLayoutModeSubtitleWrap * _micLayoutModeSubtitleWrap; // +0x60
    unsigned long long _selectedCondition; // +0x68
    unsigned long long _disabledConditions; // +0x70
}
+ (id)rearrangedMicUserIndicesOf:(id)arg1 anchorMicIndex:(unsigned long long)arg2 anchorSdkUserId:(id)arg3 targetMode:(unsigned long long)arg4 targetFocusingUserId:(id)arg5;
+ (id)rearrangedMicUserIndicesForStandardModeOf:(id)arg1 anchorMicIndex:(unsigned long long)arg2 anchorSdkUserId:(id)arg3;
+ (id)rearrangedMicUserIndicesForFocusModeOf:(id)arg1 anchorMicIndex:(unsigned long long)arg2 anchorSdkUserId:(id)arg3 focusingUserId:(id)arg4;
+ (id)rearrangedMicUserIndicesForGrabModeOf:(id)arg1 anchorMicIndex:(unsigned long long)arg2 anchorSdkUserId:(id)arg3;
+ (id)rearrangedMicUserIndicesForLeadModeOf:(id)arg1 anchorMicIndex:(unsigned long long)arg2 anchorSdkUserId:(id)arg3 focusingUserId:(id)arg4;
+ (id)micUsersSortedByMicIndexOf:(id)arg1;
- (id)initWithTaskId:(id)arg1 condition:(unsigned long long)arg2 incomingAutoConnect:(BOOL)arg3 disabledConditions:(unsigned long long)arg4 mode:(unsigned long long)arg5 focusedUserId:(id)arg6 subtitleWrap:(id)arg7 modeSelectionEnabled:(BOOL)arg8;
- (id)initFocusOnlyPanelWithTaskId:(id)arg1 mode:(unsigned long long)arg2 focusedUserId:(id)arg3;
- (void)commonInitWithTaskId:(id)arg1 micLayoutMode:(unsigned long long)arg2 focusedUserId:(id)arg3;
- (void)setSelectedMode:(unsigned long long)arg1;
- (void)setFocusEnabled:(BOOL)arg1;
- (void)setSelectedMode:(unsigned long long)arg1 focusEnabled:(BOOL)arg2;
- (void)setFocusedUserId:(id)arg1;
- (void)layoutSubviews;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)onConfirmed;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onSwitchToggledForSwitchCell:(id)arg1;
- (void)onLiveTask:(id)arg1 micUsersInfoChanged:(id)arg2;
- (void)onMMFinderLiveConnectMicConditionChoose:(unsigned long long)arg1;
- (void)onMMFinderLiveConnectMicConditionClose;
- (void)onMMFinderLiveConnectMicSelectConnectModeUpdateCanAutoConnect:(BOOL)arg1;
- (void)onMMFinderLiveConnectMicSelectConnectModePanelClosed;
- (void)setupPageSheetConfig;
- (id)createRightButton;
- (void)registerExtensions;
- (void)unregisterExtensions;
- (void)updateMicUsers;
- (void)updateTableSelection;
- (void)updatePreview;
- (id)dequeueGenericCell;
- (id)conditionTitleForType:(unsigned long long)arg1;
- (void)showMicConditionChoosePanel;
- (void)showSelectConnectModePanel;
- (id)liveTask;
- (id)getAnchorSdkUserId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)previewView;
- (void)setPreviewView:(id)arg1;
- (id)usersTableView;
- (void)setUsersTableView:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)modeSelectionEnabled;
- (void)setModeSelectionEnabled:(BOOL)arg1;
- (unsigned long long)originalMode;
- (void)setOriginalMode:(unsigned long long)arg1;
- (id)originalFocusedUserId;
- (void)setOriginalFocusedUserId:(id)arg1;
- (id)micUsers;
- (void)setMicUsers:(id)arg1;
- (unsigned long long)anchorMicIndex;
- (void)setAnchorMicIndex:(unsigned long long)arg1;
- (unsigned long long)selectedMode;
- (BOOL)focusEnabled;
- (id)focusedUserId;
- (BOOL)modeOrFocusChanged;
- (void)setModeOrFocusChanged:(BOOL)arg1;
- (id)micLayoutModeSubtitleWrap;
- (void)setMicLayoutModeSubtitleWrap:(id)arg1;
- (unsigned long long)selectedCondition;
- (void)setSelectedCondition:(unsigned long long)arg1;
- (BOOL)autoConnect;
- (void)setAutoConnect:(BOOL)arg1;
- (unsigned long long)disabledConditions;
- (void)setDisabledConditions:(unsigned long long)arg1;
- (BOOL)focusOnly;
- (void)setFocusOnly:(BOOL)arg1;
- (void).cxx_destruct;
@end
