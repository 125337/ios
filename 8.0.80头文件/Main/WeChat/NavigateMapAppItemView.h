@interface NavigateMapAppItemView : UIView
{
    BOOL _hideDividerLine; // +0x8
    BOOL _isDevice; // +0x9
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _slogan; // +0x20
    UIImage * _icon; // +0x28
    unsigned long long _maskedCorners; // +0x30
    UIView * _containerView; // +0x38
    UIView * _bgView; // +0x40
}
- (id)initWithTitle:(id)arg1 desc:(id)arg2 slogan:(id)arg3 icon:(id)arg4 maskedCorners:(unsigned long long)arg5 hideDividerLine:(BOOL)arg6 isDevice:(BOOL)arg7;
- (void)initView;
- (id)containerView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)slogan;
- (void)setSlogan:(id)arg1;
- (id)icon;
- (void)setIcon:(id)arg1;
- (unsigned long long)maskedCorners;
- (void)setMaskedCorners:(unsigned long long)arg1;
- (BOOL)hideDividerLine;
- (void)setHideDividerLine:(BOOL)arg1;
- (BOOL)isDevice;
- (void)setIsDevice:(BOOL)arg1;
- (void)setContainerView:(id)arg1;
- (id)bgView;
- (void)setBgView:(id)arg1;
- (void).cxx_destruct;
@end
