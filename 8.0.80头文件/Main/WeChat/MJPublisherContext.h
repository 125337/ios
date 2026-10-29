@interface MJPublisherContext : NSObject
{
    BOOL _referencePostAutoPlay; // +0x8
    BOOL _hasReferenceVideo; // +0x9
    BOOL _selectedTemplateIsFavorite; // +0xa
    BOOL _selectedTemplateIsAIGC; // +0xb
    BOOL _isFrontFacingCamera; // +0xc
    BOOL _isDuetShoot; // +0xd
    BOOL _isAssetGenerate; // +0xe
    BOOL _isFromMovieTemplate; // +0xf
    BOOL _isShootComposingFirstInit; // +0x10
    BOOL _isOnSavingVideo; // +0x11
    BOOL _didEnteredTemplateOrMovieInOnceComposingSession; // +0x12
    BOOL _didEnteredShootPreviewInOnceComposingSession; // +0x13
    BOOL _isUsingTemplateComposing; // +0x14
    int _cameraPosition; // +0x18
    int _scene; // +0x1c
    MJCamCommonResourcesQuery * _commonResourcesQuery; // +0x20
    NSString * _finderUserName; // +0x28
    MMBGMSelectedMusicResult * _appliedMusicInfo; // +0x30
    unsigned long long _enterScene; // +0x38
    unsigned long long _sourceEnterScene; // +0x40
    NSString * _entryType; // +0x48
    NSString * _postId; // +0x50
    NSString * _sessionId; // +0x58
    MJOneClickFilmReportContext * _oneClickFilmReportContext; // +0x60
    NSString * _clickTemplateTaskID; // +0x68
    NSString * _fromFeedSessionBuffer; // +0x70
    long long _childEnterScene; // +0x78
    NSString * _sourceFeedId; // +0x80
    NSString * _referenceVideoFeedId; // +0x88
    NSString * _sourceSongId; // +0x90
    NSString * _followFeedTemplateId; // +0x98
    NSString * _selectedTemplateId; // +0xa0
    NSString * _selectedTemplateTabId; // +0xa8
    unsigned long long _selectedTemplatePosition; // +0xb0
    NSData * _selectedTemplateSessionBuffer; // +0xb8
    unsigned long long _selectedTemplateType; // +0xc0
    NSString * _defaultSelectedTemplateId; // +0xc8
    NSString * _selectedTemplateAIGCTaskID; // +0xd0
    unsigned long long _selectedEffectPosition; // +0xd8
    unsigned long long _selectedEffectPanelType; // +0xe0
    NSData * _selectedEffectSessionBuffer; // +0xe8
    unsigned long long _effectApplyPageType; // +0xf0
    unsigned long long _shootContentSourceType; // +0xf8
    WCFinderPostSourceInfo * _postSourceInfo; // +0x100
    unsigned long long _exportScene; // +0x108
    unsigned long long _videoSource; // +0x110
    unsigned long long _creationPageId; // +0x118
    OMJRecordingFinishInfo * _recordingFinishInfo; // +0x120
    MJMovieComposingDraftManager * _draftManager; // +0x128
    FinderVideoTemplateInfo * _shootFollowTemplateInfo; // +0x130
    MJShootRedPacketTransParams * _redPacketTransParams; // +0x138
    MJShootAIGCAsyncGenResultPostContext * _aigcAsyncResultPostContext; // +0x140
    RecommendedMusicInfo * _patMusicInfo; // +0x148
    NSArray * _wxToMaasMusicIds; // +0x150
    NSDate * _startPreviewingTimestamp; // +0x158
    NSDate * _startRecordingTimestamp; // +0x160
}
+ (BOOL)shouldEnablePurePicturePostWithAssetInfos:(id)arg1;
+ (BOOL)isAllImagesWithAssetInfos:(id)arg1;
- (id)beginOneClickFilmAttemptWithAssetInfos:(id)arg1;
- (id)generateReportingParams;
- (unsigned long long)referenceVideoReportState;
- (void)resetReportingInfo;
- (id)getComposingEffectivePatMusicInfoWithMusicInfo:(id)arg1 wxToMaasMusicIds:(id)arg2 musicResult:(id)arg3;
- (id)generateAIGCMetadata;
- (BOOL)isFromFinderRedPackageEntry;
- (id)draftManager;
- (void)checkIsMJProducedVideoWithComposingVC:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)generatePostSessionModelIfIsMJProducedVideoWithMMAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)commonResourcesQuery;
- (void)setCommonResourcesQuery:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)appliedMusicInfo;
- (void)setAppliedMusicInfo:(id)arg1;
- (int)cameraPosition;
- (void)setCameraPosition:(int)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (unsigned long long)sourceEnterScene;
- (void)setSourceEnterScene:(unsigned long long)arg1;
- (id)entryType;
- (void)setEntryType:(id)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)oneClickFilmReportContext;
- (void)setOneClickFilmReportContext:(id)arg1;
- (id)clickTemplateTaskID;
- (void)setClickTemplateTaskID:(id)arg1;
- (id)fromFeedSessionBuffer;
- (void)setFromFeedSessionBuffer:(id)arg1;
- (long long)childEnterScene;
- (void)setChildEnterScene:(long long)arg1;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
- (BOOL)referencePostAutoPlay;
- (void)setReferencePostAutoPlay:(BOOL)arg1;
- (BOOL)hasReferenceVideo;
- (void)setHasReferenceVideo:(BOOL)arg1;
- (id)referenceVideoFeedId;
- (void)setReferenceVideoFeedId:(id)arg1;
- (id)sourceSongId;
- (void)setSourceSongId:(id)arg1;
- (id)followFeedTemplateId;
- (void)setFollowFeedTemplateId:(id)arg1;
- (id)selectedTemplateId;
- (void)setSelectedTemplateId:(id)arg1;
- (id)selectedTemplateTabId;
- (void)setSelectedTemplateTabId:(id)arg1;
- (unsigned long long)selectedTemplatePosition;
- (void)setSelectedTemplatePosition:(unsigned long long)arg1;
- (id)selectedTemplateSessionBuffer;
- (void)setSelectedTemplateSessionBuffer:(id)arg1;
- (unsigned long long)selectedTemplateType;
- (void)setSelectedTemplateType:(unsigned long long)arg1;
- (id)defaultSelectedTemplateId;
- (void)setDefaultSelectedTemplateId:(id)arg1;
- (BOOL)selectedTemplateIsFavorite;
- (void)setSelectedTemplateIsFavorite:(BOOL)arg1;
- (BOOL)selectedTemplateIsAIGC;
- (void)setSelectedTemplateIsAIGC:(BOOL)arg1;
- (id)selectedTemplateAIGCTaskID;
- (void)setSelectedTemplateAIGCTaskID:(id)arg1;
- (unsigned long long)selectedEffectPosition;
- (void)setSelectedEffectPosition:(unsigned long long)arg1;
- (unsigned long long)selectedEffectPanelType;
- (void)setSelectedEffectPanelType:(unsigned long long)arg1;
- (id)selectedEffectSessionBuffer;
- (void)setSelectedEffectSessionBuffer:(id)arg1;
- (unsigned long long)effectApplyPageType;
- (void)setEffectApplyPageType:(unsigned long long)arg1;
- (unsigned long long)shootContentSourceType;
- (void)setShootContentSourceType:(unsigned long long)arg1;
- (id)postSourceInfo;
- (void)setPostSourceInfo:(id)arg1;
- (BOOL)isFrontFacingCamera;
- (void)setIsFrontFacingCamera:(BOOL)arg1;
- (BOOL)isDuetShoot;
- (void)setIsDuetShoot:(BOOL)arg1;
- (BOOL)isAssetGenerate;
- (void)setIsAssetGenerate:(BOOL)arg1;
- (unsigned long long)exportScene;
- (void)setExportScene:(unsigned long long)arg1;
- (unsigned long long)videoSource;
- (void)setVideoSource:(unsigned long long)arg1;
- (unsigned long long)creationPageId;
- (void)setCreationPageId:(unsigned long long)arg1;
- (BOOL)isFromMovieTemplate;
- (void)setIsFromMovieTemplate:(BOOL)arg1;
- (BOOL)isShootComposingFirstInit;
- (void)setIsShootComposingFirstInit:(BOOL)arg1;
- (BOOL)isOnSavingVideo;
- (void)setIsOnSavingVideo:(BOOL)arg1;
- (id)recordingFinishInfo;
- (void)setRecordingFinishInfo:(id)arg1;
- (BOOL)didEnteredTemplateOrMovieInOnceComposingSession;
- (void)setDidEnteredTemplateOrMovieInOnceComposingSession:(BOOL)arg1;
- (BOOL)didEnteredShootPreviewInOnceComposingSession;
- (void)setDidEnteredShootPreviewInOnceComposingSession:(BOOL)arg1;
- (BOOL)isUsingTemplateComposing;
- (void)setIsUsingTemplateComposing:(BOOL)arg1;
- (void)setDraftManager:(id)arg1;
- (id)shootFollowTemplateInfo;
- (void)setShootFollowTemplateInfo:(id)arg1;
- (id)redPacketTransParams;
- (void)setRedPacketTransParams:(id)arg1;
- (id)aigcAsyncResultPostContext;
- (void)setAigcAsyncResultPostContext:(id)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (id)wxToMaasMusicIds;
- (void)setWxToMaasMusicIds:(id)arg1;
- (id)startPreviewingTimestamp;
- (void)setStartPreviewingTimestamp:(id)arg1;
- (id)startRecordingTimestamp;
- (void)setStartRecordingTimestamp:(id)arg1;
- (void).cxx_destruct;
@end
