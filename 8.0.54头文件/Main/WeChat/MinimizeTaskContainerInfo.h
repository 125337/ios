@interface MinimizeTaskContainerInfo : MMObject
{
    BOOL _recieveTouches; // +0x8
    BOOL _isAlwaysShowInForground; // +0x9
    BOOL _isBorderless; // +0xa
    BOOL _isFoldDisabled; // +0xb
    BOOL _useTightStickType; // +0xc
    id <MinimizeTaskContainerInfoDelegate> _delegate; // +0x10
    UIView * _weakContentView; // +0x18
    UIViewController * _relatedVC; // +0x20
    UIView * _weakCloseButton; // +0x28
    double _closeButtonPaddingRight; // +0x30
    id /* block */ _positionModificationBlock; // +0x38
    CGSize _containerSizeInAbsorbView; // +0x40
    CGSize _containerSizeInList; // +0x50
}
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)weakContentView;
- (void)setWeakContentView:(id)arg1;
- (CGSize)containerSizeInAbsorbView;
- (void)setContainerSizeInAbsorbView:(CGSize)arg1;
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
- (BOOL)isBorderless;
- (void)setIsBorderless:(BOOL)arg1;
- (BOOL)isFoldDisabled;
- (void)setIsFoldDisabled:(BOOL)arg1;
- (BOOL)useTightStickType;
- (void)setUseTightStickType:(BOOL)arg1;
- (id /* block */)positionModificationBlock;
- (void)setPositionModificationBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

