@interface WAShareAppMessageContextSpecialNativeGameCardModel : NSObject
{
    int _appBrandPriority; // +0x8
    NSString * _appID; // +0x10
    NSString * _appName; // +0x18
    NSString * _liteGameInfo; // +0x20
}
- (id)appID;
- (void)setAppID:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (id)liteGameInfo;
- (void)setLiteGameInfo:(id)arg1;
- (int)appBrandPriority;
- (void)setAppBrandPriority:(int)arg1;
- (void).cxx_destruct;
@end

