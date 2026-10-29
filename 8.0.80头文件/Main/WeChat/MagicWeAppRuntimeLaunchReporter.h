@interface MagicWeAppRuntimeLaunchReporter : NSObject
+ (id)eventName:(unsigned int)arg1;
+ (unsigned long long)generatePreloadTraceId;
+ (unsigned long long)generateLaunchId;
+ (double)now;
+ (long long)millisecondsFrom:(double)arg1;
+ (unsigned int)errorTypeForResourcePrepareErrorKey:(id)arg1;
+ (id)encodedAttachProfileWithProfile:(id)arg1;
+ (void)reportItem:(id)arg1;
@end
