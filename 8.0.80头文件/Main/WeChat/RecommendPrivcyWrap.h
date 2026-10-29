@interface RecommendPrivcyWrap : MMObject <PBCoding>
{
    BOOL _isBriefHeaderOperated; // +0x8
    unsigned int _fullHeaderFirstShowTime; // +0xc
    unsigned int _briefHeaderFirstShowTime; // +0x10
    unsigned int _rejectFullHeaderTime; // +0x14
}
+ (void)PBArrayAdd_fullHeaderFirstShowTime;
+ (void)PBArrayAdd_briefHeaderFirstShowTime;
+ (void)PBArrayAdd_rejectFullHeaderTime;
+ (void)PBArrayAdd_isBriefHeaderOperated;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (unsigned int)fullHeaderFirstShowTime;
- (void)setFullHeaderFirstShowTime:(unsigned int)arg1;
- (unsigned int)briefHeaderFirstShowTime;
- (void)setBriefHeaderFirstShowTime:(unsigned int)arg1;
- (unsigned int)rejectFullHeaderTime;
- (void)setRejectFullHeaderTime:(unsigned int)arg1;
- (BOOL)isBriefHeaderOperated;
- (void)setIsBriefHeaderOperated:(BOOL)arg1;
@end
