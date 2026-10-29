@interface TPBeaconReportWrapper : NSObject <ITPReportWrapper>
+ (void)initBeaconSDK;
+ (void)setupGuid:(id)arg1;
- (void)reportEvent:(id)arg1 withParams:(id)arg2;
@end

