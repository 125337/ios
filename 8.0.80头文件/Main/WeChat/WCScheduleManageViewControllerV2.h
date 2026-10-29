@interface WCScheduleManageViewControllerV2 : MMUIViewController <UITableViewDelegate, UITableViewDataSource, PBMessageObserverDelegate, IStrangerContactMgrExt, IFavoritesExt, WCScheduleLogicControllerDelegate>
{
    MMTableView * _tableView; // +0x70
    NSMutableArray * _todoItemArr; // +0x78
    WCScheduleLogicController * _scheduleRemindLogic; // +0x80
    long long _jumpToMsgid; // +0x88
}
- (id)init;
- (id)initWithJumpToMsgid:(long long)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)tryScrollTargetCell;
- (void)initData;
- (id)scheduleRemindLogic;
- (BOOL)retrieveScheduleData;
- (void)initView;
- (void)removeSchedule:(id)arg1;
- (void)initNavigationBar;
- (void)updateNavigationItems;
- (void)onReturn;
- (void)getContactsFromServerIfNecessary;
- (BOOL)isItem:(id)arg1 EqualToItem:(id)arg2;
- (unsigned long long)getCellTypeWithIndexPath:(id)arg1;
- (void)makeCell:(id)arg1 indexPath:(id)arg2;
- (void)makeNoRecentCell:(id)arg1;
- (void)makeScheduleItemCell:(id)arg1 item:(id)arg2 indexPath:(id)arg3;
- (id)getOperateButton:(id)arg1;
- (double)getCellHeightAtIndexPath:(id)arg1;
- (void)onModifyButtonClicked:(id)arg1;
- (void)onDetailButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showDetailWithWCScheduleItem:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (void)OnUpdateItems:(id)arg1;
- (void)onWCScheduleItem:(id)arg1 SetSuccess:(BOOL)arg2 ErrMsg:(id)arg3;
- (void)onWCScheduleSelectDatePickerView;
- (void)onWCScheduleItem:(id)arg1 cancelSuccess:(BOOL)arg2 errMsg:(id)arg3;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)todoItemArr;
- (void)setTodoItemArr:(id)arg1;
- (void)setScheduleRemindLogic:(id)arg1;
- (long long)jumpToMsgid;
- (void)setJumpToMsgid:(long long)arg1;
- (void).cxx_destruct;
@end
