@interface WXGCloudRoamPlatformProvider : NSObject <CloudBackupPlatformProviderBase>
{
    CloudBackupPlatformProviderCallback * _zidlCallback; // +0x8
    NSString * _keychainServiceName; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (id)getBackupReq;
- (BOOL)isWiFi;
- (BOOL)isWWAN;
- (void)pushRouteAsync:(unsigned long long)arg1 routeName:(id)arg2 params:(id)arg3;
- (void)pushRouteAsyncImpl:(unsigned long long)arg1 routeName:(id)arg2 params:(id)arg3;
- (id)getContactNicknames;
- (void)removeMediaAsync:(unsigned long long)arg1 req:(id)arg2;
- (void)setCallback:(id)arg1;
- (BOOL)isMainDevice;
- (void)writeKeychain:(id)arg1;
- (id)readKeychain;
- (void)deleteKeychain;
- (id)zidlCallback;
- (void)setZidlCallback:(id)arg1;
- (id)keychainServiceName;
- (void)setKeychainServiceName:(id)arg1;
- (void).cxx_destruct;
@end
