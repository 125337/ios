@interface MMFinderLiveDetailCardBaseView : UIView
{
    BOOL _closeAnimated; // +0x8
    MMUIButton * _closeButton; // +0x10
    UIView * _containerView; // +0x18
    MMFinderLiveDetailCardView * _cardView; // +0x20
    double _cardViewWidthPortrait; // +0x28
    double _cardViewWidthLandScape; // +0x30
    double _cardViewHeightPortrait; // +0x38
    double _cardViewHeightLandScape; // +0x40
    MMFinderLiveDropGiftDetailCardViewModel * _viewModel; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)layoutSubviews;
- (void)updateViewModel:(id)arg1;
- (void)showWithAnimation;
- (void)hideWithAnimation;
- (void)removeView;
- (void)onClickCloseButton:(id)arg1;
- (id)containerView;
- (id)closeButton;
- (double)cardViewWidth;
- (double)cardViewHeight;
- (double)cardViewWidthPortrait;
- (double)cardViewWidthLandScape;
- (double)cardViewHeightPortrait;
- (double)cardViewHeightLandScape;
- (void)setCloseButton:(id)arg1;
- (void)setContainerView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (void)setCardViewWidthPortrait:(double)arg1;
- (void)setCardViewWidthLandScape:(double)arg1;
- (void)setCardViewHeightPortrait:(double)arg1;
- (void)setCardViewHeightLandScape:(double)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (BOOL)closeAnimated;
- (void)setCloseAnimated:(BOOL)arg1;
- (void).cxx_destruct;
@end
