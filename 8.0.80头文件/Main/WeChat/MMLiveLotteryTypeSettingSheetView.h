@interface MMLiveLotteryTypeSettingSheetView : MMPageSheetBaseView <UITableViewDelegate, UITableViewDataSource>
{
    BOOL _joinTeamDisable; // +0x8
    unsigned int _curJoinTeamMode; // +0xc
    int _selectedOptionValue; // +0x10
    id <MMLiveLotteryTypeSettingSheetViewDelegate> _operationDelegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    UIView * _contentView; // +0x28
    MMUIButton * _closeButton; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMTableView * _optionTableView; // +0x40
    NSArray * _lotteryTypeOptions; // +0x48
    PrizeData * _prizeData; // +0x50
    double _contentHeight; // +0x58
    UIView * _sepelateLine; // +0x60
}
- (id)initWithTaskId:(id)arg1 selectedOptionValue:(int)arg2 prizeData:(id)arg3 joinTeamDisable:(BOOL)arg4 curJoinTeamMode:(unsigned int)arg5;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (BOOL)canShowStartSelectLotteryType:(int)arg1;
- (id)getPrizeTypeWithSelectLotteryType:(int)arg1;
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
- (BOOL)enableLiveLotteryTypeInfo:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)closeAction;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (unsigned int)curJoinTeamMode;
- (void)setCurJoinTeamMode:(unsigned int)arg1;
- (BOOL)joinTeamDisable;
- (void)setJoinTeamDisable:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)optionTableView;
- (void)setOptionTableView:(id)arg1;
- (id)lotteryTypeOptions;
- (void)setLotteryTypeOptions:(id)arg1;
- (int)selectedOptionValue;
- (void)setSelectedOptionValue:(int)arg1;
- (id)prizeData;
- (void)setPrizeData:(id)arg1;
- (double)contentHeight;
- (void)setContentHeight:(double)arg1;
- (id)sepelateLine;
- (void)setSepelateLine:(id)arg1;
- (void).cxx_destruct;
@end
