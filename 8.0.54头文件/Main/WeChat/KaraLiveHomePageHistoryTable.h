@interface KaraLiveHomePageHistoryTable : KaraHistoryTable
- (id)initWithPath:(id)arg1 tableName:(id)arg2;
- (id)historyWhereUnreadAtOtherCell:(BOOL)arg1 badgeAtOtherCell:(BOOL)arg2 atSlot:(id)arg3 happenedBetween:(id)arg4 to:(id)arg5 limit:(long long)arg6 error:(id *)arg7;
- (id)historyWhereAnchor:(id)arg1 atSlot:(id)arg2 happenedBetween:(id)arg3 to:(id)arg4 limit:(long long)arg5 error:(id *)arg6;
@end

