@interface WCPayRealnameHalfPageSheetView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _cancelCallback; // +0x8
    id /* block */ _confirmCallback; // +0x10
    UIView * _contentView; // +0x18
    UIImageView * _logoView; // +0x20
    UILabel * _titleView; // +0x28
    RichTextView * _descView; // +0x30
    RealnameHalfPageDialog * _data; // +0x38
}
- (id)initWithData:(id)arg1;
- (void)setupSubviews;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id /* block */)cancelCallback;
- (void)setCancelCallback:(id /* block */)arg1;
- (id /* block */)confirmCallback;
- (void)setConfirmCallback:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)logoView;
- (void)setLogoView:(id)arg1;
- (id)titleView;
- (void)setTitleView:(id)arg1;
- (id)descView;
- (void)setDescView:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
