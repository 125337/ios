@interface CBTRoundedBackgroundConfig : NSObject
{
    UIColor * _backgroundColor; // +0x8
    double _cornerRadius; // +0x10
    double _backgroundColorHeight; // +0x18
}
+ (id)defaultConfig;
- (id)initWithBackgroundColor:(id)arg1 cornerRadius:(double)arg2;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (double)backgroundColorHeight;
- (void)setBackgroundColorHeight:(double)arg1;
- (void).cxx_destruct;
@end
