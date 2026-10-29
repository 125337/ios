@interface WCPayNumberTipsModal : UIView
{
    id <WCPayNumberTipsModalDelegate> _delegate; // +0x8
    UIView * _backgroundView; // +0x10
    WCPayNumberTipsModalViewData * _viewModel; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _contentLabel; // +0x28
    UIView * _upLine; // +0x30
    UIView * _bottomLine; // +0x38
    UIButton * _cancelBtn; // +0x40
    UIButton * _confirmBtn; // +0x48
    UIView * _btnsContentView; // +0x50
}
- (id)initWithViewData:(id)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)onTapCancelBtn;
- (void)onTapConfirmBtn;
- (void)showInView;
- (void)handleTap:(id)arg1;
- (void)dissmissView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (id)upLine;
- (void)setUpLine:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (id)cancelBtn;
- (void)setCancelBtn:(id)arg1;
- (id)confirmBtn;
- (void)setConfirmBtn:(id)arg1;
- (id)btnsContentView;
- (void)setBtnsContentView:(id)arg1;
- (void).cxx_destruct;
@end

