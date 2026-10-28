@interface WCAdInteractionLabelInfo : NSObject <NSCoding>
{
    long long _interactionType; // +0x8
    NSString * _title; // +0x10
    NSString * _themeColor; // +0x18
    double _themeColorAlpha; // +0x20
    NSArray * _rollingLabels; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (long long)interactionType;
- (void)setInteractionType:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)themeColor;
- (void)setThemeColor:(id)arg1;
- (double)themeColorAlpha;
- (void)setThemeColorAlpha:(double)arg1;
- (id)rollingLabels;
- (void)setRollingLabels:(id)arg1;
- (void).cxx_destruct;
@end
