@interface SettingMigrationViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _isMigrationOptEnable; // +0x70
    BOOL _isCloudBackupEnable; // +0x71
    unsigned long long _enterFrom; // +0x78
    UITableView * _mainTableView; // +0x80
    NSArray * _sectionArr; // +0x88
    NSString * _titleString; // +0x90
}
+ (unsigned int)checkSupportMigratePC;
- (id)init;
- (id)navigationBarBackgroundColor;
- (CGRect)getTableViewFrame;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)getHeaderView;
- (void)migrateFromCloud;
- (void)migrateFromMobile;
- (void)migrateFromOthers;
- (void)migrateToPC;
- (void)migrateToMobile;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (unsigned long long)enterFrom;
- (void)setEnterFrom:(unsigned long long)arg1;
- (id)mainTableView;
- (void)setMainTableView:(id)arg1;
- (id)sectionArr;
- (void)setSectionArr:(id)arg1;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (BOOL)isMigrationOptEnable;
- (void)setIsMigrationOptEnable:(BOOL)arg1;
- (BOOL)isCloudBackupEnable;
- (void)setIsCloudBackupEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
