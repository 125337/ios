@interface TMSStatsReporter : NSObject
{
    BOOL _isShowLog; // +0x8
    NSMutableDictionary * _commomParams; // +0x10
}
+ (id)reporter;
+ (id)commonCrashValueDict:(id)arg1;
- (id)init;
- (void)setReportCofig:(id)arg1;
- (void)reportNetflowEvent:(id)arg1;
- (id)fillDictionaryWithClassProperty:(id)arg1 withProperties:(id)arg2;
- (void)reportEvent:(id)arg1;
- (void)reportCrash:(id)arg1;
- (void)reportUserScene:(id)arg1;
- (BOOL)baseReportEventValidation:(id)arg1;
- (void)setupBeacon;
- (void)setCommonReportParams:(id)arg1;
- (void)setBeaconAdditionalParams;
- (BOOL)isShowLog;
- (void)setIsShowLog:(BOOL)arg1;
- (id)commomParams;
- (void)setCommomParams:(id)arg1;
- (void).cxx_destruct;
@end

