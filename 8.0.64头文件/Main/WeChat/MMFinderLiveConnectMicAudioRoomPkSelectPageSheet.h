@interface MMFinderLiveConnectMicAudioRoomPkSelectPageSheet : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveConnectMicPkDurationSelectionPageSheetDelegate, MMFinderLiveConnectMicPkSelecting>
{
    id /* block */ _selectAction; // +0x8
    UITableView * _tableView; // +0x10
    MMUIButton * _confirmButton; // +0x18
    MMFinderLiveConnectMicPkSelectionModel * _model; // +0x20
    unsigned long long _selectedBattleMode; // +0x28
    MMFinderLiveBattleDurationItem * _selectedDuration; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithModel:(id)arg1;
- (void)initiateSelection;
- (void)layoutSubviews;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willDeselectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)onPkDurationSelected:(id)arg1 fromPageSheet:(id)arg2;
- (void)onCanceled;
- (void)onConfirmed;
- (void)initializeComponents;
- (id)dequeueGenericItemCellForIndexPath:(id)arg1;
- (id)dequeueDurationCellForIndexPath:(id)arg1;
- (void)navigateToDurationSelectionPanel;
- (void)updateSelection;
- (id)createSelectionResult;
- (void)updateConfirmButtonEnabled;
- (id /* block */)selectAction;
- (void)setSelectAction:(id /* block */)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (unsigned long long)selectedBattleMode;
- (void)setSelectedBattleMode:(unsigned long long)arg1;
- (id)selectedDuration;
- (void)setSelectedDuration:(id)arg1;
- (void).cxx_destruct;
@end
