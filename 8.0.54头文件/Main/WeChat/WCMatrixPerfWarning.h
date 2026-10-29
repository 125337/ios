@interface WCMatrixPerfWarning : NSObject
+ (void)postNotification:(unsigned long long)arg1;
+ (void)postNotification:(unsigned long long)arg1 customInfo:(id)arg2;
+ (unsigned long long)parseEventFromNotification:(id)arg1;
+ (long long)parseThermalStateFromNotification:(id)arg1;
+ (BOOL)parseMemoryExceededFromNotification:(id)arg1;
+ (unsigned long long)parseFootprintMemoryFromNotification:(id)arg1;
+ (unsigned long long)parseAvailableMemoryFromNotification:(id)arg1;
+ (double)parseHangTimeFromNotification:(id)arg1;
@end

