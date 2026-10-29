@interface SettingMigrationViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _mainTableView; // +0x68
    NSArray * _iconNameArray; // +0x70
    NSArray * _titleArray; // +0x78
    unsigned long long _vcType; // +0x80
    NSString * _titleString; // +0x88
}
+ (unsigned int)checkSupportMigratePC;
- (id)initWithType:(unsigned long long)arg1;
- (id)navigationBarBackgroundColor;
- (CGRect)getTableViewFrame;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)getHeaderView;
- (void)migrateToPC;
- (void)migrateToMobile;
- (void)backupToPC;
- (void)backupToDevices;
- (void)addNasDevice;
- (void)addCloudService;
- (void)showDeviceListView;
- (void)firstRowTapAction;
- (void)secondRowTapAction;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)mainTableView;
- (void)setMainTableView:(id)arg1;
- (id)iconNameArray;
- (void)setIconNameArray:(id)arg1;
- (id)titleArray;
- (void)setTitleArray:(id)arg1;
- (unsigned long long)vcType;
- (void)setVcType:(unsigned long long)arg1;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (void).cxx_destruct;
@end

