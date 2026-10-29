@interface MJShootComposingDraft : NSObject <PBCoding, WCTColumnCoding>
{
    BOOL _isAIGCTaskCompleted; // +0x8
    unsigned int _previewPostAllowance; // +0xc
    NSString * _identifier; // +0x10
    unsigned long long _maasSDKVersion; // +0x18
    unsigned long long _aigcInputKind; // +0x20
    NSString * _aigcTaskID; // +0x28
    NSString * _templateID; // +0x30
    NSString * _postByPassInfo; // +0x38
    NSString * _coverImageFilePath; // +0x40
    NSString * _clipbundleDirID; // +0x48
    NSString * _clipbundleFilePath; // +0x50
    NSString * _aigcServiceID; // +0x58
    NSArray * _originMediaFileURLs; // +0x60
    long long _entryScene; // +0x68
    unsigned long long _draftType; // +0x70
    long long _cameraPosition; // +0x78
    NSString * _phAssetID; // +0x80
    double _creationTimeInterval; // +0x88
    WCFinderPostSourceInfo * _postSourceInfo; // +0x90
    unsigned long long _templateType; // +0x98
    NSString * _sourceFeedId; // +0xa0
    NSString * _originalPublisherSessionID; // +0xa8
    NSString * _followFeedTemplateId; // +0xb0
    unsigned long long _templateDescVersion; // +0xb8
    MJTemplateVersionInfo * _templateVersionInfo; // +0xc0
    NSString * _templateDescFileMD5; // +0xc8
    NSString * _rootTemplateID; // +0xd0
    unsigned long long _selectedEffectPosition; // +0xd8
    unsigned long long _selectedEffectPanelType; // +0xe0
    NSData * _selectedEffectSessionBuffer; // +0xe8
    unsigned long long _effectApplyPageType; // +0xf0
    unsigned long long _shootContentSourceType; // +0xf8
}
+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_maasSDKVersion;
+ (void)PBArrayAdd_aigcTaskID;
+ (void)PBArrayAdd_templateID;
+ (void)PBArrayAdd_coverImageFilePath;
+ (void)PBArrayAdd_clipbundleDirID;
+ (void)PBArrayAdd_entryScene;
+ (void)PBArrayAdd_draftType;
+ (void)PBArrayAdd_cameraPosition;
+ (void)PBArrayAdd_phAssetID;
+ (void)PBArrayAdd_isAIGCTaskCompleted;
+ (void)PBArrayAdd_creationTimeInterval;
+ (void)PBArrayAdd_postSourceInfo;
+ (void)PBArrayAdd_templateType;
+ (void)PBArrayAdd_sourceFeedId;
+ (void)PBArrayAdd_templateDescVersion;
+ (void)PBArrayAdd_clipbundleFilePath;
+ (void)PBArrayAdd_aigcServiceID;
+ (void)PBArrayAdd_originMediaFileURLs;
+ (void)PBArrayAdd_templateVersionInfo;
+ (void)PBArrayAdd_templateDescFileMD5;
+ (void)PBArrayAdd_rootTemplateID;
+ (void)PBArrayAdd_selectedEffectPosition;
+ (void)PBArrayAdd_selectedEffectPanelType;
+ (void)PBArrayAdd_selectedEffectSessionBuffer;
+ (void)PBArrayAdd_effectApplyPageType;
+ (void)PBArrayAdd_shootContentSourceType;
+ (void)PBArrayAdd_postByPassInfo;
+ (void)PBArrayAdd_previewPostAllowance;
+ (void)PBArrayAdd_aigcInputKind;
+ (void)PBArrayAdd_originalPublisherSessionID;
+ (void)PBArrayAdd_followFeedTemplateId;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)prepareBeforePBCodingIfNeeded;
- (BOOL)restoreAfterPBCodingIfNeeded;
- (BOOL)isMaasSDKVersionCompatible;
- (id)description;
- (id)archivedWCTValue;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (unsigned long long)maasSDKVersion;
- (void)setMaasSDKVersion:(unsigned long long)arg1;
- (unsigned long long)aigcInputKind;
- (void)setAigcInputKind:(unsigned long long)arg1;
- (id)aigcTaskID;
- (void)setAigcTaskID:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)postByPassInfo;
- (void)setPostByPassInfo:(id)arg1;
- (unsigned int)previewPostAllowance;
- (void)setPreviewPostAllowance:(unsigned int)arg1;
- (id)coverImageFilePath;
- (void)setCoverImageFilePath:(id)arg1;
- (id)clipbundleDirID;
- (void)setClipbundleDirID:(id)arg1;
- (id)clipbundleFilePath;
- (void)setClipbundleFilePath:(id)arg1;
- (id)aigcServiceID;
- (void)setAigcServiceID:(id)arg1;
- (id)originMediaFileURLs;
- (void)setOriginMediaFileURLs:(id)arg1;
- (long long)entryScene;
- (void)setEntryScene:(long long)arg1;
- (unsigned long long)draftType;
- (void)setDraftType:(unsigned long long)arg1;
- (long long)cameraPosition;
- (void)setCameraPosition:(long long)arg1;
- (id)phAssetID;
- (void)setPhAssetID:(id)arg1;
- (BOOL)isAIGCTaskCompleted;
- (void)setIsAIGCTaskCompleted:(BOOL)arg1;
- (double)creationTimeInterval;
- (void)setCreationTimeInterval:(double)arg1;
- (id)postSourceInfo;
- (void)setPostSourceInfo:(id)arg1;
- (unsigned long long)templateType;
- (void)setTemplateType:(unsigned long long)arg1;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
- (id)originalPublisherSessionID;
- (void)setOriginalPublisherSessionID:(id)arg1;
- (id)followFeedTemplateId;
- (void)setFollowFeedTemplateId:(id)arg1;
- (unsigned long long)templateDescVersion;
- (void)setTemplateDescVersion:(unsigned long long)arg1;
- (id)templateVersionInfo;
- (void)setTemplateVersionInfo:(id)arg1;
- (id)templateDescFileMD5;
- (void)setTemplateDescFileMD5:(id)arg1;
- (id)rootTemplateID;
- (void)setRootTemplateID:(id)arg1;
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
- (void).cxx_destruct;
@end
