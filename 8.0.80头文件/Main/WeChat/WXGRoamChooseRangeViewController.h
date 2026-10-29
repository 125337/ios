@interface WXGRoamChooseRangeViewController : MMWindowViewController <IRoamBackupPackageServiceExt, UITableViewDelegate, UITableViewDataSource>
{
    double m_addButtonHeight; // +0x80
    BOOL _isUpadte; // +0x88
    UINavigationItem * _customNavigationItem; // +0x90
    MMUINavigationBar * _customNavigationBar; // +0x98
    NSMutableArray * _cellHeightArr; // +0xa0
    UITableView * _sheetView; // +0xa8
}
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setupNavBar;
- (id)makeAddButtonCellWithWidth:(double)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onCancel;
- (void)onCreate;
- (void)updateView;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (BOOL)isUpadte;
- (void)setIsUpadte:(BOOL)arg1;
- (id)customNavigationItem;
- (void)setCustomNavigationItem:(id)arg1;
- (id)customNavigationBar;
- (void)setCustomNavigationBar:(id)arg1;
- (id)cellHeightArr;
- (void)setCellHeightArr:(id)arg1;
- (id)sheetView;
- (void)setSheetView:(id)arg1;
- (void).cxx_destruct;
@end
