@interface TipsReportInfo : NSObject <PBCoding>
{
    unsigned long long _filteredType; // +0x8
    unsigned long long _reportStayTime; // +0x10
}
+ (void)PBArrayAdd_filteredType;
+ (void)PBArrayAdd_reportStayTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)description;
- (unsigned long long)filteredType;
- (void)setFilteredType:(unsigned long long)arg1;
- (unsigned long long)reportStayTime;
- (void)setReportStayTime:(unsigned long long)arg1;
@end

