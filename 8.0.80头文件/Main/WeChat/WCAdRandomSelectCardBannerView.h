@interface WCAdRandomSelectCardBannerView : UIView <WCAdRandomSelectCardPlaygroundViewDelegate>
{
    id <WCAdRandomSelectCardBannerViewDelegate> _delegate; // +0x8
    WCAdURLImageView * _pedestalImageView; // +0x10
    WCAdRandomSelectCardPlaygroundView * _playgroundView; // +0x18
    MMUIButton * _foregroundButton; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)pedestalImageView;
- (id)playgroundView;
- (id)foregroundButton;
- (void)onForegroundButtonClicked:(id)arg1 forEvent:(id)arg2;
- (id)randomSelectCardInfo;
- (void)prepare;
- (void)start;
- (void)pause;
- (void)stop;
- (void)suspend;
- (id)onPlaygroundViewFetchPedestalView;
- (double)onPlaygroundViewFetchRandomSelectCardViewHeight;
- (id)onPlaygroundViewFetchRandomSelectCardInfo;
- (void)onPlaygroundViewPrepareForIntroduceAnimation;
- (void)onPlaygroundViewStartIntroduceAnimation;
- (id)onPlaygroundViewFetchLabelToHideForIntroduce;
- (id)onPlaygroundViewFetchLabelToShowForIntroduce;
- (void)onPlaygroundViewIntroduceAnimationDone;
- (id)onPlaygroundViewGetRandomSelectCardLogic;
- (void)onPlaygroundViewPrepareForSelecting;
- (void)onPlaygroundViewStartSelectingAnimation;
- (id)onPlaygroundViewFetchLabelToHideForSelecting;
- (id)onPlaygroundViewFetchLabelToShowForSelecting;
- (void)onPlaygroundViewSelectingAnimationDone;
- (void)onPlaygroundViewPrepareForAllSelected;
- (void)onPlaygroundViewPedestalOpacityAnimationDone;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPedestalImageView:(id)arg1;
- (void)setPlaygroundView:(id)arg1;
- (void)setForegroundButton:(id)arg1;
- (void).cxx_destruct;
@end
