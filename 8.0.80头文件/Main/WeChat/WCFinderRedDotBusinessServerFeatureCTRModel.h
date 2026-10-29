@interface WCFinderRedDotBusinessServerFeatureCTRModel : NSObject <PBCoding>
{
    int _businessType; // +0x8
    long long _svrUpdateTimeStamp; // +0x10
    long long _exposeLastUpdateTimeStamp; // +0x18
    long long _clickLastUpdateTimeStamp; // +0x20
    NSMutableArray * _exposeCountArray; // +0x28
    NSMutableArray * _clickCountArray; // +0x30
}
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_svrUpdateTimeStamp;
+ (void)PBArrayAdd_exposeLastUpdateTimeStamp;
+ (void)PBArrayAdd_clickLastUpdateTimeStamp;
+ (void)PBArrayAdd_exposeCountArray;
+ (void)PBArrayAdd_clickCountArray;
+ (void)initialize;
+ (long long)getCurrentTime;
+ (long long)_dayIndexFrom:(long long)arg1;
+ (id)_increaseMarkArrayFrom:(id)arg1 lastTimeStamp:(long long *)arg2;
+ (id)_updateToTodayMarkArrayFrom:(id)arg1 lastTimeStamp:(long long *)arg2;
- (id)getPBPropertyTable;
- (id)initWithBusinessType:(int)arg1;
- (id)init;
- (void)clearUselessArrayItem;
- (void)updateCountToToday;
- (void)increaseExpose;
- (void)increaseClick;
- (id)description;
- (int)businessType;
- (void)setBusinessType:(int)arg1;
- (long long)svrUpdateTimeStamp;
- (void)setSvrUpdateTimeStamp:(long long)arg1;
- (long long)exposeLastUpdateTimeStamp;
- (void)setExposeLastUpdateTimeStamp:(long long)arg1;
- (long long)clickLastUpdateTimeStamp;
- (void)setClickLastUpdateTimeStamp:(long long)arg1;
- (id)exposeCountArray;
- (void)setExposeCountArray:(id)arg1;
- (id)clickCountArray;
- (void)setClickCountArray:(id)arg1;
- (void).cxx_destruct;
@end
