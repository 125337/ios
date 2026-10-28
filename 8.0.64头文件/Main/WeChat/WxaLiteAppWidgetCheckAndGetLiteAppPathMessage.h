@interface WxaLiteAppWidgetCheckAndGetLiteAppPathMessage : NSObject
{
    NSString * _appId; // +0x8
    NSNumber * _checkUpdate; // +0x10
    NSNumber * _syncCheckUpdate; // +0x18
}
+ (id)makeWithAppId:(id)arg1 checkUpdate:(id)arg2 syncCheckUpdate:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)checkUpdate;
- (void)setCheckUpdate:(id)arg1;
- (id)syncCheckUpdate;
- (void)setSyncCheckUpdate:(id)arg1;
- (void).cxx_destruct;
@end
