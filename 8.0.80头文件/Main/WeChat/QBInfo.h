@interface QBInfo : NSObject
+ (id)QUAForV23;
+ (id)IDFA;
+ (id)IDFV;
+ (id)APPN;
+ (id)APPV;
+ (long long)getWifiAddress;
+ (id)getARandomUUID;
+ (id)getLatestCachedUUID;
+ (id)getMttVendorIdSafety;
+ (id)getMacAddress;
+ (id)getDeviceIdSafety;
+ (void)initATSON;
+ (BOOL)isATSON;
+ (BOOL)isMediaATSON;
+ (void)initialize;
@end
