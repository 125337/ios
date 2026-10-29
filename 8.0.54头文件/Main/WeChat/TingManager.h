@interface TingManager : MMUserService <MMServiceProtocol>
{
    BOOL _isFilePlayEnabled; // +0x8
    BOOL _isFlutterWarmUpEnabled; // +0x9
    BOOL _isEnabled; // +0xa
    BOOL _isInBlackListFromDynamicConfig; // +0xb
    BOOL _isInWhiteListFromDynamicConfig; // +0xc
    BOOL _enableFindEntrance; // +0xd
    TingPlayerManager * _playerManager; // +0x10
    id <ITingReportManager> _reportManager; // +0x18
    TingLyricsManager * _lyricsManager; // +0x20
    TingMinimizeMgr * _minimizedTaskManager; // +0x28
    TingPlayCenterMgr * _playingInfoMgr; // +0x30
    TingShareManager * _shareManager; // +0x38
    TingAppTaskManager * _appTaskManager; // +0x40
    TingCrossplatformManager * _crossplatformManager; // +0x48
    TingCdnImageUploadManager * _cdnImageUploadManager; // +0x50
    TingAudioTabDataManager * _audioTabDataManager; // +0x58
    TingPlayerUIManager * _playerUIManager; // +0x60
    TingImageDownloader * _imageDownloader; // +0x68
    TingMembershipManager * _membershipManager; // +0x70
    TingNowPlayingInfoCenter * _nowPlayingInfoCenter; // +0x78
    _TtC6WeChat13TingEntryKara * _entryKara; // +0x80
    unsigned long long _mode; // +0x88
    TingCrossplatformManager * _crossPlatformManager; // +0x90
    MemoryMappedKV * _mmkv; // +0x98
}
+ (id)shared;
- (id)mainPath;
- (id)tempDirectory;
- (BOOL)setupStorage;
- (void)closeStorage;
- (BOOL)isFlutterWarmUpEnabled;
- (void)setIsFlutterWarmUpEnabled:(BOOL)arg1;
- (unsigned long long)playerCoreKsCacheSize;
- (id)playerCoreKsCachePath;
- (unsigned long long)playerCoreTPCacheSize;
- (id)playerCoreTPCachePath;
- (unsigned long long)cleanPlayerCoreKSCache;
- (unsigned long long)cleanPlayerCoreTPCache;
- (unsigned long long)allPlayerCacheSize;
- (unsigned long long)cleanAllCache;
- (void)setHasShowFinderLikeMusicEducation:(BOOL)arg1;
- (BOOL)hasShowFinderLikeMusicEducation;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)setupObserver;
- (void)removeObserver;
- (void)clearUnderlymanager;
- (void)createUnderlymanager;
- (void)releaseUnderlymanager;
- (void)resetTingAppState;
- (BOOL)shouldShowAudioTaskBar;
- (BOOL)canShowAudioTaskBar;
- (BOOL)isInBlackList;
- (BOOL)isSquareEnabled;
- (BOOL)isTimelineTingEntryEnabled;
- (BOOL)isWebEnabled;
- (BOOL)isListenLaterEnabled;
- (BOOL)isFinderAudioEnabled;
- (BOOL)isUGCSwitchEnabled;
- (BOOL)isSquareTabAudioSearchEnabled;
- (BOOL)isSquareTabAudioDisableReddot;
- (BOOL)isPrefetchCheckSpamAndGetLinkEnabled;
- (BOOL)isSingleAudioAutoPlayEnable;
- (id)audioAutoPauseConfig;
- (BOOL)ttsSentenceReadEnable;
- (BOOL)isEnableMvStartPlayOptimize;
- (BOOL)isProfileMusicTabFlutterEnabled;
- (BOOL)isProfileMusicTabFlutterEnabledOnUseHeadCgi;
- (long long)tingExptIdentification;
- (BOOL)calcTingMainSwitch;
- (BOOL)isSwitchOpenedFromDynamicConfig;
- (BOOL)calInBlackListFromDynamicConfig;
- (BOOL)calInWhiteListFromDynamicConfig;
- (BOOL)isMiniProgramSwitchOpenedFromXLab;
- (BOOL)isPlayerSwitchOpenedFromXLab;
- (BOOL)enableEntryKara;
- (void)setupExptSettings;
- (void)readFindEntranceSwitch;
- (BOOL)shouldShowFindEntrance;
- (BOOL)shouldShowFindEntranceNotification;
- (BOOL)enableFinderTingEntranceByUser;
- (BOOL)canUpgradeFindEntrance;
- (BOOL)willOpenAudioTabOnFindEntry;
- (BOOL)isEnableAudioRadioChannel;
- (BOOL)canShowDiscoverManagmentEntrance;
- (BOOL)shutdownListenNewSync;
- (void)setEnableCloseAppBottomBar:(BOOL)arg1;
- (BOOL)enableCloseAppBottomBar;
- (BOOL)isFilePlayEnabled;
- (void)setIsFilePlayEnabled:(BOOL)arg1;
- (BOOL)isFlutterWarmUpEnabled;
- (void)setIsFlutterWarmUpEnabled:(BOOL)arg1;
- (id)playerManager;
- (void)setPlayerManager:(id)arg1;
- (id)reportManager;
- (void)setReportManager:(id)arg1;
- (id)lyricsManager;
- (void)setLyricsManager:(id)arg1;
- (id)minimizedTaskManager;
- (void)setMinimizedTaskManager:(id)arg1;
- (id)playingInfoMgr;
- (void)setPlayingInfoMgr:(id)arg1;
- (id)shareManager;
- (void)setShareManager:(id)arg1;
- (id)appTaskManager;
- (void)setAppTaskManager:(id)arg1;
- (id)crossplatformManager;
- (id)cdnImageUploadManager;
- (void)setCdnImageUploadManager:(id)arg1;
- (id)audioTabDataManager;
- (void)setAudioTabDataManager:(id)arg1;
- (id)playerUIManager;
- (void)setPlayerUIManager:(id)arg1;
- (id)imageDownloader;
- (void)setImageDownloader:(id)arg1;
- (id)membershipManager;
- (void)setMembershipManager:(id)arg1;
- (id)nowPlayingInfoCenter;
- (void)setNowPlayingInfoCenter:(id)arg1;
- (id)entryKara;
- (void)setEntryKara:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
- (BOOL)isInBlackListFromDynamicConfig;
- (void)setIsInBlackListFromDynamicConfig:(BOOL)arg1;
- (BOOL)isInWhiteListFromDynamicConfig;
- (void)setIsInWhiteListFromDynamicConfig:(BOOL)arg1;
- (BOOL)enableFindEntrance;
- (void)setEnableFindEntrance:(BOOL)arg1;
- (id)crossPlatformManager;
- (void)setCrossPlatformManager:(id)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end

