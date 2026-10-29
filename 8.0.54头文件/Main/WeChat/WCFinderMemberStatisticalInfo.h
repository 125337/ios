@interface WCFinderMemberStatisticalInfo : NSObject <PBCoding>
{
    NSMutableArray * _statisticalInfoList; // +0x8
}
+ (void)PBArrayAdd_statisticalInfoList;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)initWithMemberStatisticalInfo:(id)arg1;
- (id)statisticalInfoList;
- (void)setStatisticalInfoList:(id)arg1;
- (void).cxx_destruct;
@end

