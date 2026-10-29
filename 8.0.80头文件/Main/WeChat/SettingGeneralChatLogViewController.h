@interface SettingGeneralChatLogViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _tableLayoutRefreshPending; // +0x70
    BOOL _isPomEnable; // +0x71
    NSArray * _iconArray; // +0x78
    NSArray * _titleArray; // +0x80
    NSArray * _tipsArray; // +0x88
    NSArray * _actionArray; // +0x90
    NSArray * _chatLogCells; // +0x98
    UITableView * _mainTableView; // +0xa0
    UIView * _bottomClearFooterView; // +0xa8
    MMUIButton * _bottomClearButton; // +0xb0
    double _lastLayoutWidth; // +0xb8
}
- (id)init;
- (CGRect)getTableViewFrame;
- (double)cellContentWidthForTableView:(id)arg1;
- (BOOL)disableScrollViewBottomInsetAdjustment;
- (void)viewDidLoad;
- (void)scheduleTableLayoutRefresh;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)setupBottomClearFooterView;
- (void)adjustBottomClearFooterLayout;
- (void)onTapClearAll;
- (void)showBackupTip;
- (void)enterMigration;
- (void)showClearLocalDataView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
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
- (id)chatLogCells;
- (void)setChatLogCells:(id)arg1;
- (id)mainTableView;
- (void)setMainTableView:(id)arg1;
- (id)bottomClearFooterView;
- (void)setBottomClearFooterView:(id)arg1;
- (id)bottomClearButton;
- (void)setBottomClearButton:(id)arg1;
- (double)lastLayoutWidth;
- (void)setLastLayoutWidth:(double)arg1;
- (BOOL)tableLayoutRefreshPending;
- (void)setTableLayoutRefreshPending:(BOOL)arg1;
- (BOOL)isPomEnable;
- (void)setIsPomEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end
