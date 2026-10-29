@interface MigrationRecordCleaner : NSObject
+ (void)cleanSessionMigrationRecord:(id)arg1;
+ (void)cleanSessionMigrationRecordByTimeRange:(id)arg1 beginTime:(unsigned long long)arg2 endTime:(unsigned long long)arg3;
+ (void)cleanSessionMigrationRecordByMsgs:(id)arg1 chatName:(id)arg2;
+ (void)cleanAllMigrationRecords;
@end
