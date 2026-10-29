@interface WxaLiteAppWidgetCreateStoreWithPkgPathMessage : NSObject
{
    NSString * _appId; // +0x8
    NSNumber * _aliveSeconds; // +0x10
    NSString * _pkgPath; // +0x18
}
+ (id)makeWithAppId:(id)arg1 aliveSeconds:(id)arg2 pkgPath:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)aliveSeconds;
- (void)setAliveSeconds:(id)arg1;
- (id)pkgPath;
- (void)setPkgPath:(id)arg1;
- (void).cxx_destruct;
@end
