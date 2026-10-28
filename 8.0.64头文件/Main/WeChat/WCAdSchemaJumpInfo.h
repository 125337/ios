@interface WCAdSchemaJumpInfo : NSObject <NSCoding>
{
    BOOL _bInternalJump; // +0x8
    BOOL _bIsShowLaunchFailToast; // +0x9
    BOOL _ulinkAllowNoPrompt; // +0xa
    NSString * _sdkAppId; // +0x10
    NSString * _parameter; // +0x18
    NSString * _appJumpUrl; // +0x20
    NSString * _appPageUrl; // +0x28
    NSString * _messageExt; // +0x30
    WCSKAdNetworkItem * _skAdItem; // +0x38
    OpenApiLaunchContext * _launchContext; // +0x40
    WCAdOpenAppHalfScreenInfo * _openAppHalfScreenInfo; // +0x48
    WCAdSchemaDoubleLinkInfo * _doubleLinkInfo; // +0x50
    NSString * _ulinkUrl; // +0x58
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)isValidForUlinkUrl;
- (BOOL)isValidForDeeplink;
- (id)provideMessageExt;
- (id)sdkAppId;
- (void)setSdkAppId:(id)arg1;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (id)appJumpUrl;
- (void)setAppJumpUrl:(id)arg1;
- (id)appPageUrl;
- (void)setAppPageUrl:(id)arg1;
- (BOOL)bInternalJump;
- (void)setBInternalJump:(BOOL)arg1;
- (id)messageExt;
- (void)setMessageExt:(id)arg1;
- (id)skAdItem;
- (void)setSkAdItem:(id)arg1;
- (BOOL)bIsShowLaunchFailToast;
- (void)setBIsShowLaunchFailToast:(BOOL)arg1;
- (id)launchContext;
- (void)setLaunchContext:(id)arg1;
- (id)openAppHalfScreenInfo;
- (void)setOpenAppHalfScreenInfo:(id)arg1;
- (id)doubleLinkInfo;
- (void)setDoubleLinkInfo:(id)arg1;
- (id)ulinkUrl;
- (void)setUlinkUrl:(id)arg1;
- (BOOL)ulinkAllowNoPrompt;
- (void)setUlinkAllowNoPrompt:(BOOL)arg1;
- (void).cxx_destruct;
@end
