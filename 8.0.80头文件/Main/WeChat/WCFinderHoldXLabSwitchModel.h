@interface WCFinderHoldXLabSwitchModel : WCFinderBaseXLabSwitchModel
{
    long long _discoveryLiveOnFinderEntranceInterval; // +0x8
    long long _discoverySocialHotSpotFinderEntranceInterval; // +0x10
    long long _discoveryShareFinderEntranceInterval; // +0x18
    NSString * _mentionContactIgnorePattern; // +0x20
    NSSet * _feedSourceShowSceneSet; // +0x28
    NSArray * _jumpInfoHalfBusinessTypeArray; // +0x30
    NSArray * _tingLikeBusinessTypeArray; // +0x38
    NSArray * _preloadRedDotAvatarPaths; // +0x40
    NSArray * _redDotAvatarMultiresolutionURLPrefixes; // +0x48
    NSString * _coverPreviewLiteAppMinVersion; // +0x50
    NSSet * _tingSubBusinessSet; // +0x58
    NSSet * _k1kSubBusinessSet; // +0x60
    NSArray * _musicBusinessTypeArray; // +0x68
    NSString * _modifyPostContentEduAppId; // +0x70
    NSString * _modifyPostContentEduPath; // +0x78
}
- (BOOL)enableFilterFinderTimelineHotTabReddot;
- (BOOL)whetherRememberTheLastEnteredTab;
- (BOOL)enableMegaVideoPreload;
- (BOOL)enableFeedDescriptionCacheSourceValidation;
- (id)liveFeedCompressResolution;
- (id)liveThumbCompressResolution;
- (double)liveFeedImageCompressRate;
- (double)liveThumbImageCompressRate;
- (double)liveFeedMaxSize;
- (double)liveThumbMaxSize;
- (BOOL)enableFilterFollowTabRedDot;
- (BOOL)enableFilterRecommendTabRedDot;
- (BOOL)enableFilterMachineTabRedDot;
- (BOOL)enableFilterCityTabRedDot;
- (BOOL)buildPostFailRedDotEntranceSwitch;
- (BOOL)showMentionSwitchEntry;
- (BOOL)privatePersonalCenterCountStyle;
- (BOOL)originalPhotoEnable;
- (BOOL)enableFinderFindTab;
- (BOOL)enableDiscoveryTabReddotPersonalizedOpt;
- (BOOL)enableFinderSyncDiscoveryReddotInfoAllScene;
- (BOOL)enableMainTabPageInReport38306;
- (long long)discoveryFriendNewsTabReddotInterval;
- (long long)discoveryFriendPublishReddotInterval;
- (long long)finderEntranceSocialHotSpotReddotInterval;
- (long long)finderEntranceLiveOnFinderReddotInterval;
- (long long)postTextTooLongInterval;
- (long long)findFinderPrefetchPollingInterval;
- (long long)followTabRedDotRefreshInterval;
- (long long)recommendTabRedDotRefreshInterval;
- (long long)machineTabRedDotRefreshInterval;
- (long long)cityTabRedDotRefreshInterval;
- (long long)videoMaxLimit;
- (long long)videoMinLimit;
- (BOOL)enableCleanFinderMediaCacheWhenFindPageDisappearSwitch;
- (long long)cleanFinderMediaCacheWhenFindPageDisappearIntervalHour;
- (long long)shareToFinderMediaLimitHeightWidRatio;
- (long long)buildPrivateFinderEntranceInterval;
- (long long)postFailRedDotExposeLimit;
- (long long)postFailBuildRedDotLimitDays;
- (long long)postTipsBubbleCardStyleChangeDuration;
- (long long)postTipsBubbleSucStayDuration;
- (long long)postJumpInfoBubbleStayDuration;
- (long long)businessTopFetchCount;
- (long long)originalVideoLimitVideoSeconds;
- (long long)redDotMutexFilterFlag;
- (long long)redDotFilterOtherTabFlag;
- (long long)shortShowCarouselProgress;
- (long long)longShowCarouselSeconds;
- (long long)showDefaultCarouselDayLimit;
- (long long)showTingLikeCarouselDayLimit;
- (double)viewMinHeightWidRatioInStream;
- (double)viewWidHeightRatio;
- (double)liveThumbWidHeightRatio;
- (double)coverWidHeightRatio;
- (double)coverHorizontalHeightRatio;
- (long long)preloadRedDotAvatarMinInterval;
- (BOOL)usePrivateMsgFromFinderSvr;
- (BOOL)redDotDSLLineZeroUseRenderedLineSwitch;
- (BOOL)newLifeSyncReportFindPageEntranceStatusSwitch;
- (BOOL)clearAllRedDotInfoSwitch;
- (BOOL)clearAllPostInfoSwitch;
- (BOOL)postStateChangeToBubbleSwitch;
- (BOOL)enableHiddenTeenagerTipsOptionSwitch;
- (long long)youngTeensAntiAddictInterval;
- (long long)olderTeensAntiAddictInterval;
- (BOOL)filterLiveCloseFeedInInteractiveTab;
- (BOOL)retrieveLocationForFinderAsFindPageSwitch;
- (long long)teenagerRestPeriodInMinutes;
- (BOOL)showTimelineCityTabSwitch;
- (BOOL)enableCityVCLoadWithoutTab;
- (BOOL)redDotMultiNodeRenderSwitch;
- (long long)redDotMultiRenderTimeLimit;
- (BOOL)halfScreenCheckAsFeedChangeSwitch;
- (BOOL)reportFinderSpaceWarningInfo;
- (BOOL)cleanMediaResourceWhenDBDelete;
- (BOOL)cleanDiskAsShareListExit;
- (BOOL)makeFeedDBLinkToMediaResource;
- (BOOL)triggerSceneChainDiskAsRestart;
- (BOOL)enableResponseCoreServiceDiskClean;
- (BOOL)enableDiskCleanWhenFindPageDisappearSwitch;
- (BOOL)diskMgrWorkConfig;
- (long long)diskMgrSyncToLocalDebounceDuration;
- (BOOL)columnFourDirectionDragToClose;
- (BOOL)enableDiskCleanMediaResource;
- (BOOL)enableSyncCleanSceneChainSwitch;
- (BOOL)enableCoreServiceDiskCleanByFileSizeSwitch;
- (BOOL)enableCleanCacheFeedSwitch;
- (long long)autoCleanFeedMediaGapSceneConfig;
- (long long)autoCleanFeedMediaNSecondsConfig;
- (long long)autoCleanFeedMediaKeepNConfig;
- (long long)cleanFinderDiskInterval;
- (long long)finderPostLivePhotoDurationLimit;
- (BOOL)showMusicListenWholeSongViewSwitch;
- (BOOL)musicListenWholeSongIndependentButtonSwitch;
- (long long)dbDeletedFeedCleanMediaInterval;
- (BOOL)enableDBDeletedFeedCleanMediaSwitch;
- (long long)diskBaseCleanInterval;
- (long long)diskTlWarningCleanInterval;
- (long long)diskExitShareListCleanInterval;
- (BOOL)enableCoreServiceCleanHeaderSwitch;
- (long long)coreServiceCleanHeaderMinAgeDay;
- (long long)coreServiceCleanHeaderMaxCleanCount;
- (BOOL)useMediumSegmentAlgoSwitch;
- (double)aigcSyntheticBufferConfig;
- (BOOL)aigcPlaceholderSwitch;
- (long long)diskFilterFeedLimit;
- (BOOL)diskEnableCleanExpiredChainSwitch;
- (long long)diskExpiredFeedCleanInterval;
- (long long)fansCountUseShortTitleLimit;
- (BOOL)redDotBalancedLineBreakSwitch;
- (BOOL)enableParseDSLExpectedLineSwitch;
- (void)_updateXLabConfig;
- (id)reportTimestampKey;
- (long long)discoveryLiveOnFinderEntranceInterval;
- (void)setDiscoveryLiveOnFinderEntranceInterval:(long long)arg1;
- (long long)discoverySocialHotSpotFinderEntranceInterval;
- (void)setDiscoverySocialHotSpotFinderEntranceInterval:(long long)arg1;
- (long long)discoveryShareFinderEntranceInterval;
- (void)setDiscoveryShareFinderEntranceInterval:(long long)arg1;
- (id)mentionContactIgnorePattern;
- (void)setMentionContactIgnorePattern:(id)arg1;
- (id)feedSourceShowSceneSet;
- (void)setFeedSourceShowSceneSet:(id)arg1;
- (id)jumpInfoHalfBusinessTypeArray;
- (void)setJumpInfoHalfBusinessTypeArray:(id)arg1;
- (id)tingLikeBusinessTypeArray;
- (void)setTingLikeBusinessTypeArray:(id)arg1;
- (id)preloadRedDotAvatarPaths;
- (void)setPreloadRedDotAvatarPaths:(id)arg1;
- (id)redDotAvatarMultiresolutionURLPrefixes;
- (void)setRedDotAvatarMultiresolutionURLPrefixes:(id)arg1;
- (id)coverPreviewLiteAppMinVersion;
- (void)setCoverPreviewLiteAppMinVersion:(id)arg1;
- (id)tingSubBusinessSet;
- (void)setTingSubBusinessSet:(id)arg1;
- (id)k1kSubBusinessSet;
- (void)setK1kSubBusinessSet:(id)arg1;
- (id)musicBusinessTypeArray;
- (void)setMusicBusinessTypeArray:(id)arg1;
- (id)modifyPostContentEduAppId;
- (void)setModifyPostContentEduAppId:(id)arg1;
- (id)modifyPostContentEduPath;
- (void)setModifyPostContentEduPath:(id)arg1;
- (void).cxx_destruct;
@end
