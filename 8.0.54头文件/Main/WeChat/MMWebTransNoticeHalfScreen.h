@interface MMWebTransNoticeHalfScreen : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id <MMWebHalfScreenDelegate> _delegate; // +0x8
    UILabel * _textLabel; // +0x10
    UILabel * _titleLabel; // +0x18
}
- (id)titleForPageSheetConfirmButton;
- (id)init;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)pageSheetWillAppear;
- (void)pageSheetDidAppear;
- (void)pageSheetWillDisappear;
- (void)pageSheetDidDisappear;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

