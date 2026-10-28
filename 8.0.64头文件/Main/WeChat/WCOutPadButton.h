@interface WCOutPadButton : MMUIButton
{
    UIView * m_iconView; // +0x8
    UIView * m_coverView; // +0x10
}
- (id)initWithMainLabel:(id)arg1 subLabel:(id)arg2 colorMode:(unsigned long long)arg3;
- (id)initWithIconImage:(id)arg1 coverImage:(id)arg2 selectedBackgroundColor:(id)arg3;
- (void)InternalInitWithIconView:(id)arg1 coverView:(id)arg2;
- (void)InternalInitWithIconImage:(id)arg1 coverImage:(id)arg2 selectedBackgroundColor:(id)arg3;
- (void)layoutSubviews;
- (void)performLayout;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void).cxx_destruct;
@end
