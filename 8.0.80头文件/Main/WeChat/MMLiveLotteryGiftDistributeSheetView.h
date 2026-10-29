@interface MMLiveLotteryGiftDistributeSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    id <MMLiveLotteryGiftDistributeSheetViewDelegate> _operationDelegate; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    UIView * _contentView; // +0x18
    MMUIButton * _closeButton; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMTableView * _optionTableView; // +0x30
    NSArray * _lotteryGiftDistributeTypeOptions; // +0x38
    long long _selectedDistributeType; // +0x40
}
- (id)initWithTaskId:(id)arg1 selectedDistributeType:(long long)arg2;
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
- (void)closeAction;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)optionTableView;
- (void)setOptionTableView:(id)arg1;
- (id)lotteryGiftDistributeTypeOptions;
- (void)setLotteryGiftDistributeTypeOptions:(id)arg1;
- (long long)selectedDistributeType;
- (void)setSelectedDistributeType:(long long)arg1;
- (void).cxx_destruct;
@end
