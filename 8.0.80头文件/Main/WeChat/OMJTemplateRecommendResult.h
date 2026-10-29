@interface OMJTemplateRecommendResult : NSObject
{
    BOOL _hasMoreTemplates; // +0x8
    BOOL _enableSingleTemplateMusicRec; // +0x9
    int _userType; // +0xc
    NSArray * _categories; // +0x10
    NSString * _pagingContext; // +0x18
    unsigned long long _requestID; // +0x20
    NSString * _projectClassification; // +0x28
    NSString * _scene; // +0x30
    NSString * _sceneTag; // +0x38
    NSString * _ratioType; // +0x40
    NSString * _photographerAudioTag; // +0x48
    NSString * _actorAudioTag; // +0x50
    NSString * _songAudioTag; // +0x58
    NSArray * _projectTagsV4; // +0x60
    NSArray * _sceneTagsV4; // +0x68
    NSString * _recommendExtra; // +0x70
    NSArray * _originMessages; // +0x78
    NSArray * _additionTemplateInfos; // +0x80
}
- (id)initWithBackingResult:(const void *)arg1;
- (id)description;
- (id)categories;
- (BOOL)hasMoreTemplates;
- (id)pagingContext;
- (BOOL)enableSingleTemplateMusicRec;
- (unsigned long long)requestID;
- (int)userType;
- (id)projectClassification;
- (id)scene;
- (id)sceneTag;
- (id)ratioType;
- (id)photographerAudioTag;
- (id)actorAudioTag;
- (id)songAudioTag;
- (id)projectTagsV4;
- (id)sceneTagsV4;
- (id)recommendExtra;
- (id)originMessages;
- (id)additionTemplateInfos;
- (void).cxx_destruct;
@end
