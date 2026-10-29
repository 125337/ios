@interface CLMRecordMsgTipView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
- (id)init;
- (void)setupDetailView;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
@end

