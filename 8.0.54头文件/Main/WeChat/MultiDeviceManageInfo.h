@interface MultiDeviceManageInfo : NSObject
{
    OnlineInfo * _onlineInfo; // +0x8
    NSNumber * _cachedLock; // +0x10
    NSNumber * _cachedAutoLoginEnabled; // +0x18
    NSNumber * _cachedKeepAliveEnabled; // +0x20
}
- (id)initWithOnlineInfo:(id)arg1;
- (BOOL)isEqualToManageInfo:(id)arg1;
- (id)iconImage;
- (id)bigIconImage;
- (BOOL)isMute;
- (BOOL)isLocked;
- (void)setLock:(BOOL)arg1;
- (BOOL)showAutoLoginEntrance;
- (BOOL)isAutoLoginEnabled;
- (void)setAutoLoginEnabled:(BOOL)arg1;
- (BOOL)isKeepAliveEnabled;
- (void)setKeepAliveEnabled:(BOOL)arg1;
- (void)resolveContentWithCompletionBlock:(id /* block */)arg1;
- (id)helpURL;
- (id)exitTitle;
- (id)exitConfirmButtonTitle;
- (id)logoutButtonTitle;
- (id)autoLoginSwitchTip;
- (id)displayDeviceType;
- (id)displayDeviceName;
- (id)onlineInfo;
- (void)setOnlineInfo:(id)arg1;
- (id)cachedLock;
- (void)setCachedLock:(id)arg1;
- (id)cachedAutoLoginEnabled;
- (void)setCachedAutoLoginEnabled:(id)arg1;
- (id)cachedKeepAliveEnabled;
- (void)setCachedKeepAliveEnabled:(id)arg1;
- (void).cxx_destruct;
@end

