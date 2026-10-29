@interface MMFinderLiveMilestoneLotteryDetailSecondaryView : MMFinderLiveMilestoneLotteryDetailSubView
{
    id /* block */ _secondaryViewDidPop; // +0x8
    MMUIButton * _backButton; // +0x10
}
- (id)backButtonColor;
- (BOOL)useSmallPadding;
- (void)initUI;
- (void)onBackButtonTapped;
- (id)getCardContainerView;
- (void)didAppear;
- (void)onLotteryCardWillCloseByCloseButton;
- (id /* block */)secondaryViewDidPop;
- (void)setSecondaryViewDidPop:(id /* block */)arg1;
- (id)backButton;
- (void)setBackButton:(id)arg1;
- (void).cxx_destruct;
@end

