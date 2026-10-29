@interface CBTNewbieAnimationView : UIView <PAGViewListener>
{
    BOOL _hasComposition; // +0x8
    BOOL _hasPlayStarted; // +0x9
    BOOL _hasFinishedFired; // +0xa
    id /* block */ _onFinished; // +0x10
    UIImage * _placeholderImage; // +0x18
    UIView * _backgroundContainer; // +0x20
    UIImageView * _placeholderImageView; // +0x28
    PAGView * _pagView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setPlaceholderImage:(id)arg1;
- (CGSize)intrinsicContentSize;
- (void)play;
- (void)schedulePlaceholderDismiss;
- (void)cancel;
- (void)fireFinishedOnce;
- (void)onAnimationStart:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationCancel:(id)arg1;
- (id /* block */)onFinished;
- (void)setOnFinished:(id /* block */)arg1;
- (id)placeholderImage;
- (id)backgroundContainer;
- (void)setBackgroundContainer:(id)arg1;
- (id)placeholderImageView;
- (void)setPlaceholderImageView:(id)arg1;
- (id)pagView;
- (void)setPagView:(id)arg1;
- (BOOL)hasComposition;
- (void)setHasComposition:(BOOL)arg1;
- (BOOL)hasPlayStarted;
- (void)setHasPlayStarted:(BOOL)arg1;
- (BOOL)hasFinishedFired;
- (void)setHasFinishedFired:(BOOL)arg1;
- (void).cxx_destruct;
@end
