@interface MassSendBodyContainerView : UIControl
{
    id m_target; // +0x8
    SEL m_action; // +0x10
    NSSet * m_touches; // +0x18
    BOOL _shouldHighlightBackground; // +0x20
    BOOL _isLongPressHandled; // +0x21
    id /* block */ _handleLongPress; // +0x28
}
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)LongPressEvents;
- (BOOL)shouldHighlightBackground;
- (void)setShouldHighlightBackground:(BOOL)arg1;
- (BOOL)isLongPressHandled;
- (void)setIsLongPressHandled:(BOOL)arg1;
- (id /* block */)handleLongPress;
- (void)setHandleLongPress:(id /* block */)arg1;
- (void).cxx_destruct;
@end

