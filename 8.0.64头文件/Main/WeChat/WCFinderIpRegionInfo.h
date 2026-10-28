@interface WCFinderIpRegionInfo : NSObject <PBCoding, WCTColumnCoding>
{
    NSString * _regionText; // +0x8
}
+ (void)PBArrayAdd_regionText;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithRegionInfo:(id)arg1;
- (id)genFinderRegionInfo;
- (id)description;
- (id)regionText;
- (void)setRegionText:(id)arg1;
- (void).cxx_destruct;
@end
