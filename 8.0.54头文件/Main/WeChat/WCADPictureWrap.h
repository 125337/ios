@interface WCADPictureWrap : NSObject
{
    unsigned int _index; // +0x8
    unsigned int _totalCount; // +0xc
    unsigned long long _startTime; // +0x10
    unsigned long long _endTime; // +0x18
    unsigned long long _totalTime; // +0x20
}
- (unsigned int)index;
- (void)setIndex:(unsigned int)arg1;
- (unsigned long long)startTime;
- (void)setStartTime:(unsigned long long)arg1;
- (unsigned long long)endTime;
- (void)setEndTime:(unsigned long long)arg1;
- (unsigned long long)totalTime;
- (void)setTotalTime:(unsigned long long)arg1;
- (unsigned int)totalCount;
- (void)setTotalCount:(unsigned int)arg1;
@end

