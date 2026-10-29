@interface WCDBCompressRecordItem : NSObject <PBCoding>
{
    unsigned int _totalPageCount; // +0x8
    unsigned int _freePageCount; // +0xc
    long long _startTime; // +0x10
}
+ (void)PBArrayAdd_startTime;
+ (void)PBArrayAdd_totalPageCount;
+ (void)PBArrayAdd_freePageCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)startTime;
- (void)setStartTime:(long long)arg1;
- (unsigned int)totalPageCount;
- (void)setTotalPageCount:(unsigned int)arg1;
- (unsigned int)freePageCount;
- (void)setFreePageCount:(unsigned int)arg1;
@end
