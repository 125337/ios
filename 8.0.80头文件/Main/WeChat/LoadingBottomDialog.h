@interface LoadingBottomDialog : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL _shouldLoading; // +0x8
    id /* block */ _confirmCallBack; // +0x10
    id /* block */ _cancelCallBack; // +0x18
    id /* block */ _dismissCallBack; // +0x20
    NSString * _confirmButtonTitle; // +0x28
    NSString * _cancelButtonTitle; // +0x30
    UILabel * _titleLabel; // +0x38
    MMUIActivityIndicatorView * _loadingView; // +0x40
    UILabel * _tipLabel; // +0x48
    UILabel * _secTipLabel; // +0x50
    NSString * _title; // +0x58
    NSString * _tips; // +0x60
    NSString * _subTips; // +0x68
}
- (id)initWithTitle:(id)arg1 tips:(id)arg2 subTips:(id)arg3 shouldLoading:(BOOL)arg4;
- (void)setupPageSheetConfig;
- (void)show;
- (void)hideLoadingAndUpdateTips:(id)arg1;
- (void)dismiss;
- (void)setupDetailView;
- (void)setupTitleLabelWithViewMargin:(double)arg1 titleTopMargin:(double)arg2 stringMaxWidth:(double)arg3;
- (void)setupTipLabelWithViewMargin:(double)arg1 tipTopMargin:(double)arg2 stringMaxWidth:(double)arg3;
- (void)setupSecTipLabelWithViewMargin:(double)arg1 secTipTopMargin:(double)arg2 stringMaxWidth:(double)arg3;
- (void)createDetailView;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)colorForPageSheetCancelButtonTitle;
- (id /* block */)confirmCallBack;
- (void)setConfirmCallBack:(id /* block */)arg1;
- (id /* block */)cancelCallBack;
- (void)setCancelCallBack:(id /* block */)arg1;
- (id /* block */)dismissCallBack;
- (void)setDismissCallBack:(id /* block */)arg1;
- (id)confirmButtonTitle;
- (void)setConfirmButtonTitle:(id)arg1;
- (id)cancelButtonTitle;
- (void)setCancelButtonTitle:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)secTipLabel;
- (void)setSecTipLabel:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)tips;
- (void)setTips:(id)arg1;
- (id)subTips;
- (void)setSubTips:(id)arg1;
- (BOOL)shouldLoading;
- (void)setShouldLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
