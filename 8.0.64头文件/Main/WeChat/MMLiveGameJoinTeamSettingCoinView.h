@interface MMLiveGameJoinTeamSettingCoinView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource, MMLiveGameJoinTeamSettingCoinValueViewDelegate>
{
    id <MMLiveGameJoinTeamSettingViewDelegate> _operationDelegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    UIView * _contentView; // +0x18
    UIView * _topAreaView; // +0x20
    MMUIButton * _leftButton; // +0x28
    MMUIButton * _rightButton; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMTableView * _tableView; // +0x40
    MMLiveGameJoinTeamSettingCoinValueView * _settingCoinValueView; // +0x48
    NSMutableArray * _coinValues; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)setExtraCellLineHidden:(id)arg1;
- (id)liveTask;
- (void)leftButtonAction;
- (void)rightButtonAction;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)onViewDismissed:(BOOL)arg1;
- (double)parentHeight;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)topAreaView;
- (void)setTopAreaView:(id)arg1;
- (id)leftButton;
- (void)setLeftButton:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)settingCoinValueView;
- (void)setSettingCoinValueView:(id)arg1;
- (id)coinValues;
- (void)setCoinValues:(id)arg1;
- (void).cxx_destruct;
@end
