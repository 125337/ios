@interface WCPayResetDelayTipsNewModal : UIView
{
    BOOL _isShowing; // +0x8
    id <WCPayResetDelayTipsNewModalDelegate> _delegate; // +0x10
    NSString * _title; // +0x18
    NSString * _subscTexts; // +0x20
    UILabel * _titleLabel; // +0x28
    UIView * _contentsView; // +0x30
    UIButton * _cancelBtn; // +0x38
    UIButton * _confirmBtn; // +0x40
    UIView * _backgroundView; // +0x48
}
- (id)initWithTitle:(id)arg1 subscTexts:(id)arg2;
- (void)layoutSubviews;
- (void)updateView;
- (void)showInView;
- (void)dissmissView;
- (void)hideView:(BOOL)arg1;
- (void)onTapCancelBtn;
- (void)onTapConfirmBtn;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subscTexts;
- (void)setSubscTexts:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentsView;
- (void)setContentsView:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (void).cxx_destruct;
@end
