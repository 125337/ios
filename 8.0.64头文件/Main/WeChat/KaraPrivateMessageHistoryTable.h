@interface KaraPrivateMessageHistoryTable : KaraHistoryTable
- (id)initWithPath:(id)arg1 tableName:(id)arg2;
- (id)historyInSession:(id)arg1 atSlot:(id)arg2 happenedBetween:(id)arg3 to:(id)arg4 limit:(long long)arg5 error:(id *)arg6;
- (id)historyOfWeComContactAtSlot:(id)arg1 happenedBetween:(id)arg2 to:(id)arg3 limit:(long long)arg4 error:(id *)arg5;
@end
