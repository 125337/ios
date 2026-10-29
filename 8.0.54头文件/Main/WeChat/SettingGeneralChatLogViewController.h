@interface SettingGeneralChatLogViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray * _iconArray; // +0x68
    NSArray * _titleArray; // +0x70
    NSArray * _tipsArray; // +0x78
    NSArray * _actionArray; // +0x80
    NSMutableArray * _cellHeightArr; // +0x88
    UITableView * _mainTableView; // +0x90
}
- (id)init;
- (CGRect)getTableViewFrame;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)showBackupTip;
- (void)enterMigration;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)iconArray;
- (void)setIconArray:(id)arg1;
- (id)titleArray;
- (void)setTitleArray:(id)arg1;
- (id)tipsArray;
- (void)setTipsArray:(id)arg1;
- (id)actionArray;
- (void)setActionArray:(id)arg1;
- (id)cellHeightArr;
- (void)setCellHeightArr:(id)arg1;
- (id)mainTableView;
- (void)setMainTableView:(id)arg1;
- (void).cxx_destruct;
@end

