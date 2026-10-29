@interface MMLiveLandscapeSideSlideScrollActionSheet : MMScrollActionSheet <UIGestureRecognizerDelegate>
{
    MMLiveOrientationAwareDragBar * _dragBar; // +0x8
    UIView * _bodyContainer; // +0x10
    UIPanGestureRecognizer * _panGesture; // +0x18
    double _viewLeftAtPanBegin; // +0x20
    double _previousPanPositionX; // +0x28
}
- (id)dragBar;
- (void)setupBodyContainer:(id)arg1;
- (void)handleDragBarGestureChange:(double)arg1;
- (void)handleDragBarGestureEnd;
- (void)setUpEdgePanGesture;
- (void)handlePopPanGesture:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLandscapeSlidePanGesture:(id)arg1 moveView:(id)arg2 targetDistance:(double)arg3 fullScreenView:(id)arg4;
- (double)bodyContentHeight;
- (void)layoutBodyContent;
- (double)portraitBodyHeightRatio;
- (void)onBodyViewFrameNeedChange:(CGRect)arg1;
- (id)bodyScrollView;
- (BOOL)useLandscapeSlide;
- (double)getMaxHeight;
- (double)maxContainerHeight;
- (double)dragBarVerticalSpace;
- (void)relayoutElements:(BOOL)arg1 fixedWidth:(double)arg2 duration:(double)arg3;
- (void)relayoutView;
- (void)_calculateContainerCenter:(CGPoint *)arg1 to:(CGPoint *)arg2 constraintWidth:(double)arg3 parentView:(id)arg4;
- (void)dismissAnimated:(BOOL)arg1;
- (void)setDragBar:(id)arg1;
- (id)bodyContainer;
- (void)setBodyContainer:(id)arg1;
- (id)panGesture;
- (void)setPanGesture:(id)arg1;
- (double)viewLeftAtPanBegin;
- (void)setViewLeftAtPanBegin:(double)arg1;
- (double)previousPanPositionX;
- (void)setPreviousPanPositionX:(double)arg1;
- (void).cxx_destruct;
@end
