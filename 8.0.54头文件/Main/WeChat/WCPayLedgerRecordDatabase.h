@interface WCPayLedgerRecordDatabase : NSObject
{
     database; // +0x8
     table; // +0x10
}
+ (id)instance;
- (id)init;
- (void)deleteWithId:(id)arg1;
- (void)deleteWithTalker:(id)arg1 localId:(long long)arg2;
- (void)deleteWithTalker:(id)arg1;
- (void)removeAllRecords;
- (void).cxx_destruct;
@end

