@interface WCVideoProducerOptions : NSObject
{
    BOOL _isCDNDownloadDisabled; // +0x8
    BOOL _isAIAnalysisEnabled; // +0x9
    BOOL _isDefaultTemplateEnabled; // +0xa
    BOOL _isStubTemplateEnabled; // +0xb
    BOOL _isMJAppLauncherTemplateEnabled; // +0xc
    BOOL _isAssetClipperMJAppLauncherEnabled; // +0xd
    BOOL _isTemplateFlowMJAppLauncherEnabled; // +0xe
    BOOL _isFolderTemplateEnabled; // +0xf
    BOOL _isWXRecommendEnabled; // +0x10
    BOOL _isMJRecommendEnabled; // +0x11
    BOOL _isMusicSearcherEnabled; // +0x12
    BOOL _isMusicSearchingAfterInputEnabled; // +0x13
    BOOL _isOSTEnabled; // +0x14
    BOOL _isBGMEnabled; // +0x15
    BOOL _isLyricsEnabled; // +0x16
    BOOL _isOptimizedClipLogicEnabled; // +0x17
    BOOL _isMusicRecommendForDefaultTemplateEnabled; // +0x18
    BOOL _isMusicRecommendForRecommendTemplateEnabled; // +0x19
    BOOL _allowsExternalPlayback; // +0x1a
    BOOL _canExportInBackground; // +0x1b
    BOOL _isAssetClipperEnabled; // +0x1c
    unsigned int _activityEventType; // +0x20
    unsigned long long _mjTemplateScene; // +0x28
    unsigned long long _creationRetainDuration; // +0x30
    unsigned long long _creationMaxDurationSec; // +0x38
    unsigned long long _preprocMaxDurationSec; // +0x40
    NSString * _exportFilePath; // +0x48
    long long _maxRecommendCount; // +0x50
    long long _maxStubCount; // +0x58
    NSString * _createSameTemplateId; // +0x60
    NSString * _createSameMusicId; // +0x68
    NSString * _createSameFeedMusicId; // +0x70
    NSString * _createSameAIModelType; // +0x78
}
- (id)description;
- (unsigned long long)mjTemplateScene;
- (void)setMjTemplateScene:(unsigned long long)arg1;
- (BOOL)isCDNDownloadDisabled;
- (void)setIsCDNDownloadDisabled:(BOOL)arg1;
- (BOOL)isAIAnalysisEnabled;
- (void)setIsAIAnalysisEnabled:(BOOL)arg1;
- (unsigned long long)creationRetainDuration;
- (void)setCreationRetainDuration:(unsigned long long)arg1;
- (unsigned long long)creationMaxDurationSec;
- (void)setCreationMaxDurationSec:(unsigned long long)arg1;
- (unsigned long long)preprocMaxDurationSec;
- (void)setPreprocMaxDurationSec:(unsigned long long)arg1;
- (id)exportFilePath;
- (void)setExportFilePath:(id)arg1;
- (BOOL)isDefaultTemplateEnabled;
- (void)setIsDefaultTemplateEnabled:(BOOL)arg1;
- (BOOL)isStubTemplateEnabled;
- (void)setIsStubTemplateEnabled:(BOOL)arg1;
- (BOOL)isMJAppLauncherTemplateEnabled;
- (void)setIsMJAppLauncherTemplateEnabled:(BOOL)arg1;
- (BOOL)isAssetClipperMJAppLauncherEnabled;
- (void)setIsAssetClipperMJAppLauncherEnabled:(BOOL)arg1;
- (BOOL)isTemplateFlowMJAppLauncherEnabled;
- (void)setIsTemplateFlowMJAppLauncherEnabled:(BOOL)arg1;
- (BOOL)isFolderTemplateEnabled;
- (void)setIsFolderTemplateEnabled:(BOOL)arg1;
- (BOOL)isWXRecommendEnabled;
- (void)setIsWXRecommendEnabled:(BOOL)arg1;
- (BOOL)isMJRecommendEnabled;
- (void)setIsMJRecommendEnabled:(BOOL)arg1;
- (BOOL)isMusicSearcherEnabled;
- (void)setIsMusicSearcherEnabled:(BOOL)arg1;
- (BOOL)isMusicSearchingAfterInputEnabled;
- (void)setIsMusicSearchingAfterInputEnabled:(BOOL)arg1;
- (long long)maxRecommendCount;
- (void)setMaxRecommendCount:(long long)arg1;
- (long long)maxStubCount;
- (void)setMaxStubCount:(long long)arg1;
- (id)createSameTemplateId;
- (void)setCreateSameTemplateId:(id)arg1;
- (id)createSameMusicId;
- (void)setCreateSameMusicId:(id)arg1;
- (id)createSameFeedMusicId;
- (void)setCreateSameFeedMusicId:(id)arg1;
- (id)createSameAIModelType;
- (void)setCreateSameAIModelType:(id)arg1;
- (BOOL)isOSTEnabled;
- (void)setIsOSTEnabled:(BOOL)arg1;
- (BOOL)isBGMEnabled;
- (void)setIsBGMEnabled:(BOOL)arg1;
- (BOOL)isLyricsEnabled;
- (void)setIsLyricsEnabled:(BOOL)arg1;
- (BOOL)isOptimizedClipLogicEnabled;
- (void)setIsOptimizedClipLogicEnabled:(BOOL)arg1;
- (BOOL)isMusicRecommendForDefaultTemplateEnabled;
- (void)setIsMusicRecommendForDefaultTemplateEnabled:(BOOL)arg1;
- (BOOL)isMusicRecommendForRecommendTemplateEnabled;
- (void)setIsMusicRecommendForRecommendTemplateEnabled:(BOOL)arg1;
- (BOOL)allowsExternalPlayback;
- (void)setAllowsExternalPlayback:(BOOL)arg1;
- (BOOL)canExportInBackground;
- (void)setCanExportInBackground:(BOOL)arg1;
- (BOOL)isAssetClipperEnabled;
- (void)setIsAssetClipperEnabled:(BOOL)arg1;
- (unsigned int)activityEventType;
- (void)setActivityEventType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
