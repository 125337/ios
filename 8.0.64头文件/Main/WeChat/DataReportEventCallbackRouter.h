@interface DataReportEventCallbackRouter : NSObject <DataReportReportCallbackExt>
- (BOOL)onDataReport:(id)arg1 time:(unsigned long long)arg2 params:(id)arg3 routeRule:(id)arg4;
- (unsigned long long)routeType;
@end
