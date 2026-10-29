@interface WCAdRockPaperScissorsTopBannerView : UIView
{
    WCAdRockPaperScissorsInfo * _adRockPaperScissorsInfo; // +0x8
    id <WCAdRockPaperScissorsTopBannerDelegate> _delegate; // +0x10
    WCAdTwinTurboPagView * _animationPagView; // +0x18
    MMUIButton * _foregroundButton; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 adRockPaperScissorsInfo:(id)arg2 delegate:(id)arg3;
- (void)generateSubviews;
- (void)layoutSubviews;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (id)animationPagView;
- (id)foregroundButton;
- (void)onForegroundButtonClicked:(id)arg1;
- (id)rockPaperScissorsLogic;
- (id)adRockPaperScissorsInfo;
- (void)setAdRockPaperScissorsInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setAnimationPagView:(id)arg1;
- (void)setForegroundButton:(id)arg1;
- (void).cxx_destruct;
@end
