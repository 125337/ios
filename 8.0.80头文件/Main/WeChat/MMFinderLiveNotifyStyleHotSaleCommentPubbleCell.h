@interface MMFinderLiveNotifyStyleHotSaleCommentPubbleCell : MMFinderLiveNotifyStyleBaseProductPubbleCell <MMFinderLiveNumberAnimationLogicObserver>
{
    MMFinderLiveNumberAnimationLogic * _animationLogic; // +0x30
    MMGradientView * _gradientView; // +0x38
    UILabel * _infoPrefixLabel; // +0x40
    UILabel * _infoNumberLabel; // +0x48
    MMGradientView * _infoBackgroundView; // +0x50
}
+ (id)numberFont;
+ (double)preferDisplayDurationWithComment:(id)arg1;
- (id)initWithCellFrame:(id)arg1;
- (void)layoutUI;
- (id)animationCenter;
- (void)runCustomEnterAnimation;
- (void)runCustomExitAnimationWithCompletion:(id /* block */)arg1;
- (void)changeNumberWithLogic:(id)arg1;
- (void)reportExposeWithExtra:(id)arg1;
- (void)reportClickWithExtra:(id)arg1 product:(id)arg2;
- (void)onWillOpenProduct:(id)arg1;
- (id)animationLogic;
- (void)setAnimationLogic:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)infoPrefixLabel;
- (void)setInfoPrefixLabel:(id)arg1;
- (id)infoNumberLabel;
- (void)setInfoNumberLabel:(id)arg1;
- (id)infoBackgroundView;
- (void)setInfoBackgroundView:(id)arg1;
- (void).cxx_destruct;
@end
