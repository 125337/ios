@interface WCFinderFullCardTypeMediaTableViewCell : WCFinderTableViewCell <WCFinderFeedContentVMExt, WCFinderFocusCellProtocol>
{
    WCFinderSimplePlayerView * _playerView; // +0x8
    UIView * _bottomContainerView; // +0x10
    MMWebImageView * _headerView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _recommendReasonLabel; // +0x28
    MMWebImageButton * _rightButton; // +0x30
    MMUIImageView * _playIconView; // +0x38
    UIButton * _dragupTipsLabel; // +0x40
    WCFinderFeedContentVM * _contentVM; // +0x48
}
+ (id)cellId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setup;
- (void)setupSubView;
- (void)setup29179ReportParamsWithView:(id)arg1 viewId:(id)arg2;
- (id)gen29179ReportDict;
- (id)genImageButton;
- (CGSize)rightBtnSizeWithTitle:(id)arg1;
- (void)setupLayout;
- (double)getPlayVideoTotalTime;
- (void)updateWithContentVM:(id)arg1;
- (void)_updatePlayPauseState;
- (void)_updateUIWithContentVM:(id)arg1;
- (void)_updateUIWithLeftJumpInfo:(id)arg1 rightJumpInfo:(id)arg2;
- (BOOL)currentMediaIsPlay;
- (void)onClickRightButton:(id)arg1;
- (void)onClickBottomContainerView;
- (void)onTapInPlayer;
- (BOOL)shouldCaluculateAsFocusCell;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)stopVideoIfSupport;
- (void)onFeedContentJumpInfoContainerChanged:(id)arg1 isPureUIChanged:(BOOL)arg2 showPosition:(int)arg3 scene:(int)arg4;
- (void)onFeedContent:(id)arg1 pauseChanged:(BOOL)arg2;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)bottomContainerView;
- (void)setBottomContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)recommendReasonLabel;
- (void)setRecommendReasonLabel:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (id)dragupTipsLabel;
- (void)setDragupTipsLabel:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end
