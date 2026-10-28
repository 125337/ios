@interface MMLiveCancelReplayTipPanel : MMPageSheetBaseView <ILinkEventExt>
{
    id /* block */ _resultBlock; // +0x8
    UILabel * _titleLabel; // +0x10
    RichTextView * _tipTextView; // +0x18
    UIButton * _cancelButton; // +0x20
}
- (id)initWithResultBlock:(id /* block */)arg1;
- (double)panelDetailViewMaxHeight;
- (void)configPageSheetAndDetailView;
- (void)layoutSubviews;
- (void)onCancelButtonTapped:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)tipTextView;
- (void)setTipTextView:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (void).cxx_destruct;
@end
