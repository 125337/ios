@interface WCSessionVCStack : MMObject
{
    NSMutableArray * m_container; // +0x8
}
- (id)init;
- (id)pop;
- (id)push:(id)arg1;
- (id)peek;
- (BOOL)contains:(id)arg1;
- (void)clear;
- (unsigned long long)count;
- (unsigned long long)search:(id)arg1;
- (void).cxx_destruct;
@end

