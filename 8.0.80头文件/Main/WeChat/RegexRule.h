@interface RegexRule : NSObject
{
    unsigned short _leftIdentifier; // +0x8
    unsigned short _rightIdentifier; // +0xa
    NSString * _pattern; // +0x10
}
- (id)initWithPattern:(id)arg1 leftIdentifier:(unsigned short)arg2 rightIdentifier:(unsigned short)arg3;
- (id)pattern;
- (void)setPattern:(id)arg1;
- (unsigned short)leftIdentifier;
- (void)setLeftIdentifier:(unsigned short)arg1;
- (unsigned short)rightIdentifier;
- (void)setRightIdentifier:(unsigned short)arg1;
- (void).cxx_destruct;
@end
