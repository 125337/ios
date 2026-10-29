@interface WeAppGameJoinTeamView : MMPageSheetBaseViewController <WeAppGameJoinTeamConditionCheckedDelegate>
{
    BOOL _canJoin; // +0x68
    int _actionMode; // +0x6c
    int _sourceType; // +0x70
    id <WeAppGameJoinTeamViewDelegate> _operationDelegate; // +0x78
    MMFinderLiveTaskId * _taskId; // +0x80
    id /* block */ _completeCloseBlock; // +0x88
    UIView * _contentView; // +0x90
    MMUILabel * _titleLabel; // +0x98
    MMUIButton * _closeButton; // +0xa0
    MMUIButton * _startButton; // +0xa8
    NSDictionary * _gameInfo; // +0xb0
    NSString * _cannotJoinReason; // +0xb8
    MMUILabel * _noticeLabel; // +0xc0
    WeAppGameJoinTeamDescView * _descView; // +0xc8
    WeAppGameJoinTeamHistoryView * _historyView; // +0xd0
    WeAppGameJoinTeamSectionView * _sectionView; // +0xd8
    WeAppGameJoinTeamConditionView * _conditionView; // +0xe0
}
- (id)initWithTaskId:(id)arg1 gameInfo:(id)arg2 complete:(id /* block */)arg3;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initUI:(id)arg1;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)onClickShowHistoryButton;
- (void)onClickShowConditionButton;
- (void)onClickCloseButton;
- (void)onClickStartButton;
- (void)fetchGameSetTeamupConfigRequest;
- (void)notifyResult;
- (void)notifyReportForAction:(unsigned long long)arg1;
- (id)getActionDesc:(int)arg1;
- (void)onWeAppGameJoinTeamConditionBack;
- (void)onWeAppGameJoinTeamConditionChecked;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id /* block */)completeCloseBlock;
- (void)setCompleteCloseBlock:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)startButton;
- (void)setStartButton:(id)arg1;
- (id)gameInfo;
- (void)setGameInfo:(id)arg1;
- (int)actionMode;
- (void)setActionMode:(int)arg1;
- (BOOL)canJoin;
- (void)setCanJoin:(BOOL)arg1;
- (int)sourceType;
- (void)setSourceType:(int)arg1;
- (id)cannotJoinReason;
- (void)setCannotJoinReason:(id)arg1;
- (id)noticeLabel;
- (void)setNoticeLabel:(id)arg1;
- (id)descView;
- (void)setDescView:(id)arg1;
- (id)historyView;
- (void)setHistoryView:(id)arg1;
- (id)sectionView;
- (void)setSectionView:(id)arg1;
- (id)conditionView;
- (void)setConditionView:(id)arg1;
- (void).cxx_destruct;
@end

