@interface WCTUpdate : WCTChainCall
{
    StatementUpdate _statement; // +0x28
    SyntaxList<WCTProperty> _properties; // +0x68
    unsigned long long _type; // +0x88
    NSObject * _value; // +0x90
}
- (id)initWithHandle:(id)arg1;
- (void *)statement;
- (id)table:(id)arg1;
- (id)set:(const void *)arg1;
- (id)where:(const void *)arg1;
- (id)orders:(const void *)arg1;
- (id)limit:(const void *)arg1;
- (id)offset:(const void *)arg1;
- (id)toObject:(id)arg1;
- (id)toValue:(id)arg1;
- (id)toRow:(id)arg1;
- (BOOL)execute;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

