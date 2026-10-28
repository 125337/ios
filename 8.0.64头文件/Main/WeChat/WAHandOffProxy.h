@interface WAHandOffProxy : NSObject <IWAHandOffService>
+ (void)trySetCurrentHandOffWithTask:(id)arg1 handoffId:(id)arg2;
+ (void)tryOpenCurrentHandOffWithTask:(id)arg1 handoffId:(id)arg2 withAppPath:(id)arg3 withActioId:(long long)arg4;
+ (void)removeCurrentHandOffItem;
@end
