@interface CBTAsstMemoryRetryDialogView : UIControl
{
    UIVisualEffectView * _panelView; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _messageLabel; // +0x18
    UIButton * _retryButton; // +0x20
    UIButton * _cancelButton; // +0x28
    id /* block */ _retryAction; // +0x30
    id /* block */ _cancelAction; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)onRetryButtonTap;
- (void)onCancelButtonTap;
- (id /* block */)retryAction;
- (void)setRetryAction:(id /* block */)arg1;
- (id /* block */)cancelAction;
- (void)setCancelAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
