@interface NoPwdEntryViewController : MMUIViewController
{
    WCSheetView * _sheetView; // +0x70
    NoPwdEntryHeaderView * _headerView; // +0x78
    UIView * _itemsView; // +0x80
    UIView * _labelContainerView; // +0x88
}
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)navigationBarBackgroundColor;
- (void)initView;
- (void)updateSheetViewFrame;
- (void)reloadView;
- (void)reloadViewForCreate;
- (void)useDefaultHeaderView;
- (void)reloadItemsView;
- (void)onNoPwdSwitchChanged:(id)arg1;
- (id)labelContainerView;
- (void)initDataReportData;
- (void)reportSwitchStatus:(BOOL)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)itemsView;
- (void)setItemsView:(id)arg1;
- (void)setLabelContainerView:(id)arg1;
- (void).cxx_destruct;
@end
