@interface MMWebViewPerformance : NSObject
{
    NSMutableArray * _timeRecordList; // +0x8
    NSMutableDictionary * _timeRecordDic; // +0x10
    unsigned long long _startTime; // +0x18
}
+ (unsigned long long)currentTimeInMs;
- (id)init;
- (id)description;
- (void)recordTimeWithName:(id)arg1 newCategory:(BOOL)arg2 detail:(id)arg3;
- (void)recordTimeWithName:(id)arg1 time:(unsigned long long)arg2 newCategory:(BOOL)arg3 detail:(id)arg4;
- (void)sortTimeRecord;
- (void)removeAllRecords;
- (int)relativeRecordTimeForName:(id)arg1;
- (id)timeRecordList;
- (void)setTimeRecordList:(id)arg1;
- (id)timeRecordDic;
- (void)setTimeRecordDic:(id)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

