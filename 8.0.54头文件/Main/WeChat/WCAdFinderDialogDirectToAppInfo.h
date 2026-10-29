@interface WCAdFinderDialogDirectToAppInfo : WCAdFinderDialogBaseInfo
{
    BOOL _internalJumpAppStore; // +0x28
    NSString * _openSdkAppId; // +0x30
    NSString * _appPageUrl; // +0x38
    NSString * _appJumpUrl; // +0x40
    NSString * _adExtInfo; // +0x48
    NSString * _defaultJumpInfoBase64; // +0x50
}
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
- (void).cxx_destruct;
@end

