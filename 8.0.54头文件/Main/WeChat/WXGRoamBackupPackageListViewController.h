@interface WXGRoamBackupPackageListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, IRoamBackupPackageServiceExt>
{
    double m_cellHeight; // +0x68
    BOOL _bNeedScrollToDetailIndex; // +0x70
    UIView * _backgroundView; // +0x78
    UITableView * _sheetView; // +0x80
    NSMutableArray * _cellHeightArr; // +0x88
    long long _showDetailIndex; // +0x90
    UIView * _emptyView; // +0x98
    MMLoadingView * _loadingView; // +0xa0
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)makeEmptyView;
- (void)addNavigationBarInfo;
- (void)addBackupPackage;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onRoamBackupPackageServiceStartGetAllPackage;
- (void)onRoamBackupPackageServiceFinishGetAllPackageWithError:(int)arg1;
- (void)onRoamBackupPackageServiceStartUpdatePackages;
- (void)onRoamBackupPackageServiceFinishUpdatePackages:(int)arg1;
- (void)onRoamBackupPackageServiceStopStart;
- (void)onRoamBackupPackageServiceStopFinishRet:(int)arg1 packageID:(unsigned long long)arg2;
- (void)onRoamBackupPackageServiceFinishDeletePackages:(int)arg1 models:(id)arg2;
- (void)onRoamBackupPackageServiceDeleteBackupRet:(int)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (id)cellHeightArr;
- (void)setCellHeightArr:(id)arg1;
- (long long)showDetailIndex;
- (void)setShowDetailIndex:(long long)arg1;
- (BOOL)bNeedScrollToDetailIndex;
- (void)setBNeedScrollToDetailIndex:(BOOL)arg1;
- (id)emptyView;
- (void)setEmptyView:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

