@interface MMFinderLiveFansGroupAnchorCardEditPanel : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMFinderLiveSimpleSelectionSheetViewDelegate>
{
    unsigned long long _currentVisibility; // +0x8
    id <MMFinderLiveFansGroupAnchorCardEditPanelDelegate> _panelDelegate; // +0x10
    UIView * _contentView; // +0x18
    UITableView * _tableView; // +0x20
    MMFinderLiveSimpleSelectionSheetView * _visibilitySelectionSheetView; // +0x28
}
- (id)init;
- (void)setupPageSheetConfig;
- (id)genDoneButton;
- (double)contentWidth;
- (double)contentHeight;
- (void)createAllViews;
- (void)layoutSubviews;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onDoneButtonClicked;
- (void)showVisibilitySelectionSheetView;
- (void)simpleSelectionSheetView:(id)arg1 willCloseWithSelectedIndex:(unsigned long long)arg2;
- (unsigned long long)currentVisibility;
- (void)setCurrentVisibility:(unsigned long long)arg1;
- (id)panelDelegate;
- (void)setPanelDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)visibilitySelectionSheetView;
- (void)setVisibilitySelectionSheetView:(id)arg1;
- (void).cxx_destruct;
@end
