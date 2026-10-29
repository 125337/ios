@interface WCFacadeDynamicConfig : MMUserService <MMConfigMgrExt, MMServiceProtocol>
{
    BOOL _MicroMerchant_isUnfoldEnabled; // +0x8
    BOOL _MiaoJian_templateEnabled; // +0x9
    BOOL _MiaoJian_canMakeSameTemplate; // +0xa
    BOOL _MiaoJian_canDownloadResourcesFromCDN; // +0xb
    BOOL _MiaoJian_canRecommendBgmForDefaultTemplate; // +0xc
    BOOL _MiaoJian_canRecommendBgmForRecommendTemplate; // +0xd
    BOOL _MiaoJian_canJumpToMJAppWithAssets; // +0xe
    BOOL _MiaoJian_isExportHEVCEnabled; // +0xf
    BOOL _MiaoJian_isOptimizedClipLogicEnabled; // +0x10
    BOOL _MiaoJian_isAssetClipperEnabled; // +0x11
    BOOL _MiaoJian_isFolderTemplateEnabled; // +0x12
    BOOL _MiaoJian_stopPreviewWhenTemplateFlowScrolling; // +0x13
    BOOL _MiaoJian_isTemplateFlowHangingStyleEnabled; // +0x14
    BOOL _MiaoJian_isMusicSearcherEnabled; // +0x15
    BOOL _MiaoJian_isMusicSearchingAfterInputEnabled; // +0x16
    BOOL _MiaoJian_isResourcePreloadEnabled; // +0x17
    BOOL _MiaoJian_cleanCacheEnabled; // +0x18
    BOOL _commentEmotionAutoDownload; // +0x19
    BOOL _isEditorEmoticonSearchEnabled; // +0x1a
    BOOL _isEditorLaunchMJAppEnabled; // +0x1b
    BOOL _Timeline_canAutoPlayVideos; // +0x1c
    BOOL _Post_canPostTimelineInBackground; // +0x1d
    BOOL _Post_isEditVideoInPickerEnabled; // +0x1e
    BOOL _Forward_isRouteToTimelineDisabled; // +0x1f
    BOOL _timelineTableCleanSwitch; // +0x20
    BOOL _microMerchantFoldSwitch; // +0x21
    BOOL _clearUnreadFeedIDInFoldCollection; // +0x22
    BOOL _VideoSource_previewsLDForWSFeeds; // +0x23
    BOOL _VideoSource_extendedRule1Enabled; // +0x24
    BOOL _CancelActionSheet_showCameraButtonAtBottom; // +0x25
    BOOL _CancelActionSheet_showCameraButtonInPicker; // +0x26
    BOOL _Post_isIPadSightCameraEnabled; // +0x27
    BOOL _Post_isIPadSightCameraLandscapeEnabled; // +0x28
    unsigned int _shortLinkStyleLinkTextVisiableLength; // +0x2c
    unsigned int _timelineTableCleanMaxThreshold; // +0x30
    unsigned int _timelineTableCleanPerLoop; // +0x34
    unsigned int _timelineTableCleanInterval; // +0x38
    unsigned int _timelineTableCleanCommitThreshold; // +0x3c
    unsigned int _foldSectionSize; // +0x40
    unsigned int _cleanSementCheckCount; // +0x44
    unsigned int _cleanSementCheckSectionMinSize; // +0x48
    float _VideoSource_predictionConfidenceForExtendedRule1; // +0x4c
    unsigned int _dbSlowDefine; // +0x50
    long long _MiaoJian_sourceToFetchTemplates; // +0x58
    double _MiaoJian_videoAssetMaxSumDuration; // +0x60
    NSString * _MiaoJian_defaultTemplateID; // +0x68
    long long _MiaoJian_defaultTemplateVersion; // +0x70
    long long _MiaoJian_creationMaxDuration; // +0x78
    long long _MiaoJian_creationRetainDuration; // +0x80
    long long _MiaoJian_preprocMaxDurationSec; // +0x88
    long long _MiaoJian_templateFlowItemCountPerRow; // +0x90
    double _MiaoJian_templateFlowCellVisibleRateForAutoPlay; // +0x98
    long long _MiaoJian_cleanCacheLimitSize; // +0xa0
    long long _MiaoJian_cleanCacheThresholdSize; // +0xa8
    SnsServerConfig * _serverConfig; // +0xb0
    long long _uploadTaskRetryCount; // +0xb8
    unsigned long long _Timeline_feedContentLineLimit; // +0xc0
    unsigned long long _Timeline_commentLineLimit; // +0xc8
    unsigned long long _Homepage_maxContinueRequestCount; // +0xd0
    unsigned long long _Homepage_maxContinueRequestCountWhenNoResponseFeed; // +0xd8
    long long _Post_backupAssetMaxSizeMB; // +0xe0
    long long _VideoSource_previewSourceMode; // +0xe8
    long long _VideoSource_previewSourceModeForWSFeeds; // +0xf0
    double _VideoSource_maximumVideoDurationForExtendedRule1; // +0xf8
    NSDictionary * _VideoSource_predictionModelRules; // +0x100
    long long _VideoSource_previewMediaSourceForKaraFallback; // +0x108
    unsigned long long _serverConfigHash; // +0x110
}
- (void)Spring_logConfigurations;
- (long long)Spring_postStatus;
- (BOOL)Spring_canPostSpringStyle;
- (BOOL)Spring_canShowLiveAlert;
- (id)Spring_liveShareItemForPostingSpringStyle;
- (void)Spring_cacheLiveShareItem:(id)arg1;
- (id)Spring_getCachedLiveShareItem;
- (void)Spring_resetCachedLiveShareItem;
- (BOOL)Spring_showsPostBadge;
- (void)Spring_didDisplayPostEntrance;
- (void)Spring_resetDisplayRecordForPostEntrance;
- (BOOL)Spring_canDisplaySpringStyle;
- (BOOL)Spring_canDisplaySpringSource;
- (BOOL)Spring_canDisplaySpringStyleInADFeeds;
- (BOOL)Spring_canDisplaySpringSourceInADFeeds;
- (long long)Spring_enterFinderLiveMode;
- (long long)Spring_enterFinderLiveModeInADFeeds;
- (id)Spring_generateSpecifiedLiveShareItem;
- (BOOL)Spring_printsFinderInfo;
- (BOOL)Activity_templateActivityEnabled;
- (id)Activity_validTemplateActivityAtCurrentTime;
- (id)Activity_validActivityWithTimeStamp:(long long)arg1;
- (id)Activity_dynamicActivityDictionaries;
- (id)Activity_dynamicConfigInfo;
- (long long)Activity_minDisplayTimeInterval;
- (void)Activity_clearExpiredTipsShowTimeStamps;
- (void)Activity_didShowActivityTips;
- (id)Activity_tipsShowTimeStamps;
- (id)init;
- (id)description;
- (void)initDynamicValue;
- (void)resetData;
- (void)loadServerConfig;
- (void)saveServerConfig:(id)arg1;
- (void)updateDynamicValue;
- (void)updateServerConfig:(id)arg1;
- (void)onMMDynamicConfigUpdated;
- (void)updateTimelineBrowseLineLimit;
- (void)updateTimelineFeedContentLineLimit;
- (void)updateTimelineCommentLineLimit;
- (void)notifyConfigurationsDidUpdate;
- (void)reloadBaseParams;
- (void)reloadTimelineTableCleanParams;
- (void)reloadDBLoggerParams;
- (int)Timeline_pageCachedTime;
- (long long)microMerchantTimeline_focusedCellMatchingMode;
- (BOOL)Timeline_canReportFPS_IDKey1408_MMData20222;
- (BOOL)Timeline_canReportFPS_MMData29222;
- (BOOL)Timeline_canShowFPSLabel;
- (BOOL)Timeline_requestNextPageForMicroMerchantUnfoldUsernamesChange;
- (BOOL)Timeline_scrollViewMonitorEnabled;
- (long long)Timeline_bizMpImageDisplayStyle;
- (void)Homepage_reloadConfigurations;
- (long long)Post_backupAssetMaxSizeMB;
- (BOOL)Post_canPostTimelineInBackground;
- (BOOL)Post_isSightCameraEnabled;
- (BOOL)Post_isSightCameraLandscapeEnabled;
- (BOOL)Post_isEditVideoInPickerEnabled;
- (long long)Post_snsPostRequestDelayDuration;
- (long long)Post_snsPostResponseDelayDuration;
- (BOOL)Post_failSnsPostResponseEnabled;
- (BOOL)Post_shouldShowPostGuide;
- (void)Post_didShowPostGuide;
- (void)Post_resetPostGuideRecordsIfNeeded;
- (BOOL)Post_usesNewPostGuide;
- (BOOL)Post_canInterruptFetchingImageByExifErrors;
- (long long)PhotoLibrary_fetchingAssetDataDelayTimeInterval;
- (float)PhotoLibrary_fetchingAssetDataDelayRandomRatio;
- (BOOL)isEditorEmoticonSearchEnabled;
- (BOOL)isEditorLaunchMJAppEnabled;
- (BOOL)Cover_videoCoverEnabled;
- (BOOL)Cover_displaysMasterWorksBySnsCGI;
- (BOOL)Cover_disablesFallbackForMasterWorks;
- (BOOL)Cover_disablesProfessionalCraft;
- (BOOL)Cover_mocksInsecurityToCovers;
- (BOOL)Forward_isShareEmbedExcerptEnabled;
- (BOOL)Forward_isRouteToTimelineDisabled;
- (long long)VideoEdit_customizedFinalVideoBitrate;
- (BOOL)VideoEdit_adjustsVideoSizeToStandard;
- (BOOL)VideoEdit_shouldShowNewBGMPanel;
- (void)reloadMicroMerchantParams;
- (BOOL)MicroMerchant_isUnfoldEnabled;
- (BOOL)MicroMerchant_isDynamicUnfoldEnabled;
- (unsigned long long)MicroMerchant_unfoldValidDuration;
- (unsigned long long)MicroMerchant_unfoldOpenWSGroupThreshold;
- (unsigned int)MicroMerchant_unfoldOpenWSGroupDuration;
- (long long)Preload_videoPercentageThatPreloadsUsingKitchen;
- (BOOL)Preload_allowsAnyNettypeUsingKitchen;
- (BOOL)CDN_uploadsMediaUsingDebugIP;
- (BOOL)CDN_downloadsMediaUsingDebugIP;
- (id)ImageUpload_dataURLForTesting;
- (id)ImageUpload_thumbURLForTesting;
- (long long)ImageDownload_maxRetryCount;
- (BOOL)LivePhoto_canPostLivePhotos;
- (BOOL)LivePhoto_isLowDeviceForEncodingVideo;
- (BOOL)LivePhoto_canPostLivePhotosOnLowDevice;
- (BOOL)LivePhoto_canPlayLivePhotos;
- (BOOL)LivePhoto_canSaveLivePhotos;
- (double)LivePhoto_maximumVideoDuration;
- (BOOL)LivePhoto_canAutoPlayLivePhotos;
- (BOOL)LivePhoto_mutesWhileAutoPlayingLivePhotos;
- (BOOL)LivePhoto_alwaysShowsRegularGuide;
- (BOOL)LivePhoto_showMutedMenu;
- (BOOL)Video_canExportHDRVideos;
- (BOOL)Video_canPlayHDRVideos;
- (BOOL)Video_eligibleForHDRPlayback;
- (BOOL)Timeline_canAutoPlayVideos;
- (long long)Timeline_videoAutoPlayType;
- (long long)MiaoJian_maxSelectImageCount;
- (long long)Timeline_videoProgressBarType;
- (void)VideoSource_reloadConfigurations;
- (void)VideoSource_updateServerConfig:(id)arg1;
- (BOOL)VideoSource_switchSourceEnabled;
- (void)setVideoSource_switchSourceEnabled:(BOOL)arg1;
- (long long)VideoSource_previewSourceMode;
- (long long)VideoSource_adjustPreviewSourceMode:(long long)arg1;
- (long long)VideoSource_previewSourceModeForWSFeeds;
- (BOOL)VideoSource_previewsLDForWSFeeds;
- (long long)VideoSource_previewSourceModeForDataItem:(id)arg1;
- (BOOL)VideoSource_canSwitchSourceForDataItem:(id)arg1;
- (id)VideoSource_getCurrentPredictionModelID;
- (long long)VideoSource_previewMediaSourceForKaraFallback;
- (BOOL)VideoSource_downloadVideoByRequestingV0Forcibly;
- (int)SightThumb_uploadWxAMPreferQP;
- (BOOL)SightThumb_uploadWxAMEnabled;
- (BOOL)SightThumb_downloadWxAMEnabled;
- (id)SightThumb_downloadPicformat;
- (int)ImageFeed_uploadWxAMPreferQP;
- (BOOL)Player_usesInternalDownloader;
- (long long)Player_switchSourceMode;
- (BOOL)Player_galleryMutedFollowedSystemSettings;
- (BOOL)Player_ZoomEnabled;
- (double)Player_videoProgressThreshold;
- (BOOL)Share_canShareToFacebook;
- (BOOL)Share_canShareToTwitter;
- (BOOL)Settings_canMakeLast10MomentsPublic;
- (BOOL)Picker_isSliderEnabled;
- (BOOL)TimelineMissReading_isKitchenEnabled;
- (BOOL)TimelineMissReading_isEnabled;
- (unsigned long long)TimelineMissReading_minimumFeedCountThatRecords;
- (unsigned long long)TimelineMissReading_minimumFeedTimeIntervalThatRecords;
- (unsigned long long)TimelineMissReading_minimumFeedCountToJumpOver;
- (unsigned long long)TimelineMissReading_jumpButtonFeedOffset;
- (unsigned long long)TimelineMissReading_jumpButtonDisplayingTimeIntervalLimit;
- (unsigned long long)TimelineMissReading_minimumReadFeedCountAfterNewFeeds;
- (unsigned long long)TimelineMissReading_weishangFeedsMaximumPercentage;
- (BOOL)TimelineMissReading_recordsDisplayingForWeishangGroup;
- (BOOL)TimelineMissReading_checksInvisibility;
- (long long)TimelineMissReading_advancedTimeIntervalToCheckInvisibility;
- (long long)TimelineMissReading_minimumTimeIntervalToCheckInvisibility;
- (long long)TimelineMissReading_maximumFeedCountToCheckInvisibility;
- (BOOL)TimelineMissReading_ignoresDisplayRecords;
- (BOOL)TimelineMissReading_canShowJumpButtonWithoutNewFeeds;
- (BOOL)NewMessageMuteTips_enabled;
- (unsigned long long)NewMessageMuteTips_maxMessageCount;
- (unsigned long long)NewMessageMuteTips_maxShowTimes;
- (void)resetNewMessageMuteTipsData;
- (BOOL)NewMessageMuteTips_didUseAfterShowTips;
- (void)setNewMessageMuteTips_didUseAfterShowTips:(BOOL)arg1;
- (unsigned int)NewMessageMuteTips_tipsShowTimes;
- (void)setNewMessageMuteTips_tipsShowTimes:(unsigned int)arg1;
- (BOOL)TextState_canShowIconInMomentsWithContact:(id)arg1;
- (BOOL)TextState_canShowIconInTimelineCellWithContact:(id)arg1;
- (BOOL)_TextState_canShowIconInMoments;
- (BOOL)_TextState_canShowIconWithContact:(id)arg1;
- (BOOL)CancelActionSheet_showCameraButtonInPicker;
- (BOOL)CancelActionSheet_showCameraButtonAtBottom;
- (void)reloadMiaoJianParams;
- (BOOL)MiaoJian_templateEnabled;
- (BOOL)MiaoJian_canMakeSameTemplate;
- (long long)MiaoJian_sourceToFetchTemplates;
- (BOOL)MiaoJian_canFetchTemplatesFromMaas;
- (BOOL)MiaoJian_canFetchTemplatesFromWeChat;
- (BOOL)MiaoJian_canDownloadResourcesFromCDN;
- (BOOL)MiaoJian_canRecommendBgmForDefaultTemplate;
- (BOOL)MiaoJian_canRecommendBgmForRecommendTemplate;
- (double)MiaoJian_videoAssetMaxSumDuration;
- (id)MiaoJian_creationEncodeParams;
- (long long)MiaoJian_creationMaxDuration;
- (long long)MiaoJian_creationRetainDuration;
- (long long)MiaoJian_preprocMaxDurationSec;
- (BOOL)MiaoJian_canJumpToMJAppWithAssets;
- (BOOL)MiaoJian_isExportHEVCEnabled;
- (BOOL)MiaoJian_isOptimizedClipLogicEnabled;
- (BOOL)MiaoJian_isAssetClipperEnabled;
- (BOOL)MiaoJian_isFolderTemplateEnabled;
- (BOOL)MiaoJian_stopPreviewWhenTemplateFlowScrolling;
- (BOOL)MiaoJian_isTemplateFlowHangingStyleEnabled;
- (long long)MiaoJian_templateFlowItemCountPerRow;
- (double)MiaoJian_templateFlowCellVisibleRateForAutoPlay;
- (BOOL)MiaoJian_isMJAppLauncherTemplateEnabled;
- (BOOL)MiaoJian_isMusicSearcherEnabled;
- (BOOL)MiaoJian_isMusicSearchingAfterInputEnabled;
- (BOOL)MiaoJian_isResourcePreloadEnabled;
- (BOOL)MiaoJian_isPreviewAnimForceWxam;
- (BOOL)MiaoJian_isPreviewAnimForceGif;
- (BOOL)MiaoJian_cleanCacheEnabled;
- (long long)MiaoJian_cleanCacheLimitSize;
- (long long)MiaoJian_cleanCacheThresholdSize;
- (BOOL)MiaoJian_canExportInBackground;
- (BOOL)MiaoJian_cleanClipBundleEnabled;
- (long long)MiaoJian_cleanClipBundleInterval;
- (BOOL)MiaoJian_canRecreateWhileLoading;
- (BOOL)MiaoJian_fetchExtRecommendMusicEnabled;
- (float)MiaoJian_coverImageDetectionInterval;
- (float)MiaoJian_coverImageDetectionMaxDuration;
- (float)MiaoJian_coverImageDetectionDarknessRatioThreshold;
- (float)MiaoJian_coverImageClarityThreshold;
- (id)MiaoJian_AIModelTypes;
- (BOOL)MiaoJianApp_forceCompressionEnabled;
- (BOOL)MiaoJianApp_canCheckExtInfoForAlbumAssets;
- (BOOL)MiaoJianApp_canReplaceExtInfoWithTemplateInfo;
- (long long)Together_contactsSelectorType;
- (BOOL)Together_shouldShowGuide;
- (BOOL)Together_canShowGuide;
- (BOOL)Together_didShowGuide;
- (void)setTogether_didShowGuide:(BOOL)arg1;
- (BOOL)Privacy_isDynamicTagEnabled;
- (BOOL)Privacy_isFilterTagDataEnabled;
- (BOOL)Privacy_postContainGroupIDEnabled;
- (id)Privacy_postContainGroupIDType;
- (long long)Privacy_modificationTimeoutDuration;
- (BOOL)EnhanceInteraction_enabled;
- (BOOL)EnhanceInteraction_enableGalleryBottomButtonHotAreaOptimization;
- (long long)PuzzleImage_layoutStyle;
- (BOOL)ActionArea_wrapEnabled;
- (BOOL)VideoEdit_TAVKitEnabled;
- (BOOL)Star_isModificationEnabled;
- (BOOL)Star_isBrowsingEnabled;
- (BOOL)StarGuide_canShowGuideButtonInDetailPage;
- (long long)StarGuide_maximumDisplayTimesInDetailPage;
- (long long)StarGuide_maximumClickTimesInDetailPage;
- (BOOL)StarGuide_ignoresServerFlagsInDetailPage;
- (BOOL)Star_showedModificationTips;
- (void)setStar_showedModificationTips:(BOOL)arg1;
- (BOOL)FinderShare_canShowShareButton;
- (double)FinderShare_minimumVideoDuration;
- (long long)FinderShare_minimumImageCount;
- (BOOL)FinderShare_alwaysAllowsImagesWithPOI;
- (BOOL)FinderShare_canShowShareButtonInDetailPage;
- (long long)FinderShare_maximumDisplayTimesInDetailPage;
- (long long)FinderShare_maximumClickTimesInDetailPage;
- (BOOL)FinderShare_ignoresServerFlagsInDetailPage;
- (BOOL)NewLifeShare_canShowShareButton;
- (BOOL)NewLifeShare_canShowShareButtonInDetailPage;
- (long long)NewLifeShare_maximumDisplayTimesInDetailPage;
- (long long)NewLifeShare_maximumClickTimesInDetailPage;
- (BOOL)NewLifeShare_ignoresServerFlagsInDetailPage;
- (BOOL)NewLifeShare_canShowShareActionSheetItemInDetailPage;
- (BOOL)FinderRecommendation_enabled;
- (long long)FinderRecommendation_updateConditionN;
- (long long)FinderRecommendation_updateConditionM;
- (long long)FinderRecommendation_updateTimeInterval;
- (long long)FinderRecommendation_displayingTimeInterval;
- (BOOL)FinderRecommendation_allowsDisplayingDynamically;
- (long long)FinderRecommendation_testingEntranceStyle;
- (BOOL)FinderRecommendation_allowsPreloading;
- (id)MiaoJian_defaultTemplateID;
- (long long)MiaoJian_defaultTemplateVersion;
- (id)serverConfig;
- (void)setServerConfig:(id)arg1;
- (BOOL)commentEmotionAutoDownload;
- (void)setCommentEmotionAutoDownload:(BOOL)arg1;
- (unsigned int)shortLinkStyleLinkTextVisiableLength;
- (void)setShortLinkStyleLinkTextVisiableLength:(unsigned int)arg1;
- (long long)uploadTaskRetryCount;
- (void)setUploadTaskRetryCount:(long long)arg1;
- (void)setIsEditorEmoticonSearchEnabled:(BOOL)arg1;
- (void)setIsEditorLaunchMJAppEnabled:(BOOL)arg1;
- (unsigned long long)Timeline_feedContentLineLimit;
- (unsigned long long)Timeline_commentLineLimit;
- (void)setTimeline_canAutoPlayVideos:(BOOL)arg1;
- (unsigned long long)Homepage_maxContinueRequestCount;
- (unsigned long long)Homepage_maxContinueRequestCountWhenNoResponseFeed;
- (void)setPost_backupAssetMaxSizeMB:(long long)arg1;
- (void)setPost_canPostTimelineInBackground:(BOOL)arg1;
- (void)setPost_isEditVideoInPickerEnabled:(BOOL)arg1;
- (void)setForward_isRouteToTimelineDisabled:(BOOL)arg1;
- (BOOL)timelineTableCleanSwitch;
- (void)setTimelineTableCleanSwitch:(BOOL)arg1;
- (unsigned int)timelineTableCleanMaxThreshold;
- (void)setTimelineTableCleanMaxThreshold:(unsigned int)arg1;
- (unsigned int)timelineTableCleanPerLoop;
- (void)setTimelineTableCleanPerLoop:(unsigned int)arg1;
- (unsigned int)timelineTableCleanInterval;
- (void)setTimelineTableCleanInterval:(unsigned int)arg1;
- (unsigned int)timelineTableCleanCommitThreshold;
- (void)setTimelineTableCleanCommitThreshold:(unsigned int)arg1;
- (BOOL)microMerchantFoldSwitch;
- (void)setMicroMerchantFoldSwitch:(BOOL)arg1;
- (unsigned int)foldSectionSize;
- (void)setFoldSectionSize:(unsigned int)arg1;
- (unsigned int)cleanSementCheckCount;
- (void)setCleanSementCheckCount:(unsigned int)arg1;
- (unsigned int)cleanSementCheckSectionMinSize;
- (void)setCleanSementCheckSectionMinSize:(unsigned int)arg1;
- (BOOL)clearUnreadFeedIDInFoldCollection;
- (void)setClearUnreadFeedIDInFoldCollection:(BOOL)arg1;
- (void)setVideoSource_previewSourceMode:(long long)arg1;
- (void)setVideoSource_previewsLDForWSFeeds:(BOOL)arg1;
- (void)setVideoSource_previewSourceModeForWSFeeds:(long long)arg1;
- (BOOL)VideoSource_extendedRule1Enabled;
- (void)setVideoSource_extendedRule1Enabled:(BOOL)arg1;
- (double)VideoSource_maximumVideoDurationForExtendedRule1;
- (void)setVideoSource_maximumVideoDurationForExtendedRule1:(double)arg1;
- (float)VideoSource_predictionConfidenceForExtendedRule1;
- (void)setVideoSource_predictionConfidenceForExtendedRule1:(float)arg1;
- (id)VideoSource_predictionModelRules;
- (void)setVideoSource_predictionModelRules:(id)arg1;
- (void)setVideoSource_previewMediaSourceForKaraFallback:(long long)arg1;
- (void)setCancelActionSheet_showCameraButtonAtBottom:(BOOL)arg1;
- (void)setCancelActionSheet_showCameraButtonInPicker:(BOOL)arg1;
- (unsigned int)dbSlowDefine;
- (void)setDbSlowDefine:(unsigned int)arg1;
- (unsigned long long)serverConfigHash;
- (void)setServerConfigHash:(unsigned long long)arg1;
- (BOOL)Post_isIPadSightCameraEnabled;
- (void)setPost_isIPadSightCameraEnabled:(BOOL)arg1;
- (BOOL)Post_isIPadSightCameraLandscapeEnabled;
- (void)setPost_isIPadSightCameraLandscapeEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

