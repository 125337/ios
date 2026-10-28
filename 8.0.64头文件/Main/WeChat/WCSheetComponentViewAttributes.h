@interface WCSheetComponentViewAttributes : NSObject <NSCopying>
{
    unsigned long long _type; // +0x8
    NSValue * _insetsValue; // +0x10
    NSNumber * _fixedWidth; // +0x18
    NSNumber * _useSystemLayoutSizeFittingSize; // +0x20
    unsigned long long _alignment; // +0x28
}
+ (id)attributes;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)insetsValue;
- (void)setInsetsValue:(id)arg1;
- (id)fixedWidth;
- (void)setFixedWidth:(id)arg1;
- (id)useSystemLayoutSizeFittingSize;
- (void)setUseSystemLayoutSizeFittingSize:(id)arg1;
- (unsigned long long)alignment;
- (void)setAlignment:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
