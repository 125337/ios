@interface WAMemoryPressureRecord : MMObject
{
    NSMutableArray * _records; // +0x8
}
- (id)init;
- (void)recordMemoryPressureWithLevel:(unsigned long long)arg1;
- (id)getRecordDescriptionInRecentInterval:(unsigned long long)arg1 getAllLevelCount:(unsigned int *)arg2 normalLevelCount:(unsigned int *)arg3 warningLevelCount:(unsigned int *)arg4 UrgentLevelCount:(unsigned int *)arg5 aboveWarningLevelCount:(unsigned int *)arg6 continuityWarningCount:(unsigned int *)arg7 continuityUrgentCount:(unsigned int *)arg8;
- (id)records;
- (void)setRecords:(id)arg1;
- (void).cxx_destruct;
@end
