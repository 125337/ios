@interface CalendarInfo : MMObject <PBCoding>
{
    unsigned int _ds; // +0x8
    unsigned int _exposeCount; // +0xc
    unsigned int _tipsIdExposeCount; // +0x10
    unsigned int _enterCount; // +0x14
    unsigned int _enterWithRedDotCount; // +0x18
    unsigned int _dropRedDotCount; // +0x1c
    unsigned int _deepReadCount; // +0x20
    unsigned long long _firstExposeTimeMs; // +0x28
    NSString * _lastTipsId; // +0x30
    unsigned long long _totalStayTimeMs; // +0x38
    NSString * _stayTimeSecList; // +0x40
    NSString * _finderVvList; // +0x48
}
+ (void)PBArrayAdd_ds;
+ (void)PBArrayAdd_firstExposeTimeMs;
+ (void)PBArrayAdd_exposeCount;
+ (void)PBArrayAdd_lastTipsId;
+ (void)PBArrayAdd_tipsIdExposeCount;
+ (void)PBArrayAdd_enterCount;
+ (void)PBArrayAdd_enterWithRedDotCount;
+ (void)PBArrayAdd_totalStayTimeMs;
+ (void)PBArrayAdd_dropRedDotCount;
+ (void)PBArrayAdd_deepReadCount;
+ (void)PBArrayAdd_stayTimeSecList;
+ (void)PBArrayAdd_finderVvList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)reset;
- (id)description;
- (unsigned int)ds;
- (void)setDs:(unsigned int)arg1;
- (unsigned long long)firstExposeTimeMs;
- (void)setFirstExposeTimeMs:(unsigned long long)arg1;
- (unsigned int)exposeCount;
- (void)setExposeCount:(unsigned int)arg1;
- (id)lastTipsId;
- (void)setLastTipsId:(id)arg1;
- (unsigned int)tipsIdExposeCount;
- (void)setTipsIdExposeCount:(unsigned int)arg1;
- (unsigned int)enterCount;
- (void)setEnterCount:(unsigned int)arg1;
- (unsigned int)enterWithRedDotCount;
- (void)setEnterWithRedDotCount:(unsigned int)arg1;
- (unsigned long long)totalStayTimeMs;
- (void)setTotalStayTimeMs:(unsigned long long)arg1;
- (unsigned int)dropRedDotCount;
- (void)setDropRedDotCount:(unsigned int)arg1;
- (unsigned int)deepReadCount;
- (void)setDeepReadCount:(unsigned int)arg1;
- (id)stayTimeSecList;
- (void)setStayTimeSecList:(id)arg1;
- (id)finderVvList;
- (void)setFinderVvList:(id)arg1;
- (void).cxx_destruct;
@end
