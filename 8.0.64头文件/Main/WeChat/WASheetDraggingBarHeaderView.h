@interface WASheetDraggingBarHeaderView : UIView
{
    UIView * _bottomView; // +0x8
    UIView * _arrowView; // +0x10
    UIView * _maskView; // +0x18
    BOOL _isExpanded; // +0x20
    UIView * _stickView; // +0x28
    double _initialCornerRadius; // +0x30
    double _forbidDragUpAnimation; // +0x38
    double _initialHeight; // +0x40
    double _maxHeight; // +0x48
    double _currentDragOffsetUpward; // +0x50
    double _startDragUpTransitionOffset; // +0x58
    double _endDragUpTransitionOffset; // +0x60
    double _startDragDownTransitionOffset; // +0x68
    double _endDragDownTransitionOffset; // +0x70
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setCurrentDragOffsetUpward:(double)arg1;
- (void)setTransitionalHidingStickAndExpandProgress:(double)arg1;
- (void)setTransitionalExpandStickAndShowDownArrowProgress:(double)arg1;
- (void)showStick;
- (void)hideStick;
- (void)addMask;
- (void)removeMask;
- (id)stickView;
- (void)setStickView:(id)arg1;
- (double)initialCornerRadius;
- (void)setInitialCornerRadius:(double)arg1;
- (double)forbidDragUpAnimation;
- (void)setForbidDragUpAnimation:(double)arg1;
- (double)initialHeight;
- (void)setInitialHeight:(double)arg1;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (double)currentDragOffsetUpward;
- (double)startDragUpTransitionOffset;
- (void)setStartDragUpTransitionOffset:(double)arg1;
- (double)endDragUpTransitionOffset;
- (void)setEndDragUpTransitionOffset:(double)arg1;
- (double)startDragDownTransitionOffset;
- (void)setStartDragDownTransitionOffset:(double)arg1;
- (double)endDragDownTransitionOffset;
- (void)setEndDragDownTransitionOffset:(double)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (void).cxx_destruct;
@end
