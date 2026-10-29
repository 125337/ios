@interface ListNumber : NSObject
{
    NSString * _leftIdentifier; // +0x8
    NumberObj * _number; // +0x10
    NSString * _rightIdentifier; // +0x18
}
+ (void)initialize;
+ (id)extractFromString:(id)arg1;
- (id)initWithLeftIdentifier:(id)arg1 valueStr:(id)arg2 rightIdentifier:(id)arg3;
- (id)initWithLeftIdentifier:(id)arg1 valueStr:(id)arg2 rightIdentifier:(id)arg3 preferType:(int)arg4;
- (id)string;
- (BOOL)increase;
- (id)leftIdentifier;
- (void)setLeftIdentifier:(id)arg1;
- (id)number;
- (void)setNumber:(id)arg1;
- (id)rightIdentifier;
- (void)setRightIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
