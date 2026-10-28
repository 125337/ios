@interface EcsCoreEcsReporter_UrCpp : UnitRCObjcBaseProxyClass <EcsCoreEcsReporter_Ur>
+ (id)sharedInstance;
- (void)logFeatureExt:(int)arg1 logString:(id)arg2;
- (void)kvMonitor:(int)arg1 value:(int)arg2;
- (void)kvMonitorExtra:(int)arg1 value:(int)arg2 extra:(id)arg3;
- (void)kvMonitorExtraSampleRate:(int)arg1 value:(int)arg2 extra:(id)arg3 sampleRate:(int)arg4;
- (void)reportEcsOperationFLow:(id)arg1;
@end
