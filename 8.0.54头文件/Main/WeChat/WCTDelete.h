@interface WCTDelete : WCTChainCall
{
    StatementDelete _statement; // +0x28
}
- (id)initWithHandle:(id)arg1;
- (void *)statement;
- (id)fromTable:(id)arg1;
- (id)where:(const void *)arg1;
- (id)orders:(const void *)arg1;
- (id)limit:(const void *)arg1;
- (id)offset:(const void *)arg1;
- (BOOL)execute;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

