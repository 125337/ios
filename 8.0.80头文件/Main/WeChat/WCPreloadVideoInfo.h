@interface WCPreloadVideoInfo : NSObject <PBCoding>
{
    unsigned int _dailyControlTimestamp; // +0x8
    unsigned int _dailyControlCount; // +0xc
    NSMutableDictionary * _dicRecord; // +0x10
}
+ (void)PBArrayAdd_dicRecord;
+ (void)PBArrayAdd_dailyControlTimestamp;
+ (void)PBArrayAdd_dailyControlCount;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)overDailyLimit:(unsigned int)arg1;
- (void)resetDailyControlInfo;
- (id)dicRecord;
- (void)setDicRecord:(id)arg1;
- (unsigned int)dailyControlTimestamp;
- (void)setDailyControlTimestamp:(unsigned int)arg1;
- (unsigned int)dailyControlCount;
- (void)setDailyControlCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
