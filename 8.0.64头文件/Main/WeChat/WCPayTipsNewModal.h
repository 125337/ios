@interface WCPayTipsNewModal : UIView <ILinkEventExt, MMWebViewDelegate>
{
    BOOL _isShowing; // +0x8
    id <WCPayTipsNewModalDelegate> _delegate; // +0x10
    NSString * _title; // +0x18
    NSString * _cancelBtnStr; // +0x20
    NSString * _confirmBtnStr; // +0x28
    NSArray * _contents; // +0x30
    UILabel * _titleLabel; // +0x38
    UIView * _contentsView; // +0x40
    UIButton * _cancelBtn; // +0x48
    UIButton * _confirmBtn; // +0x50
    UIView * _backgroundView; // +0x58
}
- (id)initWithTitle:(id)arg1 contents:(id)arg2 cancelBtn:(id)arg3 confirmBtn:(id)arg4;
- (void)layoutSubviews;
- (void)updateView;
- (void)showInView;
- (void)dissmissView;
- (void)hideView:(BOOL)arg1;
- (void)onTapCancelBtn;
- (void)onTapConfirmBtn;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)webViewReturn:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)cancelBtnStr;
- (void)setCancelBtnStr:(id)arg1;
- (id)confirmBtnStr;
- (void)setConfirmBtnStr:(id)arg1;
- (id)contents;
- (void)setContents:(id)arg1;
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
