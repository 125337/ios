@interface WCAppAuthDetailFooterView : UIView
{
    id <WCAppAuthDetailFooterViewDelegate> _delegate; // +0x8
    UIButton * _cancelBtn; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initBtn;
- (double)btnHeight;
- (double)btnBottomPadding;
- (void)layoutSubviews;
- (void)onCancelBtnClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (void).cxx_destruct;
@end

