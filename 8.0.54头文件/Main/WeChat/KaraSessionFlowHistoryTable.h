@interface KaraSessionFlowHistoryTable : KaraHistoryTable
- (id)initWithPath:(id)arg1 tableName:(id)arg2;
- (long long)updateRecordThatRecalled:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (id)historyWhereDestination:(long long)arg1 atSlot:(id)arg2 happenedBetween:(id)arg3 to:(id)arg4 limit:(long long)arg5 error:(id *)arg6;
@end

