@interface PredownloadHistoryTable : WCDBTableHolder
{
    Class WINQ; // +0x8
}
- (id)initWithPath:(id)arg1 tableName:(id)arg2 tableClass:(Class)arg3;
- (long long)insertOrIgnoreRecord:(id)arg1 error:(id *)arg2;
- (id)selectRecord:(id)arg1 error:(id *)arg2;
- (id)dequeueForConsumingRequestedQuotaAfterDate:(id)arg1 maxRetries:(long long)arg2 error:(id *)arg3;
- (id)dequeueForConsumingIncreasedQuotaAfterDate:(id)arg1 error:(id *)arg2;
- (id)skipQuotaRecordsAfterDate:(id)arg1 limit:(long long)arg2 error:(id *)arg3;
- (long long)updateRecord:(id)arg1 serverPriority:(long long)arg2 error:(id *)arg3;
- (long long)updateRecord:(id)arg1 skipQuota:(BOOL)arg2 downloadState:(long long)arg3 error:(id *)arg4;
- (long long)updateRecord:(id)arg1 sizeThatStartPredownload:(long long)arg2 downloadRetries:(long long)arg3 downloadState:(long long)arg4 error:(id *)arg5;
- (long long)updateRecord:(id)arg1 downloadState:(long long)arg2 error:(id *)arg3;
- (id)requiredQuotaGroupByPriorityAfterDate:(id)arg1 maxRetries:(long long)arg2 error:(id *)arg3;
- (long long)deleteRecordsBeforeDate:(id)arg1 limit:(long long)arg2 error:(id *)arg3;
@end
