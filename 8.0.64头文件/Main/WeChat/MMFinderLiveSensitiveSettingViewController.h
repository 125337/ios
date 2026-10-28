@interface MMFinderLiveSensitiveSettingViewController : MMUILandscapeSheetViewController
{
    MMFinderLiveTaskId * _taskId; // +0x70
    MMFinderLiveSensitiveTableView * _tableView; // +0x78
    MMFinderLiveCommentSensitiveTableViewModel * _tableViewModel; // +0x80
    MMFinderLiveSensitiveLogic * _sensitiveLogic; // +0x88
}
+ (void)presentSensitiveSettingVCFromVC:(id)arg1 taskId:(id)arg2;
- (id)initWithLiveTaskId:(id)arg1;
- (void)viewDidLoad;
- (void)loadNavigationItems;
- (void)loadTableView;
- (id)createSensitiveTableVM:(id)arg1;
- (void)requestSensitiveDatas;
- (BOOL)checkNeedToastFailForAction:(unsigned long long)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)onSearchClicked:(id)arg1;
- (id)finderLiveTask;
- (id)sensitiveLogic;
- (void)reportForDeleteSensitiveItem:(id)arg1;
- (void)reportForAddSensitiveItem:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)tableViewModel;
- (void)setTableViewModel:(id)arg1;
- (void)setSensitiveLogic:(id)arg1;
- (void).cxx_destruct;
@end
