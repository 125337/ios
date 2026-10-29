@interface MMFinderLiveConnectedMicUserCellView : UITableViewCell
{
    id <MMFinderLiveConnectedMicUserCellViewDelegate> _actionDelegate; // +0x8
    MMFinderLiveConnectMicUser * _connectMicUser; // +0x10
    UIView * _containerView; // +0x18
    UIView * _bottomSeparatorLine; // +0x20
    UILabel * _nickNameLabel; // +0x28
    MMLiveIconButton * _rightButton; // +0x30
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x38
    UILabel * _subTitleLabel; // +0x40
}
+ (id)ReuseIdentifier;
- (void)prepareForReuse;
- (void)configContainerView;
- (void)configActivityIndicatorView;
- (void)configRightButton;
- (void)configNickNameLabel;
- (void)configSubTitleLabel;
- (void)configBottomSeparatorLine;
- (void)onTapRightButton;
- (id)liveTask;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)connectMicUser;
- (void)setConnectMicUser:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

