@interface VoIPIntentConfiguration : NSObject
+ (long long)infosCacheLimitCount;
+ (void)setup;
+ (BOOL)isEnable;
+ (BOOL)isReceivedNotificationFromAPNS;
+ (void)receiveNotificationFromAPNS;
@end

