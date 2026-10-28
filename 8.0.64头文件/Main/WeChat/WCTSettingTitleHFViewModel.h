@interface WCTSettingTitleHFViewModel : NSObject
{
    NSString * _title; // +0x8
    NSAttributedString * _attrTitle; // +0x10
    UIColor * _backgroundColor; // +0x18
    unsigned long long _accessibilityTraits; // +0x20
    UIEdgeInsets _edgeInsets; // +0x28
}
+ (id)createWithTitle:(id)arg1 edgeInsets:(UIEdgeInsets)arg2;
+ (id)createHeaderWithTitle:(id)arg1;
+ (id)createFooterWithTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (double)heightByViewWidth:(double)arg1;
- (id)title;
- (id)attrTitle;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (UIEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (unsigned long long)accessibilityTraits;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
