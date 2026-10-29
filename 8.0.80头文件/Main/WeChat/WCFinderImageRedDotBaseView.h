@interface WCFinderImageRedDotBaseView : MMUIView
{
    MMUIButton * _imageBtn; // +0x8
}
- (id)initWithFrame:(CGRect)arg1 btnBkgColor:(id)arg2 isCircular:(BOOL)arg3 expandHitHeight:(double)arg4 expandHitWidth:(double)arg5 accessibilityLabel:(id)arg6;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (BOOL)addBlurEffectWithColor:(id)arg1;
- (id)imageBtn;
- (void)setImageBtn:(id)arg1;
- (void).cxx_destruct;
@end
