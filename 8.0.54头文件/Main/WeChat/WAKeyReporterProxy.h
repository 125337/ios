@interface WAKeyReporterProxy : NSObject <IWAKeyReporterService>
+ (void)logFeatureExtIDkey:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3 isKeyLog:(BOOL)arg4;
+ (void)logFeatureExtIDkeyList:(const void *)arg1 isKeyLog:(BOOL)arg2;
@end

