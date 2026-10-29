@interface TextStateFeverTapGestureRecognizer : UIGestureRecognizer
{
    BOOL _isInLongPress; // +0x8
    UITouch * _recentTouch; // +0x10
    id /* block */ _triggerHandler; // +0x18
    id /* block */ _singleTapHandler; // +0x20
    id /* block */ _longPressHandler; // +0x28
    unsigned long long _tapCount; // +0x30
    UITouch * _activeTouch; // +0x38
    CGPoint _originPoint; // +0x40
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)refreshLongTimeout;
- (void)cancelLongTimeout;
- (void)longPressTimeout;
- (void)refreshTapTimeout;
- (void)cancelTapTimeout;
- (void)tapTimeout;
- (void)reset;
- (unsigned int)tapType;
- (id)recentTouch;
- (void)setRecentTouch:(id)arg1;
- (id /* block */)triggerHandler;
- (void)setTriggerHandler:(id /* block */)arg1;
- (id /* block */)singleTapHandler;
- (void)setSingleTapHandler:(id /* block */)arg1;
- (id /* block */)longPressHandler;
- (void)setLongPressHandler:(id /* block */)arg1;
- (unsigned long long)tapCount;
- (void)setTapCount:(unsigned long long)arg1;
- (id)activeTouch;
- (void)setActiveTouch:(id)arg1;
- (CGPoint)originPoint;
- (void)setOriginPoint:(CGPoint)arg1;
- (BOOL)isInLongPress;
- (void)setIsInLongPress:(BOOL)arg1;
- (void).cxx_destruct;
@end

