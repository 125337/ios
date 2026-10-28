@interface TingManager : MMUserService <MMCacheCleaner, MMServiceProtocol>
{
    BOOL _isFilePlayEnabled; // +0x8
    BOOL _isFlutterWarmUpEnabled; // +0x9
    BOOL _keepScreenOn; // +0xa
    BOOL _isEnabled; // +0xb
    BOOL _isInBlackListFromDynamicConfig; // +0xc
    BOOL _isInWhiteListFromDynamicConfig; // +0xd
    TingPlayerManager * _oldPlayerManager; // +0x10
    TingAllPlayerManager * _allPlayerManager; // +0x18
    TingPlayAppTaskControllerCpp * _playAppManager; // +0x20
    id <ITingReportManager> _reportManager; // +0x28
    TingLyricsManager * _lyricsManager; // +0x30
    TingMinimizeMgr * _minimizedTaskManager; // +0x38
    TingPlayCenterMgr * _playingInfoMgr; // +0x40
    TingShareManager * _shareManager; // +0x48
    TingAppTaskManager * _appTaskManager; // +0x50
    TingCrossplatformManager * _crossplatformManager; // +0x58
    TingCdnImageUploadManager * _cdnImageUploadManager; // +0x60
    TingAudioTabDataManager * _audioTabDataManager; // +0x68
    TingPlayerUIManager * _playerUIManager; // +0x70
    TingImageDownloader * _imageDownloader; // +0x78
    TingMembershipManager * _membershipManager; // +0x80
    TingNowPlayingInfoCenter * _nowPlayingInfoCenter; // +0x88
    _TtC6WeChat13TingEntryKara * _entryKara; // +0x90
    unsigned long long _mode; // +0x98
    TingCrossplatformManager * _crossPlatformManager; // +0xa0
    MemoryMappedKV * _mmkv; // +0xa8
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
- (id)getCachePaths;
- (int)getDefaultCleanPolicy;
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
- (BOOL)isProfileMusicTabFlutterEnabled;
- (BOOL)isProfileMusicTabFlutterEnabledOnUseHeadCgi;
- (BOOL)calcTingMainSwitch;
- (BOOL)isSwitchOpenedFromDynamicConfig;
- (BOOL)calInBlackListFromDynamicConfig;
- (BOOL)calInWhiteListFromDynamicConfig;
- (BOOL)isMiniProgramSwitchOpenedFromXLab;
- (BOOL)isPlayerSwitchOpenedFromXLab;
- (BOOL)enableEntryKara;
- (void)setupExptSettings;
- (BOOL)shouldShowFindEntrance;
- (BOOL)shouldShowFindEntranceNotification;
- (BOOL)enableFinderTingEntranceByUser;
- (BOOL)canUpgradeFindEntrance;
- (BOOL)willOpenAudioTabOnFindEntry;
- (BOOL)isEnableAudioRadioChannel;
- (BOOL)isInChatRoomAuthor;
- (BOOL)isTingScreenOn;
- (BOOL)canShowDiscoverManagmentEntrance;
- (BOOL)shutdownListenNewSync;
- (void)setEnableCloseAppBottomBar:(BOOL)arg1;
- (BOOL)enableCloseAppBottomBar;
- (id)activePlayer;
- (BOOL)isFilePlayEnabled;
- (void)setIsFilePlayEnabled:(BOOL)arg1;
- (BOOL)isFlutterWarmUpEnabled;
- (void)setIsFlutterWarmUpEnabled:(BOOL)arg1;
- (BOOL)keepScreenOn;
- (void)setKeepScreenOn:(BOOL)arg1;
- (id)oldPlayerManager;
- (void)setOldPlayerManager:(id)arg1;
- (id)allPlayerManager;
- (void)setAllPlayerManager:(id)arg1;
- (id)playAppManager;
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
- (id)crossPlatformManager;
- (void)setCrossPlatformManager:(id)arg1;
- (id)mmkv;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end
