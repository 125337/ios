@interface FavFullScreenImageButtonsContainerView : UIView
{
    ImageBrowseButton * _circleToSearchButton; // +0x8
    id /* block */ _circleToSearchBlock; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (id)circleToSearchButton;
- (void)layoutSubviews;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickCircleToSearchButton:(id)arg1;
- (void)showImageInfo:(id)arg1;
- (void)hideCircleToSearchButton;
- (void)setCircleToSearchButton:(id)arg1;
- (id /* block */)circleToSearchBlock;
- (void)setCircleToSearchBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

