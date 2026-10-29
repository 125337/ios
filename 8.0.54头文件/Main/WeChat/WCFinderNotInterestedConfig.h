@interface WCFinderNotInterestedConfig : NSObject <PBCoding>
{
    long long _subType; // +0x8
    NSString * _wording; // +0x10
}
+ (void)PBArrayAdd_subType;
+ (void)PBArrayAdd_wording;
+ (void)initialize;
- (id)getPBPropertyTable;
- (long long)subType;
- (void)setSubType:(long long)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (void).cxx_destruct;
@end

