@interface MMLiveRewardGiftAttackContactSelectionView : MMPageSheetBaseView <MMLiveHalfScreenTitleBarViewDelegate, UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMFinderLiveTaskId * _taskId; // +0x8
    MMTableView * _contactTableView; // +0x10
    id <MMLiveRewardGiftAttackContactSelectionLogicDelegate> _logicDelegate; // +0x18
    MMLiveHalfScreenTitleBarView * _mainTitleBar; // +0x20
    MMFinderLiveTaskId * _liveTaskId; // +0x28
    MMLiveHalfScreenTitleBarView * _titleBarView; // +0x30
    MMCPLabel * _titleLabel; // +0x38
    MMUIView * _titleSeperatorLiveView; // +0x40
    MMUIView * _contentView; // +0x48
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)initView;
- (void)reloadData;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)pageSheetDidDisappear;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (id)liveTask;
- (void)onMMLiveHalfScreenTitleBarLeftButtonClicked:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)taskId;
- (id)contactTableView;
- (void)setContactTableView:(id)arg1;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)mainTitleBar;
- (void)setMainTitleBar:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)titleBarView;
- (void)setTitleBarView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleSeperatorLiveView;
- (void)setTitleSeperatorLiveView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end

