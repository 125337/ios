@interface MiniTaskHalfScreenEducationView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    UIView * _contentView; // +0x8
    MMUILabel * _textLabel; // +0x10
    MMUILabel * _descContentLable; // +0x18
    id /* block */ _confirmBlock; // +0x20
}
- (id)initWithConfirmBlcok:(id /* block */)arg1;
- (void)initSubviews;
- (void)initTextLabel;
- (void)initDescContentView;
- (void)layoutSubviews;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (double)pageSheetContentWidth;
- (double)bottomViewBottomMargin;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)descContentLable;
- (void)setDescContentLable:(id)arg1;
- (id /* block */)confirmBlock;
- (void)setConfirmBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
