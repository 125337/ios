@interface MMLiveAdCountdownBannerView : WCFinderAdCountdownBannerView
{
    MMUIImageView * _doneIcon; // +0x8
}
- (void)setupSubviews;
- (void)layoutComponents;
- (id)countdownLabelString;
- (id)doneIcon;
- (void)updateUIWithTime:(long long)arg1;
- (void)countdownEndAnimate;
- (BOOL)shouldShowAdsConfirmView;
- (void)setDoneIcon:(id)arg1;
- (void).cxx_destruct;
@end
