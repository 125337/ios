@interface YtSDKKitConfig : NSObject
{
    NSString * sdkConfigMd5; // +0x8
    NSString * uiConfigMd5; // +0x10
    NSDictionary * _sdkConfig; // +0x18
    NSDictionary * _uiConfig; // +0x20
}
+ (id)sharedInstance;
+ (void)clearInstance;
- (int)loadSDKConfigWith:(id)arg1 withUIConfig:(id)arg2;
- (BOOL)validateConfigData;
- (id)getUIConfigBy:(long long)arg1;
- (id)getSDKConfigBy:(long long)arg1;
- (id)parseJsonConfigWith:(id)arg1 withJsonRoot:(id)arg2 outWithResult:(int *)arg3;
- (id)getStateNameArrayBy:(long long)arg1;
- (id)getConfigData:(id)arg1 withKey:(id)arg2 withRequired:(BOOL)arg3;
- (void)sendUIEventWithValue:(id)arg1 withType:(id)arg2;
- (id)getMd5:(id)arg1;
- (id)sdkConfig;
- (void)setSdkConfig:(id)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (void).cxx_destruct;
@end
