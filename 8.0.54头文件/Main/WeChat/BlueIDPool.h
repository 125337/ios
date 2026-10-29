@interface BlueIDPool : NSObject
+ (long long)getNewSessionIdByType:(long long)arg1;
+ (long long)getDIDByType:(long long)arg1 AndIDString:(id)arg2;
+ (long long)getDIDByType:(long long)arg1 AndUuid:(__CFUUID *)arg2;
+ (int)getAdapterIndex:(long long)arg1;
+ (int)getDeviceTypeByID:(long long)arg1;
+ (long long)getDIDByType:(long long)arg1 AndMACData:(id)arg2;
+ (long long)getDIDByType:(long long)arg1 AndMACString:(id)arg2;
@end

