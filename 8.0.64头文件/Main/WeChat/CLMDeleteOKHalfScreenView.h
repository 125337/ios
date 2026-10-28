@interface CLMDeleteOKHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    unsigned long long _dataSize; // +0x8
    UILabel * _titleLabel; // +0x10
    UILabel * _tipLabel; // +0x18
    UIImageView * _finishIconView; // +0x20
    NSString * _finishTitle; // +0x28
    NSString * _finishTip; // +0x30
}
- (id)initWithDataSize:(unsigned long long)arg1 finishTitle:(id)arg2 finishTip:(id)arg3;
- (void)updateView;
- (void)setupDetailView;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)finishIconView;
- (void)setFinishIconView:(id)arg1;
- (id)finishTitle;
- (void)setFinishTitle:(id)arg1;
- (id)finishTip;
- (void)setFinishTip:(id)arg1;
- (void).cxx_destruct;
@end
