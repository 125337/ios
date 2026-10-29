@interface MainFrameDeleteSessionGuideView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    UILabel * _titleLabel; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
