@interface OVBAnalyticsManager : NSObject
+ (void)initReporter;
+ (void)shutdownReporter;
+ (void)registerDefaultFileSink;
+ (void)registerBridgingEventSink:(id /* block */)arg1;
+ (void)unregisterBridgingEventSink;
@end

