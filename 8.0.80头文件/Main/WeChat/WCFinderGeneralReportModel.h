@interface WCFinderGeneralReportModel : NSObject <PBCoding>
{
    NSString * _svrReportJsonString; // +0x8
}
+ (void)PBArrayAdd_svrReportJsonString;
+ (void)initialize;
+ (id)convertFromGeneralReportPB:(id)arg1;
- (id)getPBPropertyTable;
- (id)genPBGeneralReportInfo;
- (id)svrReportJsonString;
- (void)setSvrReportJsonString:(id)arg1;
- (void).cxx_destruct;
@end
