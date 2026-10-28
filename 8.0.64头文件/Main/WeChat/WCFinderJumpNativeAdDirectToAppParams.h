@interface WCFinderJumpNativeAdDirectToAppParams : NSObject
{
    BOOL _internalJumpAppStore; // +0x8
    NSString * _openSdkAppId; // +0x10
    NSString * _appPageUrl; // +0x18
    NSString * _appJumpUrl; // +0x20
    NSString * _adExtInfo; // +0x28
    NSString * _defaultJumpInfoBase64; // +0x30
    NSString * _dialogAppIcon; // +0x38
    NSString * _dialogAppName; // +0x40
    NSString * _dialogButtonTitle; // +0x48
}
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
- (id)openSdkAppId;
- (void)setOpenSdkAppId:(id)arg1;
- (id)appPageUrl;
- (void)setAppPageUrl:(id)arg1;
- (id)appJumpUrl;
- (void)setAppJumpUrl:(id)arg1;
- (BOOL)internalJumpAppStore;
- (void)setInternalJumpAppStore:(BOOL)arg1;
- (id)adExtInfo;
- (void)setAdExtInfo:(id)arg1;
- (id)defaultJumpInfoBase64;
- (void)setDefaultJumpInfoBase64:(id)arg1;
- (id)dialogAppIcon;
- (void)setDialogAppIcon:(id)arg1;
- (id)dialogAppName;
- (void)setDialogAppName:(id)arg1;
- (id)dialogButtonTitle;
- (void)setDialogButtonTitle:(id)arg1;
- (void).cxx_destruct;
@end
