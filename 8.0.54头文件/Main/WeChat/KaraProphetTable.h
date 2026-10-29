@interface KaraProphetTable : WCDBTableHolder
{
    Class WINQ; // +0x8
}
- (id)initWithPath:(id)arg1 tableName:(id)arg2 tableClass:(Class)arg3;
- (id)getBehaviorIdentified:(id)arg1 includingFeatures:(BOOL)arg2 happenedAfter:(id)arg3 error:(id *)arg4;
- (long long)insertOrIgnoreBehaviorThatHappened:(id)arg1 error:(id *)arg2;
- (long long)deleteBehavior:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)updateBehaviorThatPredicted:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)updateBehaviorThatPredictedIfNot:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)updateBehaviorThatExtracted:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)updateBehaviorThatPrepared:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)updateBehaviorThatRecalled:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (long long)updateBehaviorUserInfo:(id)arg1 happenedAfter:(id)arg2 error:(id *)arg3;
- (id)getBehaviorsForUploadingHappenedFrom:(id)arg1 to:(id)arg2 limit:(long long)arg3 error:(id *)arg4;
- (id)getBehaviorsForReportingHappenedFrom:(id)arg1 to:(id)arg2 limit:(long long)arg3 error:(id *)arg4;
- (id)getBehaviorsForRapidResponseReportingHappenedFrom:(id)arg1 to:(id)arg2 limit:(long long)arg3 error:(id *)arg4;
- (long long)deleteBehaviorsHappenedBefore:(id)arg1 limit:(long long)arg2 error:(id *)arg3;
- (long long)pagesWithError:(id *)arg1;
@end

