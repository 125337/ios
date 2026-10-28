@interface WADataBaseProxy : NSObject <IWADataBaseService>
+ (long long)tagForWeApp;
+ (long long)tagForWeAppTask;
+ (id)notificationWithTag:(long long)arg1;
@end
