@interface MMFinderLiveRecordMemObj : NSObject
{
    unsigned int _currentTime; // +0x8
    float _curMem; // +0xc
}
+ (id)liveRecordMemObjWithMem:(long long)arg1;
- (id)liveRecordReportString;
- (id)genFinderSimpleDateTimeStringByTimestamp:(long long)arg1;
- (unsigned int)currentTime;
- (void)setCurrentTime:(unsigned int)arg1;
- (float)curMem;
- (void)setCurMem:(float)arg1;
@end

