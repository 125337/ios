@interface WCFinderTipsShowDiscoveryExtInfo : NSObject <PBCoding>
{
    NSString * _tipsUuid; // +0x8
    NSString * _reportExtInfo; // +0x10
}
+ (void)PBArrayAdd_reportExtInfo;
+ (void)PBArrayAdd_tipsUuid;
+ (void)initialize;
+ (id)extInfoWith:(id)arg1 tipsUuid:(id)arg2;
- (id)getPBPropertyTable;
- (id)redDotReportExtInfoByCtrlExtInfo:(id)arg1;
- (id)tipsUuid;
- (void)setTipsUuid:(id)arg1;
- (id)reportExtInfo;
- (void)setReportExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

