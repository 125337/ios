@interface MMCameraTemplateItem : NSObject
{
    BOOL _isFav; // +0x8
    BOOL _isFavLatest; // +0x9
    BOOL _isFromSearchTab; // +0xa
    unsigned int _previewPostAllowance; // +0xc
    NSString * _postByPassInfo; // +0x10
    NSString * _id; // +0x18
    NSString * _displayName; // +0x20
    NSString * _authorDisplayName; // +0x28
    NSString * _authorProfilePicURL; // +0x30
    unsigned long long _maasIosMinVersion; // +0x38
    NSString * _templateDescURL; // +0x40
    unsigned long long _templateDescVersion; // +0x48
    unsigned long long _cameraPosition; // +0x50
    NSString * _previewImageURL; // +0x58
    NSData * _sessionBuffer; // +0x60
    NSString * _guideWording; // +0x68
    MJFaceRecognitionInfo * _faceRecognitionInfo; // +0x70
    MJFaceIDGuideInfo * _faceIdGuideInfo; // +0x78
    MJMultiMaterialInfo * _multiMaterialInfo; // +0x80
    MJEffectEditInfo * _effectEditInfo; // +0x88
    MJTemplateVersionInfo * _versionInfo; // +0x90
    MJCommonTemplateInfo * _commonTplInfo; // +0x98
    unsigned long long _type; // +0xa0
    unsigned long long _effectCreateScene; // +0xa8
    unsigned long long _topicID; // +0xb0
}
+ (id)itemFromVideoTemplate:(id)arg1;
+ (id)itemFromMJVideoTemplate:(id)arg1;
+ (id)genTempateItemList;
+ (id)emptyItem;
+ (id)moreItem;
+ (id)hardCodeJsonData;
- (void)setFinderEventName:(id)arg1;
- (id)finderEventName;
- (void)setFinderEventCreateUsrNickname:(id)arg1;
- (id)finderEventCreateUsrNickname;
- (id)resolvedCaptureBlockTipsWording;
- (id)resolvedPickedAssetBlockTipsWording;
- (BOOL)supportsMultiMaterial;
- (unsigned long long)multiMaterialCountMax;
- (unsigned long long)multiMaterialCountMin;
- (id)multiMaterialPickerGuideWording;
- (id)multiMaterialSlotDurations;
- (BOOL)isNonEmptyCamTemplate;
- (BOOL)isEmptyItem;
- (BOOL)isMoreItem;
- (id)genAccessibilityLabel;
- (id)title;
- (id)colorString;
- (id)description;
- (id)postByPassInfo;
- (void)setPostByPassInfo:(id)arg1;
- (unsigned int)previewPostAllowance;
- (void)setPreviewPostAllowance:(unsigned int)arg1;
- (id)id;
- (void)setId:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)authorDisplayName;
- (void)setAuthorDisplayName:(id)arg1;
- (id)authorProfilePicURL;
- (void)setAuthorProfilePicURL:(id)arg1;
- (BOOL)isFav;
- (void)setIsFav:(BOOL)arg1;
- (BOOL)isFavLatest;
- (void)setIsFavLatest:(BOOL)arg1;
- (unsigned long long)maasIosMinVersion;
- (void)setMaasIosMinVersion:(unsigned long long)arg1;
- (id)templateDescURL;
- (void)setTemplateDescURL:(id)arg1;
- (unsigned long long)templateDescVersion;
- (void)setTemplateDescVersion:(unsigned long long)arg1;
- (unsigned long long)cameraPosition;
- (void)setCameraPosition:(unsigned long long)arg1;
- (id)previewImageURL;
- (void)setPreviewImageURL:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)guideWording;
- (void)setGuideWording:(id)arg1;
- (id)faceRecognitionInfo;
- (void)setFaceRecognitionInfo:(id)arg1;
- (id)faceIdGuideInfo;
- (void)setFaceIdGuideInfo:(id)arg1;
- (id)multiMaterialInfo;
- (void)setMultiMaterialInfo:(id)arg1;
- (id)effectEditInfo;
- (void)setEffectEditInfo:(id)arg1;
- (id)versionInfo;
- (void)setVersionInfo:(id)arg1;
- (id)commonTplInfo;
- (void)setCommonTplInfo:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)effectCreateScene;
- (void)setEffectCreateScene:(unsigned long long)arg1;
- (BOOL)isFromSearchTab;
- (void)setIsFromSearchTab:(BOOL)arg1;
- (unsigned long long)topicID;
- (void)setTopicID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
