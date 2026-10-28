@interface MinimizeAnimateStateBaseView : UIView
{
    BOOL _foldedView; // +0x8
    BOOL _isAnimating; // +0x9
    unsigned int _currentState; // +0xc
    NSString * _stateIconName; // +0x10
    UIColor * _stateIconColor; // +0x18
    UIView * _greenDot; // +0x20
    MinimizeTaskData * _taskData; // +0x28
    UIImageView * _stateIcon; // +0x30
}
+ (id)genAnimateStateView:(unsigned int)arg1 WithGrayBackground:(BOOL)arg2 isMiniVersion:(BOOL)arg3 withTaskData:(id)arg4 foldedView:(BOOL)arg5;
- (id)initWithGrayBackground:(BOOL)arg1 isMiniVersion:(BOOL)arg2;
- (void)initOrUpdateTaskData:(id)arg1;
- (void)setStateIconName:(id)arg1 color:(id)arg2;
- (void)setStateName:(unsigned int)arg1;
- (void)setStateIconColor:(id)arg1;
- (void)setStateIconName:(id)arg1;
- (void)setFrame:(CGRect)arg1;
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
- (unsigned int)currentState;
- (void)setCurrentState:(unsigned int)arg1;
- (id)stateIcon;
- (void)setStateIcon:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end
