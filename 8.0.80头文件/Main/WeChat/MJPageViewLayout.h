@interface MJPageViewLayout : NSObject
{
    CGRect _titleFrame; // +0x8
    CGRect _contentFrame; // +0x28
}
+ (id)commonLayout;
- (id)initWithTitleFrame:(CGRect)arg1 contentFrame:(CGRect)arg2;
- (CGRect)titleFrame;
- (void)setTitleFrame:(CGRect)arg1;
- (CGRect)contentFrame;
- (void)setContentFrame:(CGRect)arg1;
@end
