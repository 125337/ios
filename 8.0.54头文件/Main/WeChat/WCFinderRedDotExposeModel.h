@interface WCFinderRedDotExposeModel : NSObject <PBCoding>
{
    BOOL _isBanAsUseBusiness; // +0x8
    id <WCFinderRedDotExposeModelDelegate> _delegate; // +0x10
    NSString * _path; // +0x18
    unsigned long long _businessType; // +0x20
    NSMutableArray * _exposeTimeStampArray; // +0x28
    NSMutableArray * _banTimeStampArray; // +0x30
    long long _accRedDotExpStartTime; // +0x38
}
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_exposeTimeStampArray;
+ (void)PBArrayAdd_banTimeStampArray;
+ (void)PBArrayAdd_businessType;
+ (void)PBArrayAdd_accRedDotExpStartTime;
+ (void)initialize;
+ (BOOL)isAllTimestampsToday:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithRedDotPath:(id)arg1 businessType:(unsigned long long)arg2;
- (id)getTargetKey;
- (long long)exposeCount;
- (long long)banCount;
- (void)increaseExposeCount;
- (void)increaseBanCount;
- (void)removeBanCountArray;
- (void)resetBanCalacCount;
- (void)resetCalacCountAtReason:(long long)arg1;
- (id)exposeTimeStampArray;
- (id)banTimeStampArray;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (unsigned long long)businessType;
- (void)setBusinessType:(unsigned long long)arg1;
- (void)setExposeTimeStampArray:(id)arg1;
- (void)setBanTimeStampArray:(id)arg1;
- (long long)accRedDotExpStartTime;
- (void)setAccRedDotExpStartTime:(long long)arg1;
- (BOOL)isBanAsUseBusiness;
- (void)setIsBanAsUseBusiness:(BOOL)arg1;
- (void).cxx_destruct;
@end

