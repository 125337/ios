@interface MultiDeviceActionButton : MMUIButton
{
    unsigned long long _action; // +0x8
}
+ (id)buttonForAction:(unsigned long long)arg1;
+ (BOOL)supportSelectForAction:(unsigned long long)arg1;
+ (id)buttonTitleForAction:(unsigned long long)arg1 selected:(BOOL)arg2;
+ (id)buttonImageForAction:(unsigned long long)arg1 highlighted:(BOOL)arg2 selected:(BOOL)arg3;
+ (double)imageSideLength;
- (void)setAction:(unsigned long long)arg1;
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)action;
@end
