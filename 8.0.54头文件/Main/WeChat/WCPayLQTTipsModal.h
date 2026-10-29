@interface WCPayLQTTipsModal : UIView
{
    id <WCPayLQTTipsModalDelegate> _delegate; // +0x8
    NSString * _title; // +0x10
    NSString * _content; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _contentLabel; // +0x28
    UIButton * _confirmBtn; // +0x30
    UIView * _backgroundView; // +0x38
}
- (id)initWithTitle:(id)arg1 content:(id)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapConfirm;
- (void)dissmissView;
- (void)showInView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end

