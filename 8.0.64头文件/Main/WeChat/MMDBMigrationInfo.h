@interface MMDBMigrationInfo : NSObject <PBCoding>
{
    BOOL _disable; // +0x8
    BOOL _hasCheckEnd; // +0x9
    int _checkEndTimes; // +0xc
    NSDate * _start; // +0x10
    NSDate * _end; // +0x18
    long long _size; // +0x20
}
+ (void)PBArrayAdd_start;
+ (void)PBArrayAdd_end;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_disable;
+ (void)PBArrayAdd_hasCheckEnd;
+ (void)PBArrayAdd_checkEndTimes;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (id)start;
- (void)setStart:(id)arg1;
- (id)end;
- (void)setEnd:(id)arg1;
- (long long)size;
- (void)setSize:(long long)arg1;
- (BOOL)disable;
- (void)setDisable:(BOOL)arg1;
- (BOOL)hasCheckEnd;
- (void)setHasCheckEnd:(BOOL)arg1;
- (int)checkEndTimes;
- (void)setCheckEndTimes:(int)arg1;
- (void).cxx_destruct;
@end
