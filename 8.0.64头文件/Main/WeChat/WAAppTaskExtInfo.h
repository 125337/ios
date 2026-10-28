@interface WAAppTaskExtInfo : NSObject
{
    BOOL _beSpecificPage; // +0x8
    BOOL _isSilentOpen; // +0x9
    BOOL _isRemoteMode; // +0xa
    BOOL _isGameIOSRemoteDebug; // +0xb
    BOOL _isSkipGameJSWrap; // +0xc
    BOOL _ignoreDomain; // +0xd
    BOOL _isUseParalelRequest; // +0xe
    BOOL _launchAppLoaderReloaded; // +0xf
    BOOL _relaunchAppLoaderReloaded; // +0x10
    BOOL _aliveFailedRebooted; // +0x11
    BOOL _noReLaunch; // +0x12
    BOOL _asyncLaunchPubResRelyUpdateRebooted; // +0x13
    BOOL _shouldForbidRecentForward; // +0x14
    BOOL _shouldDelayRestartGame; // +0x15
    unsigned int _silentOpenType; // +0x18
    unsigned int _channelType; // +0x1c
    unsigned int _debugType; // +0x20
    unsigned int _proxyPort; // +0x24
    unsigned int _supportCompressAlgo; // +0x28
    WAAppTaskReferrerInfo * _referrerInfo; // +0x30
    WAAppTaskWebLaunchInfo * _webLaunchInfo; // +0x38
    WAAppTaskTransitInfo * _transitInfo; // +0x40
    NSString * _chatName; // +0x48
    NSString * _shareKey; // +0x50
    WAPageFlowAppInfo * _taskAppInfo; // +0x58
    WAPageFlowSessionInfo * _taskSessionInfo; // +0x60
    NSString * _opensdkAppID; // +0x68
    NSString * _userName; // +0x70
    NSString * _roomID; // +0x78
    NSString * _pkgInfo; // +0x80
    NSString * _wsEndPoint; // +0x88
    NSMutableDictionary * _dynamicInfo; // +0x90
    WAUINavigationController * _miniNavigationController; // +0x98
    WALoadingViewController * _preloadWALoadingVC; // +0xa0
    WAUINavigationController * _preloadNavigationController; // +0xa8
    WAAppTaskCapsuleMenu * _preloadCapsuleMenu; // +0xb0
    WAAppTansitionController * _preloadAppTransitionController; // +0xb8
    UIViewController * _gameStartupCoverVC; // +0xc0
}
- (id)dynamicInfo;
- (id)taskAppInfo;
- (id)referrerInfo;
- (void)setReferrerInfo:(id)arg1;
- (id)webLaunchInfo;
- (void)setWebLaunchInfo:(id)arg1;
- (id)transitInfo;
- (void)setTransitInfo:(id)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)shareKey;
- (void)setShareKey:(id)arg1;
- (BOOL)beSpecificPage;
- (void)setBeSpecificPage:(BOOL)arg1;
- (void)setTaskAppInfo:(id)arg1;
- (id)taskSessionInfo;
- (void)setTaskSessionInfo:(id)arg1;
- (id)opensdkAppID;
- (void)setOpensdkAppID:(id)arg1;
- (BOOL)isSilentOpen;
- (void)setIsSilentOpen:(BOOL)arg1;
- (unsigned int)silentOpenType;
- (void)setSilentOpenType:(unsigned int)arg1;
- (BOOL)isRemoteMode;
- (void)setIsRemoteMode:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)roomID;
- (void)setRoomID:(id)arg1;
- (id)pkgInfo;
- (void)setPkgInfo:(id)arg1;
- (unsigned int)channelType;
- (void)setChannelType:(unsigned int)arg1;
- (unsigned int)debugType;
- (void)setDebugType:(unsigned int)arg1;
- (BOOL)isGameIOSRemoteDebug;
- (void)setIsGameIOSRemoteDebug:(BOOL)arg1;
- (BOOL)isSkipGameJSWrap;
- (void)setIsSkipGameJSWrap:(BOOL)arg1;
- (unsigned int)proxyPort;
- (void)setProxyPort:(unsigned int)arg1;
- (BOOL)ignoreDomain;
- (void)setIgnoreDomain:(BOOL)arg1;
- (unsigned int)supportCompressAlgo;
- (void)setSupportCompressAlgo:(unsigned int)arg1;
- (id)wsEndPoint;
- (void)setWsEndPoint:(id)arg1;
- (void)setDynamicInfo:(id)arg1;
- (BOOL)isUseParalelRequest;
- (void)setIsUseParalelRequest:(BOOL)arg1;
- (BOOL)launchAppLoaderReloaded;
- (void)setLaunchAppLoaderReloaded:(BOOL)arg1;
- (BOOL)relaunchAppLoaderReloaded;
- (void)setRelaunchAppLoaderReloaded:(BOOL)arg1;
- (BOOL)aliveFailedRebooted;
- (void)setAliveFailedRebooted:(BOOL)arg1;
- (id)miniNavigationController;
- (void)setMiniNavigationController:(id)arg1;
- (id)preloadWALoadingVC;
- (void)setPreloadWALoadingVC:(id)arg1;
- (id)preloadNavigationController;
- (void)setPreloadNavigationController:(id)arg1;
- (id)preloadCapsuleMenu;
- (void)setPreloadCapsuleMenu:(id)arg1;
- (id)preloadAppTransitionController;
- (void)setPreloadAppTransitionController:(id)arg1;
- (BOOL)noReLaunch;
- (void)setNoReLaunch:(BOOL)arg1;
- (id)gameStartupCoverVC;
- (void)setGameStartupCoverVC:(id)arg1;
- (BOOL)asyncLaunchPubResRelyUpdateRebooted;
- (void)setAsyncLaunchPubResRelyUpdateRebooted:(BOOL)arg1;
- (BOOL)shouldForbidRecentForward;
- (void)setShouldForbidRecentForward:(BOOL)arg1;
- (BOOL)shouldDelayRestartGame;
- (void)setShouldDelayRestartGame:(BOOL)arg1;
- (void).cxx_destruct;
@end
