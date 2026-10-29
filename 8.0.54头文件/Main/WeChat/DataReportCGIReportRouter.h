@interface DataReportCGIReportRouter : NSObject <DataReportReportCallbackExt>
+ (void)registerCallback:(id)arg1 withTarget:(id)arg2;
+ (void)unRegisterCallback:(id)arg1 withTarget:(id)arg2;
- (id)callbackCgiReport:(unsigned long long)arg1 andUdfKvMap:(id)arg2 andEventId:(id)arg3;
- (BOOL)onDataReport:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRule:(id)arg4;
- (unsigned long long)routeType;
- (id)fixCgiParams:(id)arg1;
@end

