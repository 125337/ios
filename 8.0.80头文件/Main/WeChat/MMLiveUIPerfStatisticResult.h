@interface MMLiveUIPerfStatisticResult : NSObject
{
    int _sumRecordCnt; // +0x8
    double _startTime; // +0x10
    double _endTime; // +0x18
    double _duration; // +0x20
    double _sumComposeArea; // +0x28
    double _sumComposeAreaPercent; // +0x30
}
- (void)updateStartTime:(double)arg1 endTime:(double)arg2;
- (void)addComposeArea:(CGSize)arg1;
- (void)addComposeAreaPercent:(double)arg1;
- (int)sumRecordCnt;
- (void)setSumRecordCnt:(int)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)endTime;
- (void)setEndTime:(double)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (double)sumComposeArea;
- (void)setSumComposeArea:(double)arg1;
- (double)sumComposeAreaPercent;
- (void)setSumComposeAreaPercent:(double)arg1;
@end
