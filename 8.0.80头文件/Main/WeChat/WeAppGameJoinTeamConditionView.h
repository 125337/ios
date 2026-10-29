@interface WeAppGameJoinTeamConditionView : MMPageSheetBaseViewController
{
    int _conditionId; // +0x70
    id <WeAppGameJoinTeamConditionCheckedDelegate> _delegate; // +0x78
    UIView * _contentView; // +0x80
    UIView * _topAreaView; // +0x88
    UIView * _listCondView; // +0x90
    MMUIButton * _backButton; // +0x98
    MMUILabel * _titleLabel; // +0xa0
    NSDictionary * _gameInfo; // +0xa8
    NSString * _conditionDesc; // +0xb0
    WeAppGameJoinTeamConditionItemView * _lastConditionItemView; // +0xb8
}
- (id)initWithParmas:(id)arg1;
- (void)viewDidLoad;
- (void)initUI;
- (void)layoutUI;
- (void)updateConditions:(id)arg1;
- (double)contentViewHeight;
- (void)onClickLeftButton;
- (void)onClickItemAction:(id)arg1;
- (id)getConditionDesc;
- (int)getConditionId;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)topAreaView;
- (void)setTopAreaView:(id)arg1;
- (id)listCondView;
- (void)setListCondView:(id)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)gameInfo;
- (void)setGameInfo:(id)arg1;
- (int)conditionId;
- (void)setConditionId:(int)arg1;
- (id)conditionDesc;
- (void)setConditionDesc:(id)arg1;
- (id)lastConditionItemView;
- (void)setLastConditionItemView:(id)arg1;
- (void).cxx_destruct;
@end
