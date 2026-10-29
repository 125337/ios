@interface WCFinderOuterPreloadTask : NSObject <PBCoding>
{
    NSString * _tid; // +0x8
    unsigned long long _preloadPercent; // +0x10
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_preloadPercent;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)preloadPercent;
- (void)setPreloadPercent:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

