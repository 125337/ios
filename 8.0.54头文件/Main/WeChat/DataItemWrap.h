@interface DataItemWrap : NSObject <PBCoding>
{
    NSData * _finderObject; // +0x8
    NSString * _tid; // +0x10
    unsigned long long _feedSource; // +0x18
    unsigned long long _funcFlag; // +0x20
    unsigned long long _expiredTime; // +0x28
}
+ (void)PBArrayAdd_finderObject;
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_feedSource;
+ (void)PBArrayAdd_funcFlag;
+ (void)PBArrayAdd_expiredTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)initWithDataItem:(id)arg1;
- (id)convertToDataItem;
- (id)finderObject;
- (void)setFinderObject:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)feedSource;
- (void)setFeedSource:(unsigned long long)arg1;
- (unsigned long long)funcFlag;
- (void)setFuncFlag:(unsigned long long)arg1;
- (unsigned long long)expiredTime;
- (void)setExpiredTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

