@interface MMLiveAchorWeakNetTipView : UIView
{
    MMUIImageView * _nextImageView; // +0x8
    id /* block */ _actionClickBlock; // +0x10
    unsigned long long _type; // +0x18
    MMUIButton * _actionButton; // +0x20
    MMUIImageView * _errImageView; // +0x28
    MMUILabel * _titleLabel; // +0x30
}
- (id)initWithType:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)updateContentWithType:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)actionButton;
- (id)errImageView;
- (id)nextImageView;
- (id)titleLabel;
- (void)actionButtonClick;
- (void)setActionClickBlock:(id /* block */)arg1;
- (unsigned long long)type;
- (void)setActionButton:(id)arg1;
- (void)setErrImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

