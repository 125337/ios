@interface EmoticonTabBarButton : UIButton
{
    BOOL _layoutIgnoreContentRect; // +0x8
    double _space; // +0x10
}
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)space;
- (void)setSpace:(double)arg1;
- (BOOL)layoutIgnoreContentRect;
- (void)setLayoutIgnoreContentRect:(BOOL)arg1;
@end
