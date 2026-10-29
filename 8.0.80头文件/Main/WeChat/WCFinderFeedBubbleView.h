@interface WCFinderFeedBubbleView : MMUIView
{
    UIView * _textViewBox; // +0x8
    NSObject * _model; // +0x10
    double _textAreaMaxWidth; // +0x18
    double _maxWidth; // +0x20
    id /* block */ _clickButtonBlock; // +0x28
    WCFinderFeedBubbleButton * _actionButton; // +0x30
    unsigned long long _ationButtonShowType; // +0x38
    UIView * _containerView; // +0x40
    UIImageView * _iconImageView; // +0x48
    UILabel * _titleLabel; // +0x50
    UILabel * _subtitleLabel; // +0x58
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void *)defineLabelsFlex:(void *)arg1;
- (void)setBubbleTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (void)setButtonTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (void)setButtonTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 ationButtonShowType:(unsigned long long)arg4;
- (void)doLayout;
- (void)layoutSubviews;
- (void)setButtonEnabled:(BOOL)arg1;
- (id)getActionButtonBackgroundColor;
- (id)getContainerView;
- (id)containerView;
- (id)iconImageView;
- (id)textViewBox;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)actionButton;
- (void)onClickActionButton;
- (void)setTextViewBox:(id)arg1;
- (id)model;
- (void)setModel:(id)arg1;
- (double)textAreaMaxWidth;
- (void)setTextAreaMaxWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id /* block */)clickButtonBlock;
- (void)setClickButtonBlock:(id /* block */)arg1;
- (void)setActionButton:(id)arg1;
- (unsigned long long)ationButtonShowType;
- (void)setAtionButtonShowType:(unsigned long long)arg1;
- (void)setContainerView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
