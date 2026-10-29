@interface WCFinderProfileOverviewLayout : NSObject <PBCoding>
{
    long long _secType; // +0x8
    NSArray * _layouts; // +0x10
}
+ (void)PBArrayAdd_secType;
+ (void)PBArrayAdd_layouts;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)secType;
- (void)setSecType:(long long)arg1;
- (id)layouts;
- (void)setLayouts:(id)arg1;
- (void).cxx_destruct;
@end

