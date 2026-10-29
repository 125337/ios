@interface WACampusVoipNotiView : WAVoipNotiView
{
    UILabel * _nameLabel; // +0x8
    UIImageView * _iconView; // +0x10
    VoipAutoUpdateLabel * _descLabel; // +0x18
    UIButton * _rejectButton; // +0x20
    UIButton * _acceptButton; // +0x28
}
- (void)setMsg:(id)arg1;
- (void)setupViews;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)rejectButton;
- (void)setRejectButton:(id)arg1;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg1;
- (void).cxx_destruct;
@end
