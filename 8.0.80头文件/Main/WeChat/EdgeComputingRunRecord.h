@interface EdgeComputingRunRecord : MMObject
{
    NSMutableDictionary * runRecords; // +0x8
}
- (id)init;
- (void)initRecord;
- (void)saveRecord;
- (void)addRecord:(id)arg1 withTime:(unsigned long long)arg2;
- (void)removeRecord:(id)arg1;
- (unsigned long long)getLastRecord:(id)arg1;
- (void).cxx_destruct;
@end
