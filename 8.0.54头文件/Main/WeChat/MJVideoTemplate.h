@interface MJVideoTemplate : NSObject <PBCoding, NSCopying>
{
    BOOL _isMusicRecommendationEnabled; // +0x8
    BOOL _enableSingleTemplateMusicRec; // +0x9
    OMJTemplateInfo * _oMJTemplateInfo; // +0x10
    NSString * _templateId; // +0x18
    unsigned long long _type; // +0x20
    unsigned long long _sdkVersion; // +0x28
    MJCommonTemplateInfo * _commonTplInfo; // +0x30
    MJCameraTemplateInfo * _cameraTplInfo; // +0x38
    MJAlbumTemplateInfo * _albumTplInfo; // +0x40
    MJTemplateDynamicInfo * _dynamicInfo; // +0x48
    MJTemplateVersionInfo * _versionInfo; // +0x50
    MJTemplateFinderEventTopicInfo * _eventInfo; // +0x58
    MJTemplateFinderUserInfo * _finderUserInfo; // +0x60
    long long _videoTemplateSource; // +0x68
    NSString * _AIModelType; // +0x70
    unsigned long long _createTime; // +0x78
    unsigned long long _updateTime; // +0x80
    NSData * _sessionBuffer; // +0x88
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
+ (void)initialize;
- (id)initForFinderDefaultTemplate;
- (BOOL)isFinderDefaultTemplate;
- (id)getPBPropertyTable;
- (id)initWithVideoTemplate:(id)arg1;
- (id)initWithShortUrlBindingTemplate:(id)arg1;
- (id)initWithOMJTemplateInfo:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEditable;
- (BOOL)isAITemplate;
- (id)description;
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
- (void).cxx_destruct;
@end

