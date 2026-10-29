@interface MMFinderLiveSpringCardContainerView : UIView
{
    id <MMFinderLiveSpringCardContainerViewDelegate> _delegate; // +0x8
}
- (id)init;
- (void)setSecondaryView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)pushSecondaryView:(id)arg1;
- (void)pushSecondaryView:(id)arg1 animated:(BOOL)arg2;
- (id)popSecondaryView;
- (void)dismissCurrentLotteryCard;
- (void)notifyViewDidAppearIfNeeded:(id)arg1;
- (void)onLotteryCardWillCloseByCloseButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
