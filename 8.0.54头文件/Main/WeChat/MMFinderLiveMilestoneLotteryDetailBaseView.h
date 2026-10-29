@interface MMFinderLiveMilestoneLotteryDetailBaseView : UIView <MMFinderLiveSpringCardContainerViewDelegate, MMWebImageViewDelegate>
{
    double _cardViewWidthPortrait; // +0x8
    double _cardViewWidthLandScape; // +0x10
    double _cardViewHeightPortrait; // +0x18
    double _cardViewHeightLandScape; // +0x20
    UIView * _bgTapView; // +0x28
    UIImageView * _backgroundImageView; // +0x30
    UIImageView * _backgroundTopRightDecorationImageView; // +0x38
    UIImageView * _backgroundBottomLeftDecorationImageView; // +0x40
    UIView * _backgroundView; // +0x48
    MMWebImageView * _bgDecorationImageView; // +0x50
    MMUIButton * _closeButton; // +0x58
    MMFinderLiveSpringCardContainerView * _containerView; // +0x60
    MMFinderLiveMilestoneLotteryViewModel * _vm; // +0x68
    double _lotteryUIAdaptedPercent; // +0x70
}
- (id)initWithViewModel:(id)arg1;
- (void)initCommonUI;
- (void)layoutSubviews;
- (BOOL)updateLotteryAdaptedPercentIfNeeded;
- (id)closeButtonColor;
- (void)showInView:(id)arg1 aniamted:(BOOL)arg2;
- (void)hideAniamted:(BOOL)arg1;
- (void)updateTopDecorationImageUrl:(id)arg1;
- (void)reloadBGColorForSpringFestival;
- (void)closeView;
- (void)onBgTapViewTapped:(id)arg1;
- (void)cardContainerViewRequestDismissCurrentCard:(id)arg1;
- (double)cardViewWidth;
- (double)cardViewHeight;
- (double)cardViewWidthIpad;
- (double)cardViewHeightIpad;
- (double)getCurrentSizeRatio;
- (double)cardViewWidthPortrait;
- (double)cardViewWidthLandScape;
- (double)cardViewHeightPortrait;
- (double)cardViewHeightLandScape;
- (double)getCardViewHeightLandscapeRatioForIPhone;
- (double)liveAdaptedValue:(double)arg1;
- (double)getLotteryUIAdaptedPercent;
- (void)onLoadImageOK:(id)arg1;
- (void)setCardViewWidthPortrait:(double)arg1;
- (void)setCardViewWidthLandScape:(double)arg1;
- (void)setCardViewHeightPortrait:(double)arg1;
- (void)setCardViewHeightLandScape:(double)arg1;
- (id)bgTapView;
- (void)setBgTapView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)backgroundTopRightDecorationImageView;
- (void)setBackgroundTopRightDecorationImageView:(id)arg1;
- (id)backgroundBottomLeftDecorationImageView;
- (void)setBackgroundBottomLeftDecorationImageView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)bgDecorationImageView;
- (void)setBgDecorationImageView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (double)lotteryUIAdaptedPercent;
- (void)setLotteryUIAdaptedPercent:(double)arg1;
- (void).cxx_destruct;
@end

