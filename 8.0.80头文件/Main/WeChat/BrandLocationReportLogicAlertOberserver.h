@interface BrandLocationReportLogicAlertOberserver : NSObject
{
    BrandServiceContinueLocationReportLogic * weakReportLogic; // +0x8
}
+ (id)sharedInstance;
- (void)askIsAllowReportLocation:(id)arg1;
- (id)weakReportLogic;
- (void)setWeakReportLogic:(id)arg1;
- (void).cxx_destruct;
@end
