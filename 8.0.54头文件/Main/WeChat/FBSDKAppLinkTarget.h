@interface FBSDKAppLinkTarget : NSObject
{
    NSURL * _URL; // +0x8
    NSString * _appStoreId; // +0x10
    NSString * _appName; // +0x18
}
+ (id)appLinkTargetWithURL:(id)arg1 appStoreId:(id)arg2 appName:(id)arg3;
- (id)URL;
- (void)setURL:(id)arg1;
- (id)appStoreId;
- (void)setAppStoreId:(id)arg1;
- (id)appName;
- (void)setAppName:(id)arg1;
- (void).cxx_destruct;
@end

