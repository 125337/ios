@interface ContactsSearchFilterDropDownView : UIView <UITableViewDelegate, UITableViewDataSource, MMDatePickerHalfSheetViewDelegate>
{
    BOOL _showing; // +0x8
    id <ContactsSearchFilterDropDownViewDelegate> _filterDelegate; // +0x10
    double _maxPanelHeightLimit; // +0x18
    long long _restrictedSection; // +0x20
    UIControl * _dimMaskView; // +0x28
    UIView * _panelView; // +0x30
    UITableView * _tableView; // +0x38
    UIView * _bottomBar; // +0x40
    NSArray * _tagList; // +0x48
    long long _selectedTimeIndex; // +0x50
    long long _selectedPermissionIndex; // +0x58
    long long _selectedTagIndex; // +0x60
    long long _selectedLastChatTimeIndex; // +0x68
    long long _selectedSourceIndex; // +0x70
    NSArray * _sourceNames; // +0x78
    NSArray * _sourceSceneSets; // +0x80
    long long _selectedYear; // +0x88
    long long _selectedMonth; // +0x90
    long long _selectedEndYear; // +0x98
    long long _selectedEndMonth; // +0xa0
    long long _selectedLastChatStartYear; // +0xa8
    long long _selectedLastChatStartMonth; // +0xb0
    long long _selectedLastChatEndYear; // +0xb8
    long long _selectedLastChatEndMonth; // +0xc0
    MMDatePickerHalfSheetView * _timePicker; // +0xc8
    long long _currentPickerSection; // +0xd0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)loadData;
- (void)reloadTagData;
- (void)setSourceCandidatesWithNames:(id)arg1 sceneSets:(id)arg2;
- (void)setupUI;
- (void)layoutBottomBarSubviews;
- (id)bottomBarCollapseTitle;
- (double)emptyStateHeight;
- (double)calculateContentHeight;
- (BOOL)isBottomBarVisible;
- (double)bottomBarHeight;
- (double)maxPanelHeight;
- (double)targetPanelHeight;
- (void)relayoutPanel;
- (void)refreshPanelHeightAnimated:(BOOL)arg1;
- (BOOL)isShowing;
- (void)showAnimated:(BOOL)arg1;
- (void)hideAnimated:(BOOL)arg1;
- (void)onMaskTapped;
- (void)onCollapseButtonClicked;
- (void)requestCollapse;
- (void)onClearButtonClicked;
- (void)notifyStateUpdated;
- (id)displayTextForStartYear:(long long)arg1 startMonth:(long long)arg2 endYear:(long long)arg3 endMonth:(long long)arg4;
- (id)phraseTimeTextForStartYear:(long long)arg1 startMonth:(long long)arg2 endYear:(long long)arg3 endMonth:(long long)arg4;
- (id)itemsForSection:(long long)arg1;
- (long long)selectedIndexForSection:(long long)arg1;
- (id)headerTitleForSection:(long long)arg1;
- (double)sectionHeaderHeight;
- (BOOL)isSectionVisible:(long long)arg1;
- (BOOL)isTagEmptyState;
- (long long)sectionForDisplayedIndex:(long long)arg1;
- (long long)numberOfVisibleSections;
- (long long)displayedIndexForSection:(long long)arg1;
- (void)reloadSemanticSection:(long long)arg1;
- (double)heightForDisplayedSection:(long long)arg1;
- (double)optionButtonWidth;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)updateButtonStyle:(id)arg1 selected:(BOOL)arg2;
- (void)onFilterButtonTapped:(id)arg1;
- (void)onResetTimeButtonTapped:(id)arg1;
- (void)resetSelections;
- (void)resetSelectionsToUnlimited;
- (BOOL)isAllUnlimited;
- (id)getSelectedSourceSceneSet;
- (id)getSelectedTagData;
- (id)getSelectedFilterPhrases;
- (id)buildCurrentFilterState;
- (void)applyInitialState:(id)arg1;
- (void)onDatePickerConfirmWithYear:(long long)arg1 month:(long long)arg2;
- (void)onDatePickerConfirmWithStartYear:(long long)arg1 startMonth:(long long)arg2 endYear:(long long)arg3 endMonth:(long long)arg4;
- (void)onDatePickerCancel;
- (id)filterDelegate;
- (void)setFilterDelegate:(id)arg1;
- (double)maxPanelHeightLimit;
- (void)setMaxPanelHeightLimit:(double)arg1;
- (long long)restrictedSection;
- (void)setRestrictedSection:(long long)arg1;
- (id)dimMaskView;
- (void)setDimMaskView:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)bottomBar;
- (void)setBottomBar:(id)arg1;
- (BOOL)showing;
- (void)setShowing:(BOOL)arg1;
- (id)tagList;
- (void)setTagList:(id)arg1;
- (long long)selectedTimeIndex;
- (void)setSelectedTimeIndex:(long long)arg1;
- (long long)selectedPermissionIndex;
- (void)setSelectedPermissionIndex:(long long)arg1;
- (long long)selectedTagIndex;
- (void)setSelectedTagIndex:(long long)arg1;
- (long long)selectedLastChatTimeIndex;
- (void)setSelectedLastChatTimeIndex:(long long)arg1;
- (long long)selectedSourceIndex;
- (void)setSelectedSourceIndex:(long long)arg1;
- (id)sourceNames;
- (void)setSourceNames:(id)arg1;
- (id)sourceSceneSets;
- (void)setSourceSceneSets:(id)arg1;
- (long long)selectedYear;
- (void)setSelectedYear:(long long)arg1;
- (long long)selectedMonth;
- (void)setSelectedMonth:(long long)arg1;
- (long long)selectedEndYear;
- (void)setSelectedEndYear:(long long)arg1;
- (long long)selectedEndMonth;
- (void)setSelectedEndMonth:(long long)arg1;
- (long long)selectedLastChatStartYear;
- (void)setSelectedLastChatStartYear:(long long)arg1;
- (long long)selectedLastChatStartMonth;
- (void)setSelectedLastChatStartMonth:(long long)arg1;
- (long long)selectedLastChatEndYear;
- (void)setSelectedLastChatEndYear:(long long)arg1;
- (long long)selectedLastChatEndMonth;
- (void)setSelectedLastChatEndMonth:(long long)arg1;
- (id)timePicker;
- (void)setTimePicker:(id)arg1;
- (long long)currentPickerSection;
- (void)setCurrentPickerSection:(long long)arg1;
- (void).cxx_destruct;
@end
