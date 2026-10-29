@interface WAPNAuthManagerViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, WAPNAuthVerifySheetDelegate, WAPNAuthAddViewControllerDelegate, WAPNAuthManagerCellDelegate, ILinkEventExt>
{
    BOOL _managing; // +0x70
    id <WAPNAuthManagerViewControllerDelegate> _managerDelegate; // +0x78
    NSString * _pagePath; // +0x80
    WAPNAuthCgiHelper * _cgiHelper; // +0x88
    WAPNAuthSheetInfo * _sheetInfo; // +0x90
    NSString * _requestId; // +0x98
    UITableView * _tableView; // +0xa0
    WAPNAuthPhoneInfo * _readyDeleteInfo; // +0xa8
    NSMutableDictionary * _lastVerifyTimeMap; // +0xb0
    WAPNAuthVerifySheet * _verifySheet; // +0xb8
    WAPNAuthPhoneInfo * _pendingPhone; // +0xc0
}
- (id)initWithCgiHelper:(id)arg1 sheetInfo:(id)arg2 requestId:(id)arg3;
- (BOOL)shouldInteractiveDismiss;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)updateManageBarButton;
- (void)onTapManageToggle;
- (void)setupBackButtonIfNeeded;
- (void)onTapBack;
- (id)phoneList;
- (BOOL)canAddPhone;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)managerCellDidTapDeleteIcon:(id)arg1;
- (void)managerCellDidTapDeleteConfirm:(id)arg1;
- (void)collapseReadyDeleteAnimated:(BOOL)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)deletePhone:(id)arg1;
- (void)enterUnbindFlowWithPhone:(id)arg1;
- (void)showVerifyForPhone:(id)arg1;
- (void)pushUnbindWithPhone:(id)arg1 hasInitData:(BOOL)arg2 mobileUserCount:(long long)arg3 isOnlySelfUsed:(BOOL)arg4;
- (void)onTapAddPhone;
- (void)verifySheet:(id)arg1 didSucceedWithResult:(id)arg2;
- (void)verifySheetDidClose:(id)arg1;
- (void)addVC:(id)arg1 didAddPhone:(id)arg2;
- (id)managerDelegate;
- (void)setManagerDelegate:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)cgiHelper;
- (void)setCgiHelper:(id)arg1;
- (id)sheetInfo;
- (void)setSheetInfo:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (BOOL)managing;
- (void)setManaging:(BOOL)arg1;
- (id)readyDeleteInfo;
- (void)setReadyDeleteInfo:(id)arg1;
- (id)lastVerifyTimeMap;
- (void)setLastVerifyTimeMap:(id)arg1;
- (id)verifySheet;
- (void)setVerifySheet:(id)arg1;
- (id)pendingPhone;
- (void)setPendingPhone:(id)arg1;
- (void).cxx_destruct;
@end
