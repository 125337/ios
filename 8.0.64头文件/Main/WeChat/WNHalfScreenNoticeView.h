@interface WNHalfScreenNoticeView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    UILabel * m_textLabel; // +0x8
}
- (id)initWithNoticeContent:(id)arg1;
- (id)titleForPageSheetConfirmButton;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void).cxx_destruct;
@end
