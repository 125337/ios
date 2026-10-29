@interface MMLiveGamePlayTogetherJoinTeamCell : MMLiveGamePlayTogetherTableViewCell <UIGestureRecognizerDelegate>
{
    BOOL _enableTeamUp; // +0x8
    UIView * _containerView; // +0x10
    UILabel * _liveRequirementLabel; // +0x18
    UILabel * _gameRequirementLabel; // +0x20
    UILabel * _teamHeadCountLabel; // +0x28
    MMUIButton * _teamupStartButton; // +0x30
    MMUILabel * _teamupNextLabel; // +0x38
    UITapGestureRecognizer * _tapGesture; // +0x40
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupViews;
- (void)setupAction;
- (void)tapAction;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWithItem:(id)arg1;
- (id)containerView;
- (id)liveRequirementLabel;
- (id)gameRequirementLabel;
- (id)teamHeadCountLabel;
- (id)teamupStartButton;
- (id)teamupNextLabel;
- (void)onCellTeamUpStartButtonClicked;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)setContainerView:(id)arg1;
- (void)setLiveRequirementLabel:(id)arg1;
- (void)setGameRequirementLabel:(id)arg1;
- (void)setTeamHeadCountLabel:(id)arg1;
- (void)setTeamupStartButton:(id)arg1;
- (void)setTeamupNextLabel:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (BOOL)enableTeamUp;
- (void)setEnableTeamUp:(BOOL)arg1;
- (void).cxx_destruct;
@end

