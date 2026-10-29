@interface KaraMomentHistoryTable : KaraHistoryTable
- (id)initWithPath:(id)arg1 tableName:(id)arg2;
- (id)historyOfUser:(id)arg1 atSlot:(id)arg2 happenedBetween:(id)arg3 to:(id)arg4 limit:(long long)arg5 error:(id *)arg6;
- (id)historyOfWeishangAtSlot:(id)arg1 happenedBetween:(id)arg2 to:(id)arg3 limit:(long long)arg4 error:(id *)arg5;
- (id)historyAtCityOfPOI:(id)arg1 atSlot:(id)arg2 happenedBetween:(id)arg3 to:(id)arg4 limit:(long long)arg5 error:(id *)arg6;
- (id)historyOfFeedWeishangType:(long long)arg1 atSlot:(id)arg2 happenedBetween:(id)arg3 to:(id)arg4 limit:(long long)arg5 error:(id *)arg6;
- (id)historyOfSellerWeishangType:(long long)arg1 atSlot:(id)arg2 happenedBetween:(id)arg3 to:(id)arg4 limit:(long long)arg5 error:(id *)arg6;
- (id)historyOfFeedWeishangStatus:(long long)arg1 atSlot:(id)arg2 happenedBetween:(id)arg3 to:(id)arg4 limit:(long long)arg5 error:(id *)arg6;
- (id)historyOfMiaojianTemplateAtSlot:(id)arg1 happenedBetween:(id)arg2 to:(id)arg3 limit:(long long)arg4 error:(id *)arg5;
- (id)recalledRecordsHappenedBetween:(id)arg1 to:(id)arg2 limit:(long long)arg3 error:(id *)arg4;
@end

