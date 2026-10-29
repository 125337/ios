@interface NumberObj : NSObject
{
    int m_value; // +0x8
    int _type; // +0xc
    NSString * _valueStr; // +0x10
}
+ (void)initialize;
+ (id)numberFromValueStr:(id)arg1;
+ (id)numberFromValueStr:(id)arg1 preferType:(int)arg2;
- (id)initWithValue:(int)arg1;
- (BOOL)increase;
- (int)type;
- (id)valueStr;
- (void).cxx_destruct;
@end

