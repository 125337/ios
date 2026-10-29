@interface WxaLiteAppWidgetCheckAndGetLiteAppPathMessage : NSObject
{
    NSString * _appId; // +0x8
    NSString * _minVersion; // +0x10
    NSNumber * _checkUpdate; // +0x18
    NSNumber * _syncCheckUpdate; // +0x20
}
+ (id)makeWithAppId:(id)arg1 minVersion:(id)arg2 checkUpdate:(id)arg3 syncCheckUpdate:(id)arg4;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (id)checkUpdate;
- (void)setCheckUpdate:(id)arg1;
- (id)syncCheckUpdate;
- (void)setSyncCheckUpdate:(id)arg1;
- (void).cxx_destruct;
@end
