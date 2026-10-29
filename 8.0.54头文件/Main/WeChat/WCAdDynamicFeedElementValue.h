@interface WCAdDynamicFeedElementValue : NSObject <NSCoding>
{
    BOOL _shouldAdaptLengthValue; // +0x8
    unsigned long long _type; // +0x10
    NSString * _stringValue; // +0x18
    double _floatValue; // +0x20
    UIColor * _colorValue; // +0x28
}
- (id)initWithString:(id)arg1;
- (id)initWithNumber:(id)arg1;
- (id)initWithFloat:(double)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)fetchStringValue;
- (double)fetchFloatValue;
- (id)fetchColorValue;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (double)floatValue;
- (void)setFloatValue:(double)arg1;
- (BOOL)shouldAdaptLengthValue;
- (void)setShouldAdaptLengthValue:(BOOL)arg1;
- (id)colorValue;
- (void)setColorValue:(id)arg1;
- (void).cxx_destruct;
@end

