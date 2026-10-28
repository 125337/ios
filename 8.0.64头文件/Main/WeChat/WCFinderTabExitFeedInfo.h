@interface WCFinderTabExitFeedInfo : NSObject <PBCoding>
{
    NSString * _tid; // +0x8
    unsigned long long _expiredTime; // +0x10
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_expiredTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)expiredTime;
- (void)setExpiredTime:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
