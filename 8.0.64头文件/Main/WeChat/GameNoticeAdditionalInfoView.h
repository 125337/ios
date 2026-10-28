@interface GameNoticeAdditionalInfoView : UIView
{
    GameNoticeAdditionalInfo * _additionalInfo; // +0x8
    MMWebImageView * _infoIcon; // +0x10
    UILabel * _headLabel; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _subTitleLabel; // +0x28
    MMUIButton * _additionalButton; // +0x30
    UIView * _tapView; // +0x38
    id <GameNoticeAdditionalInfoViewDelegate> _delegate; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)setAdditionalInfo:(id)arg1;
- (void)clickJumpButton;
- (id)additionalInfo;
- (id)infoIcon;
- (void)setInfoIcon:(id)arg1;
- (id)headLabel;
- (void)setHeadLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)additionalButton;
- (void)setAdditionalButton:(id)arg1;
- (id)tapView;
- (void)setTapView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
