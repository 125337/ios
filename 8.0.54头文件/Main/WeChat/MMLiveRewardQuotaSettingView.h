@interface MMLiveRewardQuotaSettingView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    unsigned int _curRewardQuota; // +0x8
    id <MMLiveRewardQuotaSettingViewDelegate> _operationDelegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    UIView * _contentView; // +0x20
    MMUIButton * _backButton; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMTableView * _rewardQuotaOptionTableView; // +0x38
    OrderedDictionary * _rewardQuotaOptions; // +0x40
}
- (id)initWithTaskId:(id)arg1 curRewardQuota:(unsigned int)arg2;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initDefaultData;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)liveTask;
- (double)contentViewHeight;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (void)dismissWithAnimated:(BOOL)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)backAction;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rewardQuotaOptionTableView;
- (void)setRewardQuotaOptionTableView:(id)arg1;
- (id)rewardQuotaOptions;
- (void)setRewardQuotaOptions:(id)arg1;
- (unsigned int)curRewardQuota;
- (void)setCurRewardQuota:(unsigned int)arg1;
- (void).cxx_destruct;
@end

