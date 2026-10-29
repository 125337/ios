@interface WCFinderUnreadPushTableViewCell : MMTableViewCell
{
    id /* block */ _closeAction; // +0x8
    MMUILabel * _subTitleLabel; // +0x10
    MMUILabel * _greenLabel; // +0x18
    MMUIButton * _closeButton; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMHeadImageView * _headImageView; // +0x30
    MMSessionInfo * _sessionInfo; // +0x38
    MMUILabel * _firstLabel; // +0x40
    MMUILabel * _secondLabel; // +0x48
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithSessionInfo:(id)arg1;
- (void)updateLayout;
- (void)setupUI;
- (void)closeFinderUnreadMsg:(id)arg1;
- (void)layoutSubviews;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)greenLabel;
- (void)setGreenLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)sessionInfo;
- (void)setSessionInfo:(id)arg1;
- (id)firstLabel;
- (void)setFirstLabel:(id)arg1;
- (id)secondLabel;
- (void)setSecondLabel:(id)arg1;
- (void).cxx_destruct;
@end
