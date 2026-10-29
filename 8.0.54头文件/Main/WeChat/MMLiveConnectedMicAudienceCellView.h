@interface MMLiveConnectedMicAudienceCellView : UITableViewCell
{
    BOOL _isDisabled; // +0x8
    MMLiveApplyConnectMicAudience * _audienceInfo; // +0x10
    MMHeadImageView * _avatarView; // +0x18
    UILabel * _nickNameLabel; // +0x20
    MMUIButton * _rightButton; // +0x28
    UIView * _bottomSeparatorLine; // +0x30
    MMLiveDotLoadingView * _dotLoadingView; // +0x38
    unsigned long long _audienceCellState; // +0x40
    id <MMLiveConnectedMicAudienceCellViewDelegate> _delegate; // +0x48
}
- (void)prepareForReuse;
- (void)updateViews;
- (void)updateViewsFrame;
- (void)layoutSubviews;
- (void)showDotLoading;
- (void)hideDotLoading;
- (void)onTapRightButton;
- (id)audienceInfo;
- (void)setAudienceInfo:(id)arg1;
- (id)avatarView;
- (void)setAvatarView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)rightButton;
- (void)setRightButton:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (id)dotLoadingView;
- (void)setDotLoadingView:(id)arg1;
- (unsigned long long)audienceCellState;
- (void)setAudienceCellState:(unsigned long long)arg1;
- (BOOL)isDisabled;
- (void)setIsDisabled:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

