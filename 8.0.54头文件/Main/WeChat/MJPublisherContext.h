@interface MJPublisherContext : NSObject
{
    BOOL _selectedTemplateIsFavorite; // +0x8
    BOOL _isFrontFacingCamera; // +0x9
    BOOL _isDuetShoot; // +0xa
    BOOL _isAssetGenerate; // +0xb
    BOOL _isFromMovieTemplate; // +0xc
    BOOL _didEnteredTemplateOrMovieInOnceComposingSession; // +0xd
    BOOL _didEnteredShootPreviewInOnceComposingSession; // +0xe
    BOOL _isUsingTemplateComposing; // +0xf
    NSString * _finderUserName; // +0x10
    MMBGMSelectedMusicResult * _appliedMusicInfo; // +0x18
    unsigned long long _enterScene; // +0x20
    NSString * _entryType; // +0x28
    NSString * _sessionId; // +0x30
    NSString * _sourceFeedId; // +0x38
    NSString * _sourceSongId; // +0x40
    NSString * _followFeedTemplateId; // +0x48
    NSString * _selectedTemplateId; // +0x50
    NSString * _selectedTemplateTabId; // +0x58
    unsigned long long _selectedTemplatePosition; // +0x60
    NSData * _selectedTemplateSessionBuffer; // +0x68
    unsigned long long _selectedTemplateType; // +0x70
    NSString * _defaultSelectedTemplateId; // +0x78
    unsigned long long _exportScene; // +0x80
    unsigned long long _videoSource; // +0x88
    unsigned long long _creationPageId; // +0x90
    MJMovieComposingDraftManager * _draftManager; // +0x98
    FinderVideoTemplateInfo * _shootFollowTemplateInfo; // +0xa0
    RecommendedMusicInfo * _patMusicInfo; // +0xa8
    NSArray * _wxToMaasMusicIds; // +0xb0
    NSDate * _startPreviewingTimestamp; // +0xb8
    NSDate * _startRecordingTimestamp; // +0xc0
}
+ (BOOL)shouldEnablePurePicturePostWithAssetInfos:(id)arg1;
- (id)generateReportingParams;
- (void)resetReportingInfo;
- (id)getComposingEffectivePatMusicInfoWithMusicInfo:(id)arg1 wxToMaasMusicIds:(id)arg2 musicResult:(id)arg3;
- (BOOL)isRedPacketEntry;
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
- (BOOL)didEnteredTemplateOrMovieInOnceComposingSession;
- (void)setDidEnteredTemplateOrMovieInOnceComposingSession:(BOOL)arg1;
- (BOOL)didEnteredShootPreviewInOnceComposingSession;
- (void)setDidEnteredShootPreviewInOnceComposingSession:(BOOL)arg1;
- (BOOL)isUsingTemplateComposing;
- (void)setIsUsingTemplateComposing:(BOOL)arg1;
- (void)setDraftManager:(id)arg1;
- (id)shootFollowTemplateInfo;
- (void)setShootFollowTemplateInfo:(id)arg1;
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

