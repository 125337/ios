@interface MinimizeAnimateStateBaseView : UIView
{
    BOOL _foldedView; // +0x8
    BOOL _isAnimating; // +0x9
    unsigned int _currentState; // +0xc
    NSString * _stateIconName; // +0x10
    UIColor * _stateIconColor; // +0x18
    UIView * _greenDot; // +0x20
    MinimizeTaskData * _taskData; // +0x28
    double _layoutScale; // +0x30
    UIImageView * _stateIcon; // +0x38
    CAShapeLayer * _greenDotShapeLayer; // +0x40
    CGSize _renderedStateIconSize; // +0x48
}
+ (id)genAnimateStateView:(unsigned int)arg1 WithGrayBackground:(BOOL)arg2 withTaskData:(id)arg3 foldedView:(BOOL)arg4;
- (id)initWithGrayBackground:(BOOL)arg1;
- (void)initOrUpdateTaskData:(id)arg1;
- (void)setStateIconName:(id)arg1 color:(id)arg2;
- (void)setStateName:(unsigned int)arg1;
- (void)setStateIconColor:(id)arg1;
- (void)setStateIconName:(id)arg1;
- (CGSize)stateIconRenderSize;
- (void)updateStateIconImageIfNeeded;
- (void)setFrame:(CGRect)arg1;
- (void)setLayoutScale:(double)arg1;
- (void)layoutSubviews;
- (void)addHighlightPoint;
- (void)removeHighlightPoint;
- (void)shrinkGreenDot:(BOOL)arg1;
- (void)tryStartStateAnimation;
- (void)stopStateAnimation;
- (id)stateIconName;
- (id)stateIconColor;
- (id)greenDot;
- (void)setGreenDot:(id)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (BOOL)foldedView;
- (void)setFoldedView:(BOOL)arg1;
- (double)layoutScale;
- (unsigned int)currentState;
- (void)setCurrentState:(unsigned int)arg1;
- (id)stateIcon;
- (void)setStateIcon:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)greenDotShapeLayer;
- (void)setGreenDotShapeLayer:(id)arg1;
- (CGSize)renderedStateIconSize;
- (void)setRenderedStateIconSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
