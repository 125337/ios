@interface MMPageSheetBottomView : UIView
{
    id <MMPageSheetBottomViewDelegate> _delegate; // +0x8
    FixTitleColorButton * _cancelButton; // +0x10
    FixTitleColorButton * _confirmButton; // +0x18
    UIView * _customSubview; // +0x20
    long long _type; // +0x28
    MMPageSheetConfig * _config; // +0x30
}
- (void)onPageSheetDidAppear;
- (void)updateConfig:(id)arg1;
- (void)resetButtonsWithConfig:(id)arg1;
- (id)buttonWithConfig:(id)arg1 isConfirm:(BOOL)arg2;
- (void)layoutSubviews;
- (void)onConfirmButtonClick;
- (void)onCancelButtonClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (id)customSubview;
- (void)setCustomSubview:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
