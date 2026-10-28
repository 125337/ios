@interface FBSDKDeviceRequestsHelper : NSObject
+ (void)initialize;
+ (id)getDeviceInfo;
+ (BOOL)startAdvertisementService:(id)arg1 withDelegate:(id)arg2;
+ (BOOL)isDelegate:(id)arg1 forAdvertisementService:(id)arg2;
+ (void)cleanUpAdvertisementService:(id)arg1;
@end
