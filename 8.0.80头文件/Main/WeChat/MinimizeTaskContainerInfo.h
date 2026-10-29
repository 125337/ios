@interface MinimizeTaskContainerInfo : MMObject
{
    BOOL _recieveTouches; // +0x8
    BOOL _isAlwaysShowInForground; // +0x9
    BOOL _pinchSizeChange; // +0xa
    BOOL _hitTestDirectlyToView; // +0xb
    id <MinimizeTaskContainerInfoDelegate> _delegate; // +0x10
    long long _containerGroupType; // +0x18
    UIView * _weakContentView; // +0x20
    UIView * _customHandleLongpressView; // +0x28
    UIViewController * _relatedVC; // +0x30
    UIView * _weakCloseButton; // +0x38
    double _closeButtonPaddingRight; // +0x40
    id /* block */ _positionModificationBlock; // +0x48
    CGSize _containerSizeInAbsorbView; // +0x50
    CGSize _containerSizeInList; // +0x60
}
+ (BOOL)canAddMultiTaskWithGroup:(long long)arg1;
- (id)init;
- (void)setContainerSizeInAbsorbView:(CGSize)arg1;
- (BOOL)canAddMultiTask;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)containerGroupType;
- (void)setContainerGroupType:(long long)arg1;
- (id)weakContentView;
- (void)setWeakContentView:(id)arg1;
- (id)customHandleLongpressView;
- (void)setCustomHandleLongpressView:(id)arg1;
- (CGSize)containerSizeInAbsorbView;
- (CGSize)containerSizeInList;
- (void)setContainerSizeInList:(CGSize)arg1;
- (BOOL)recieveTouches;
- (void)setRecieveTouches:(BOOL)arg1;
- (id)relatedVC;
- (void)setRelatedVC:(id)arg1;
- (BOOL)isAlwaysShowInForground;
- (void)setIsAlwaysShowInForground:(BOOL)arg1;
- (id)weakCloseButton;
- (void)setWeakCloseButton:(id)arg1;
- (double)closeButtonPaddingRight;
- (void)setCloseButtonPaddingRight:(double)arg1;
- (BOOL)pinchSizeChange;
- (void)setPinchSizeChange:(BOOL)arg1;
- (BOOL)hitTestDirectlyToView;
- (void)setHitTestDirectlyToView:(BOOL)arg1;
- (id /* block */)positionModificationBlock;
- (void)setPositionModificationBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
