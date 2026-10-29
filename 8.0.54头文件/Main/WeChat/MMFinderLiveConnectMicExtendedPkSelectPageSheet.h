@interface MMFinderLiveConnectMicExtendedPkSelectPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectMicPkDesignatedGiftSelectionPageSheetDelegate, MMFinderLiveConnectMicPkDurationSelectionPageSheetDelegate, MMFinderLiveConnectMicExtendedPkSelectAnchorParticipatingTableViewCellDelegate, MMFinderLiveConnectMicAnchorPkLayoutModePanelDelegate, MMFinderLiveConnectMicPkSelecting>
{
    BOOL _anchorParticipating; // +0x8
    BOOL _audienceParticipating; // +0x9
    BOOL _designatedGiftEnabled; // +0xa
    id /* block */ _selectAction; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    NSString * _micVirtualRoomId; // +0x20
    UITableView * _tableView; // +0x28
    MMUIButton * _confirmButton; // +0x30
    MMFinderLiveConnectMicPkSelectionModel * _model; // +0x38
    unsigned long long _selectedBattleMode; // +0x40
    MMFinderLiveRewardGiftItem * _designatedGiftItem; // +0x48
    unsigned long long _originalLayoutMode; // +0x50
    unsigned long long _selectedLayoutMode; // +0x58
    MMFinderLiveBattleDurationItem * _selectedDuration; // +0x60
    NSMutableArray * _playModeSectionItems; // +0x68
    NSMutableArray * _pkSettingSectionItems; // +0x70
}
- (id)initWithTaskId:(id)arg1 micVirtualRoomId:(id)arg2;
- (void)updateWithModel:(id)arg1;
- (void)updateInitialSelectData;
- (void)reloadData;
- (void)updatePlayModeSectionData;
- (void)updatePkSettingSectionData;
- (BOOL)isAnchorPkChangeLayoutEnabled;
- (unsigned long long)lastSelectPlayModeItem;
- (void)fixSelectionOptionsConflict;
- (void)initiateSelection;
- (BOOL)isCrossRoomPkEnabled;
- (id)liveTask;
- (void)layoutSubviews;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onPkDesignatedGiftSelected:(id)arg1 fromPageSheet:(id)arg2;
- (void)onPkDurationSelected:(id)arg1 fromPageSheet:(id)arg2;
- (void)onSwitchStateChangedTo:(BOOL)arg1 forAnchorParticipatingCell:(id)arg2;
- (void)onConnectMicAnchorPkLayoutModeChangeConfirmed:(unsigned long long)arg1;
- (void)onCanceled;
- (void)onConfirmed;
- (void)initializeComponents;
- (id)dequeueGenericItemCellForIndexPath:(id)arg1;
- (id)dequeueAnchorParticipatingCellForIndexPath:(id)arg1;
- (id)dequeueDesignatedGiftItemCellForIndexPath:(id)arg1;
- (id)dequeueDurationCellForIndexPath:(id)arg1;
- (id)dequeueLayoutModeCellForIndexPath:(id)arg1;
- (void)navigateToDesignatedGiftSelectionPanel;
- (void)navigateToDurationSelectionPanel;
- (void)navigateToLayoutModeSelectionPanel;
- (void)updateSelection;
- (BOOL)anchorParticipatingOptionApplicable;
- (id)createSelectionResultApplyingFinalDiagnostics:(BOOL)arg1;
- (void)updateConfirmButtonEnabled;
- (id /* block */)selectAction;
- (void)setSelectAction:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)micVirtualRoomId;
- (void)setMicVirtualRoomId:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (unsigned long long)selectedBattleMode;
- (void)setSelectedBattleMode:(unsigned long long)arg1;
- (BOOL)anchorParticipating;
- (void)setAnchorParticipating:(BOOL)arg1;
- (BOOL)audienceParticipating;
- (void)setAudienceParticipating:(BOOL)arg1;
- (BOOL)designatedGiftEnabled;
- (void)setDesignatedGiftEnabled:(BOOL)arg1;
- (id)designatedGiftItem;
- (void)setDesignatedGiftItem:(id)arg1;
- (unsigned long long)originalLayoutMode;
- (void)setOriginalLayoutMode:(unsigned long long)arg1;
- (unsigned long long)selectedLayoutMode;
- (void)setSelectedLayoutMode:(unsigned long long)arg1;
- (id)selectedDuration;
- (void)setSelectedDuration:(id)arg1;
- (id)playModeSectionItems;
- (void)setPlayModeSectionItems:(id)arg1;
- (id)pkSettingSectionItems;
- (void)setPkSettingSectionItems:(id)arg1;
- (void).cxx_destruct;
@end

