@interface NSEIDKeyReportData : NSObject <PBCoding>
{
    NSArray * _idKeyReportList; // +0x8
}
+ (void)PBArrayAdd_idKeyReportList;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)idKeyReportList;
- (void)setIdKeyReportList:(id)arg1;
- (void).cxx_destruct;
@end

