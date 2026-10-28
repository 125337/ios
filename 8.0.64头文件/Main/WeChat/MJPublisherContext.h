@interface MJPublisherContext : NSObject
{
    BOOL _selectedTemplateIsFavorite; // +0x8
    BOOL _selectedTemplateIsAIGC; // +0x9
    BOOL _isFrontFacingCamera; // +0xa
    BOOL _isDuetShoot; // +0xb
    BOOL _isAssetGenerate; // +0xc
    BOOL _isFromMovieTemplate; // +0xd
    BOOL _isShootComposingFirstInit; // +0xe
    BOOL _isOnSavingVideo; // +0xf
    BOOL _didEnteredTemplateOrMovieInOnceComposingSession; // +0x10
    BOOL _didEnteredShootPreviewInOnceComposingSession; // +0x11
    BOOL _isUsingTemplateComposing; // +0x12
    NSString * _finderUserName; // +0x18
    MMBGMSelectedMusicResult * _appliedMusicInfo; // +0x20
    unsigned long long _enterScene; // +0x28
    NSString * _entryType; // +0x30
    NSString * _postId; // +0x38
    NSString * _sessionId; // +0x40
    NSString * _sourceFeedId; // +0x48
    NSString * _sourceSongId; // +0x50
    NSString * _followFeedTemplateId; // +0x58
    NSString * _selectedTemplateId; // +0x60
    NSString * _selectedTemplateTabId; // +0x68
    unsigned long long _selectedTemplatePosition; // +0x70
    NSData * _selectedTemplateSessionBuffer; // +0x78
    unsigned long long _selectedTemplateType; // +0x80
    NSString * _defaultSelectedTemplateId; // +0x88
    NSString * _selectedTemplateAIGCTaskID; // +0x90
    unsigned long long _exportScene; // +0x98
    unsigned long long _videoSource; // +0xa0
    unsigned long long _creationPageId; // +0xa8
    OMJRecordingFinishInfo * _recordingFinishInfo; // +0xb0
    MJMovieComposingDraftManager * _draftManager; // +0xb8
    FinderVideoTemplateInfo * _shootFollowTemplateInfo; // +0xc0
    MJShootRedPacketTransParams * _redPacketTransParams; // +0xc8
    MJShootAIGCAsyncGenResultPostContext * _aigcAsyncResultPostContext; // +0xd0
    RecommendedMusicInfo * _patMusicInfo; // +0xd8
    NSArray * _wxToMaasMusicIds; // +0xe0
    NSDate * _startPreviewingTimestamp; // +0xe8
    NSDate * _startRecordingTimestamp; // +0xf0
}
+ (BOOL)shouldEnablePurePicturePostWithAssetInfos:(id)arg1;
+ (BOOL)isAllImagesWithAssetInfos:(id)arg1;
- (id)generateReportingParams;
- (void)resetReportingInfo;
- (id)getComposingEffectivePatMusicInfoWithMusicInfo:(id)arg1 wxToMaasMusicIds:(id)arg2 musicResult:(id)arg3;
- (id)generateAIGCMetadata;
- (BOOL)isFromFinderRedPackageEntry;
- (id)draftManager;
- (void)checkIsMJProducedVideoWithComposingVC:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)generatePostSessionModelIfIsMJProducedVideoWithMMAsset:(id)arg1 completion:(id /* block */)arg2;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)appliedMusicInfo;
- (void)setAppliedMusicInfo:(id)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)entryType;
- (void)setEntryType:(id)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
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
