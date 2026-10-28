@interface MMLiveCancelReplayConfirmPanel : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _resultBlock; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _titleLabel; // +0x18
}
- (id)initWithResultBlock:(id /* block */)arg1;
- (double)panelDetailViewMaxHeight;
- (void)configPageSheetAndDetailView;
- (void)layoutSubviews;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
