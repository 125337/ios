@interface WCPayBalanceLQTOpenInfo : NSObject <PBCoding>
{
    int _routeType; // +0x8
    NSString * _openInfo; // +0x10
    NSString * _openUrl; // +0x18
    NSString * _appName; // +0x20
}
+ (void)PBArrayAdd_openInfo;
+ (void)PBArrayAdd_openUrl;
+ (void)PBArrayAdd_routeType;
+ (void)PBArrayAdd_appName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)openInfo;
- (void)setOpenInfo:(id)arg1;
- (id)openUrl;
- (void)setOpenUrl:(id)arg1;
- (int)routeType;
- (void)setRouteType:(int)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (void).cxx_destruct;
@end
