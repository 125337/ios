@interface WAAppTaskExtInfo : NSObject
{
    BOOL _beSpecificPage; // +0x8
    BOOL _isSilentOpen; // +0x9
    BOOL _isRemoteMode; // +0xa
    BOOL _ignoreDomain; // +0xb
    BOOL _isUseParalelRequest; // +0xc
    BOOL _launchAppLoaderReloaded; // +0xd
    BOOL _relaunchAppLoaderReloaded; // +0xe
    BOOL _aliveFailedRebooted; // +0xf
    BOOL _noReLaunch; // +0x10
    BOOL _asyncLaunchPubResRelyUpdateRebooted; // +0x11
    BOOL _shouldForbidRecentForward; // +0x12
    BOOL _shouldDelayRestartGame; // +0x13
    unsigned int _silentOpenType; // +0x14
    unsigned int _channelType; // +0x18
    unsigned int _debugType; // +0x1c
    unsigned int _proxyPort; // +0x20
    unsigned int _supportCompressAlgo; // +0x24
    WAAppTaskReferrerInfo * _referrerInfo; // +0x28
    WAAppTaskWebLaunchInfo * _webLaunchInfo; // +0x30
    WAAppTaskTransitInfo * _transitInfo; // +0x38
    NSString * _chatName; // +0x40
    NSString * _shareKey; // +0x48
    WAPageFlowAppInfo * _taskAppInfo; // +0x50
    WAPageFlowSessionInfo * _taskSessionInfo; // +0x58
    NSString * _opensdkAppID; // +0x60
    NSString * _userName; // +0x68
    NSString * _roomID; // +0x70
    NSString * _pkgInfo; // +0x78
    NSString * _wsEndPoint; // +0x80
    NSMutableDictionary * _dynamicInfo; // +0x88
    WAUINavigationController * _miniNavigationController; // +0x90
    WALoadingViewController * _preloadWALoadingVC; // +0x98
    WAUINavigationController * _preloadNavigationController; // +0xa0
    WAAppTaskCapsuleMenu * _preloadCapsuleMenu; // +0xa8
    WAAppTansitionController * _preloadAppTransitionController; // +0xb0
    UIViewController * _gameStartupCoverVC; // +0xb8
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

