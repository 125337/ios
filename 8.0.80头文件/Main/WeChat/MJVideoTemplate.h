@interface MJVideoTemplate : NSObject <PBCoding, NSCopying>
{
    BOOL _isMusicRecommendationEnabled; // +0x8
    BOOL _enableSingleTemplateMusicRec; // +0x9
    unsigned int _previewPostAllowance; // +0xc
    NSString * _postByPassInfo; // +0x10
    OMJTemplateInfo * _oMJTemplateInfo; // +0x18
    NSString * _templateId; // +0x20
    unsigned long long _type; // +0x28
    unsigned long long _sdkVersion; // +0x30
    MJCommonTemplateInfo * _commonTplInfo; // +0x38
    MJCameraTemplateInfo * _cameraTplInfo; // +0x40
    MJAlbumTemplateInfo * _albumTplInfo; // +0x48
    MJTemplateDynamicInfo * _dynamicInfo; // +0x50
    MJTemplateVersionInfo * _versionInfo; // +0x58
    MJTemplateFinderEventTopicInfo * _eventInfo; // +0x60
    MJTemplateFinderUserInfo * _finderUserInfo; // +0x68
    MJFaceIDGuideInfo * _faceIdInfo; // +0x70
    MJMultiMaterialInfo * _multiMaterialInfo; // +0x78
    MJEffectEditInfo * _effectEditInfo; // +0x80
    unsigned long long _effectCreateScene; // +0x88
    long long _videoTemplateSource; // +0x90
    NSString * _AIModelType; // +0x98
    unsigned long long _createTime; // +0xa0
    unsigned long long _updateTime; // +0xa8
    NSData * _sessionBuffer; // +0xb0
    unsigned long long _topicID; // +0xb8
}
+ (id)finderDefaultTemplate;
+ (void)PBArrayAdd_templateId;
+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_sdkVersion;
+ (void)PBArrayAdd_commonTplInfo;
+ (void)PBArrayAdd_cameraTplInfo;
+ (void)PBArrayAdd_albumTplInfo;
+ (void)PBArrayAdd_dynamicInfo;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_updateTime;
+ (void)PBArrayAdd_sessionBuffer;
+ (void)PBArrayAdd_AIModelType;
+ (void)PBArrayAdd_finderUserInfo;
+ (void)PBArrayAdd_faceIdInfo;
+ (void)PBArrayAdd_multiMaterialInfo;
+ (void)PBArrayAdd_effectCreateScene;
+ (void)PBArrayAdd_effectEditInfo;
+ (void)PBArrayAdd_postByPassInfo;
+ (void)PBArrayAdd_previewPostAllowance;
+ (void)initialize;
+ (BOOL)isAIAutoCutTemplate:(id)arg1;
+ (BOOL)isAIImage2ImageTemplate:(id)arg1;
+ (unsigned long long)getAITemplateTypeWithModelType:(id)arg1;
- (id)initForFinderDefaultTemplate;
- (BOOL)isFinderDefaultTemplate;
- (id)getPBPropertyTable;
- (id)initWithVideoTemplate:(id)arg1;
- (id)initWithShortUrlBindingTemplate:(id)arg1;
- (id)initWithOMJTemplateInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEditable;
- (id)description;
- (id)postByPassInfo;
- (void)setPostByPassInfo:(id)arg1;
- (unsigned int)previewPostAllowance;
- (void)setPreviewPostAllowance:(unsigned int)arg1;
- (id)oMJTemplateInfo;
- (void)setOMJTemplateInfo:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)sdkVersion;
- (void)setSdkVersion:(unsigned long long)arg1;
- (id)commonTplInfo;
- (void)setCommonTplInfo:(id)arg1;
- (id)cameraTplInfo;
- (void)setCameraTplInfo:(id)arg1;
- (id)albumTplInfo;
- (void)setAlbumTplInfo:(id)arg1;
- (id)dynamicInfo;
- (void)setDynamicInfo:(id)arg1;
- (id)versionInfo;
- (void)setVersionInfo:(id)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (id)finderUserInfo;
- (void)setFinderUserInfo:(id)arg1;
- (id)faceIdInfo;
- (void)setFaceIdInfo:(id)arg1;
- (id)multiMaterialInfo;
- (void)setMultiMaterialInfo:(id)arg1;
- (id)effectEditInfo;
- (void)setEffectEditInfo:(id)arg1;
- (unsigned long long)effectCreateScene;
- (void)setEffectCreateScene:(unsigned long long)arg1;
- (long long)videoTemplateSource;
- (void)setVideoTemplateSource:(long long)arg1;
- (BOOL)isMusicRecommendationEnabled;
- (void)setIsMusicRecommendationEnabled:(BOOL)arg1;
- (BOOL)enableSingleTemplateMusicRec;
- (void)setEnableSingleTemplateMusicRec:(BOOL)arg1;
- (id)AIModelType;
- (void)setAIModelType:(id)arg1;
- (unsigned long long)createTime;
- (void)setCreateTime:(unsigned long long)arg1;
- (unsigned long long)updateTime;
- (void)setUpdateTime:(unsigned long long)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned long long)topicID;
- (void)setTopicID:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
