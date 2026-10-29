@interface StorageCacheClassViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isFoldingWeAppInfo; // +0x68
    id <StorageCacheClassDelegate> _delegate; // +0x70
    NSMutableArray * _dataArray; // +0x78
    MMTableView * _tableView; // +0x80
    UIView * _footerView; // +0x88
    UIButton * _selectAllButton; // +0x90
    UIButton * _deleteButton; // +0x98
    UILabel * _sizeLabel; // +0xa0
    UILabel * _emptyLabel; // +0xa8
    NSMutableArray * _weAppDataArray; // +0xb0
    NSMutableArray * _selectedClassification; // +0xb8
    NSMutableArray * _selectedWeAppClassification; // +0xc0
}
+ (id)arrageTheWeAppChildClass:(id)arg1;
- (id)initWithClassification:(id)arg1;
- (void)viewDidLoad;
- (void)updateVisible;
- (void)viewDidLayoutSubviews;
- (CGRect)getTableViewFrame;
- (void)initEmptyView;
- (void)initTableView;
- (void)updateFooterPannelView;
- (void)initFooterPannelView;
- (void)reloadData;
- (void)onReturn;
- (void)onSelecteAll;
- (void)onDeleteSelectedData;
- (BOOL)p_isSelectEmpty;
- (BOOL)p_isDataAllSelect;
- (unsigned long long)p_getDeleteCacheSize;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataArray;
- (void)setDataArray:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)selectAllButton;
- (void)setSelectAllButton:(id)arg1;
- (id)deleteButton;
- (void)setDeleteButton:(id)arg1;
- (id)sizeLabel;
- (void)setSizeLabel:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (BOOL)isFoldingWeAppInfo;
- (void)setIsFoldingWeAppInfo:(BOOL)arg1;
- (id)weAppDataArray;
- (void)setWeAppDataArray:(id)arg1;
- (id)selectedClassification;
- (void)setSelectedClassification:(id)arg1;
- (id)selectedWeAppClassification;
- (void)setSelectedWeAppClassification:(id)arg1;
- (void).cxx_destruct;
@end

