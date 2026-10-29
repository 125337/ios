@interface WCAdDynamicFeedUIButton : MMUIButton
{
    BOOL _isDisabledStyle; // +0x8
    WCAdDynamicFeedElementInfo * _elementInfo; // +0x10
    UIColor * _titleColorNormal; // +0x18
    UIColor * _bgColorNormal; // +0x20
    UIColor * _titleColorHighlighted; // +0x28
    UIColor * _bgColorHighlighted; // +0x30
    UIColor * _titleColorDisabled; // +0x38
    UIColor * _bgColorDisabled; // +0x40
}
- (void)updateButtonStateWithTitle:(id)arg1 isEnabled:(BOOL)arg2 isDisabledStyle:(BOOL)arg3;
- (void)updateTitleColorNormal:(id)arg1;
- (void)updateBgColorNormal:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)elementInfo;
- (void)setElementInfo:(id)arg1;
- (id)titleColorNormal;
- (void)setTitleColorNormal:(id)arg1;
- (id)bgColorNormal;
- (void)setBgColorNormal:(id)arg1;
- (id)titleColorHighlighted;
- (void)setTitleColorHighlighted:(id)arg1;
- (id)bgColorHighlighted;
- (void)setBgColorHighlighted:(id)arg1;
- (id)titleColorDisabled;
- (void)setTitleColorDisabled:(id)arg1;
- (id)bgColorDisabled;
- (void)setBgColorDisabled:(id)arg1;
- (BOOL)isDisabledStyle;
- (void)setIsDisabledStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end

