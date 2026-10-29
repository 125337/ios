@interface MMResCheckResponseData : NSObject <PBCoding>
{
    unsigned int _nextTime; // +0x8
    NSData * _context; // +0x10
}
+ (void)PBArrayAdd_nextTime;
+ (void)PBArrayAdd_context;
+ (void)initialize;
+ (BOOL)SaveContext:(id)arg1 checkTime:(unsigned int)arg2;
+ (BOOL)SaveData:(id)arg1;
+ (id)GetCached;
+ (void)InvalidateCache;
- (id)getPBPropertyTable;
- (unsigned int)nextTime;
- (void)setNextTime:(unsigned int)arg1;
- (id)context;
- (void)setContext:(id)arg1;
- (void).cxx_destruct;
@end

