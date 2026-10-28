@interface IntroductionItemView : UIControl
{
    NSSet * m_touches; // +0x8
    BOOL _isLongPressHandled; // +0x10
    id /* block */ _handleClick; // +0x18
    id /* block */ _handleLongPress; // +0x20
    WeChatIntroduction * _introduction; // +0x28
}
- (id)initWithIntroduction:(id)arg1;
- (void)sizeToFit:(CGSize)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)initViews;
- (void)onTouchDown;
- (void)onTouchUpInside;
- (void)LongPressEvents;
- (BOOL)isLongPressHandled;
- (void)setIsLongPressHandled:(BOOL)arg1;
- (id /* block */)handleClick;
- (void)setHandleClick:(id /* block */)arg1;
- (id /* block */)handleLongPress;
- (void)setHandleLongPress:(id /* block */)arg1;
- (id)introduction;
- (void)setIntroduction:(id)arg1;
- (void).cxx_destruct;
@end
