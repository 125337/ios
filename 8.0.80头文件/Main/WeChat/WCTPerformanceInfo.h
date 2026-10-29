@interface WCTPerformanceInfo : NSObject
{
    int _tablePageReadCount; // +0x8
    int _tablePageWriteCount; // +0xc
    int _indexPageReadCount; // +0x10
    int _indexPageWriteCount; // +0x14
    int _overflowPageReadCount; // +0x18
    int _overflowPageWriteCount; // +0x1c
    long long _costInNanoseconds; // +0x20
}
- (id)initWithPerformanceInfo:(const PerformanceInfo *)arg1;
- (int)tablePageReadCount;
- (void)setTablePageReadCount:(int)arg1;
- (int)tablePageWriteCount;
- (void)setTablePageWriteCount:(int)arg1;
- (int)indexPageReadCount;
- (void)setIndexPageReadCount:(int)arg1;
- (int)indexPageWriteCount;
- (void)setIndexPageWriteCount:(int)arg1;
- (int)overflowPageReadCount;
- (void)setOverflowPageReadCount:(int)arg1;
- (int)overflowPageWriteCount;
- (void)setOverflowPageWriteCount:(int)arg1;
- (long long)costInNanoseconds;
- (void)setCostInNanoseconds:(long long)arg1;
@end
