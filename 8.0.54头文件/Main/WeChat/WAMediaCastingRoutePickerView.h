@interface WAMediaCastingRoutePickerView : WAMediaCastingPageSheet <WAMediaCastingRoutePickerViewModelDelegate, UITableViewDelegate, UITableViewDataSource>
{
    id <WAMediaCastingRoutePickerViewDelegate> _pickerViewDelegate; // +0x8
    WAMediaCastingRoutePickerViewModel * _viewModel; // +0x10
    WAMediaCastingRoutePickerDeviceItem * _selectedDevice; // +0x18
    UITableView * _tableView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUIButton * _closeButton; // +0x30
    MMUIButton * _guideButton; // +0x38
    WAMediaCastingRoutePickerTableHeaderView * _recentlyHeader; // +0x40
    WAMediaCastingRoutePickerTableHeaderView * _availableHeader; // +0x48
}
- (id)initWithViewModel:(id)arg1;
- (void)loadAllSubviews;
- (void)setupViewModel:(id)arg1;
- (void)addSubviews:(id)arg1;
- (void)layoutSubviews;
- (CGSize)contentViewSize;
- (BOOL)cornerRaduis;
- (CGPoint)containerPoint;
- (CGPoint)containerShowAnimationStartPoint;
- (CGPoint)containerDismissAnimationEndPoint;
- (id)tableView;
- (id)titleLabel;
- (id)closeButton;
- (id)guideButton;
- (id)recentlyHeader;
- (id)availableHeader;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)notifySelected:(id)arg1;
- (void)onMediaCastingRoutePickerViewModelDeviceListChanged:(id)arg1;
- (void)onMediaCastingRoutePickerViewModelSearchingStatusChanged:(id)arg1;
- (void)onMediaCastingRoutePickerViewModelCurrentDeviceStatusChanged:(id)arg1;
- (BOOL)curOrientationIsLandscape;
- (void)handleSearchingStatusChanged:(BOOL)arg1;
- (void)handleCurrentDeviceStatusChanged:(unsigned long long)arg1;
- (void)onClickCloseButton:(id)arg1;
- (void)onClickGuideButton:(id)arg1;
- (id)pickerViewDelegate;
- (void)setPickerViewDelegate:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)selectedDevice;
- (void)setSelectedDevice:(id)arg1;
- (void)setTableView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (void)setGuideButton:(id)arg1;
- (void)setRecentlyHeader:(id)arg1;
- (void)setAvailableHeader:(id)arg1;
- (void).cxx_destruct;
@end

