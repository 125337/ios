@interface WCFinderRedDotBusinessCTRModel : NSObject <PBCoding>
{
    unsigned long long _businessType; // +0x8
    NSMutableArray * _exposeCountArray; // +0x10
    NSMutableArray * _clickCountArray; // +0x18
    long long _svrUpdateTimeStamp; // +0x20
    long long _exposeLastUpdateTimeStamp; // +0x28
    long long _clickLastUpdateTimeStamp; // +0x30
    double _cacheCtrValue; // +0x38
}
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_svrUpdateTimeStamp;
+ (void)PBArrayAdd_exposeLastUpdateTimeStamp;
+ (void)PBArrayAdd_clickLastUpdateTimeStamp;
+ (void)PBArrayAdd_exposeCountArray;
+ (void)PBArrayAdd_clickCountArray;
+ (void)initialize;
+ (long long)getCurrentTime;
+ (id)_increaseMarkArrayFrom:(id)arg1 lastTimeStamp:(long long *)arg2;
+ (id)_updateToTodayMarkArrayFrom:(id)arg1 lastTimeStamp:(long long *)arg2;
- (id)getPBPropertyTable;
- (id)initWithBusinessType:(unsigned long long)arg1;
- (id)init;
- (void)commonInit;
- (long long)validCalcCount;
- (void)clearUselessArrayItem;
- (void)updateCountToToday;
- (double)getCurrentCtrValue;
- (void)increaseExpose;
- (void)makeCacheCtrValueInvalid;
- (void)increaseClick;
- (id)description;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (id)exposeCountArray;
- (void)setExposeCountArray:(id)arg1;
- (id)clickCountArray;
- (void)setClickCountArray:(id)arg1;
- (long long)svrUpdateTimeStamp;
- (void)setSvrUpdateTimeStamp:(long long)arg1;
- (long long)exposeLastUpdateTimeStamp;
- (void)setExposeLastUpdateTimeStamp:(long long)arg1;
- (long long)clickLastUpdateTimeStamp;
- (void)setClickLastUpdateTimeStamp:(long long)arg1;
- (double)cacheCtrValue;
- (void)setCacheCtrValue:(double)arg1;
- (void).cxx_destruct;
@end
