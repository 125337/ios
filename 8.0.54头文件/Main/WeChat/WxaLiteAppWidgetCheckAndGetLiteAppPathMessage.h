@interface WxaLiteAppWidgetCheckAndGetLiteAppPathMessage : NSObject
{
    BOOL _checkUpdate; // +0x8
    BOOL _syncCheckUpdate; // +0x9
    NSString * _appId; // +0x10
}
+ (id)makeWithAppId:(id)arg1 checkUpdate:(BOOL)arg2 syncCheckUpdate:(BOOL)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (BOOL)checkUpdate;
- (void)setCheckUpdate:(BOOL)arg1;
- (BOOL)syncCheckUpdate;
- (void)setSyncCheckUpdate:(BOOL)arg1;
- (void).cxx_destruct;
@end

