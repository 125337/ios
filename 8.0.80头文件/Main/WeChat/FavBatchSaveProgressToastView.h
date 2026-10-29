@interface FavBatchSaveProgressToastView : UIView
{
    id /* block */ _cancelHandler; // +0x8
    id /* block */ _confirmHandler; // +0x10
    WCProgressCircleView * _progressCircleView; // +0x18
    UIImageView * _statusIconView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _subtitleLabel; // +0x30
    UIButton * _cancelButton; // +0x38
    UIButton * _confirmButton; // +0x40
}
+ (CGRect)frameForParentView:(id)arg1 safeBottomInset:(double)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithState:(unsigned long long)arg1 successCount:(long long)arg2 totalCount:(long long)arg3 failureReason:(long long)arg4;
- (void)showWithFadeIn;
- (void)hideImmediately;
- (void)layoutSubviews;
- (void)setupSubviews;
- (id)actionButtonWithTitleKey:(id)arg1 selector:(SEL)arg2;
- (id)fontWithName:(id)arg1;
- (void)updateTextForState:(unsigned long long)arg1 successCount:(long long)arg2 totalCount:(long long)arg3 failureReason:(long long)arg4;
- (id)savingTitleWithSuccessCount:(long long)arg1 totalCount:(long long)arg2;
- (id)interruptedTitleWithSuccessCount:(long long)arg1 totalCount:(long long)arg2;
- (id)interruptedSubtitleForReason:(long long)arg1;
- (void)onCancelTapped;
- (void)onConfirmTapped;
- (id /* block */)cancelHandler;
- (void)setCancelHandler:(id /* block */)arg1;
- (id /* block */)confirmHandler;
- (void)setConfirmHandler:(id /* block */)arg1;
- (id)progressCircleView;
- (void)setProgressCircleView:(id)arg1;
- (id)statusIconView;
- (void)setStatusIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end
