@interface VoiceSearchEducationPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _onDismiss; // +0x8
    PAGView * _animationView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)pageSheetDidShow;
- (void)pageSheetDidDismiss;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id /* block */)onDismiss;
- (void)setOnDismiss:(id /* block */)arg1;
- (id)animationView;
- (void)setAnimationView:(id)arg1;
- (void).cxx_destruct;
@end
