@interface WCTInsert : WCTChainCall
{
    SyntaxList<WCTProperty> _properties; // +0x28
    StatementInsert _statement; // +0x48
    NSArray * _values; // +0x88
}
- (id)initWithHandle:(id)arg1;
- (void *)statement;
- (id)orReplace;
- (id)orIgnore;
- (id)intoTable:(id)arg1;
- (id)onProperties:(const void *)arg1;
- (id)values:(id)arg1;
- (id)value:(id)arg1;
- (BOOL)execute;
- (BOOL)realExecute;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
