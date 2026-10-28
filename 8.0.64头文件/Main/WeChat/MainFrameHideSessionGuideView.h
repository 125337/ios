@interface MainFrameHideSessionGuideView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    UILabel * _titleLabel; // +0x8
    RichTextView * _descTextView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descTextView;
- (void)setDescTextView:(id)arg1;
- (void).cxx_destruct;
@end
