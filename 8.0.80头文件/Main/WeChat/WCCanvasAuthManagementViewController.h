@interface WCCanvasAuthManagementViewController : MMUIViewController
{
    NSDictionary * _userInfo; // +0x70
    WCTableViewManager * _tableViewMgr; // +0x78
}
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)updateTableCell;
- (id)genSwitchCellForSel:(SEL)arg1 title:(id)arg2 desc:(id)arg3 on:(BOOL)arg4;
- (void)opLocationPermission:(id)arg1;
- (void)opAutoFillData:(id)arg1;
- (void)reportUserAction:(id)arg1 name:(id)arg2;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)tableViewMgr;
- (void)setTableViewMgr:(id)arg1;
- (void).cxx_destruct;
@end
