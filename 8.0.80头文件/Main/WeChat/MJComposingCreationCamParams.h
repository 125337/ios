@interface MJComposingCreationCamParams : NSObject
{
    MJComposingCreationMusicInfo * _musicInfo; // +0x8
    NSString * _transitionID; // +0x10
    NSArray * _assetInfos; // +0x18
    NSArray * _effectsInfos; // +0x20
    NSString * _templateJsonFilePath; // +0x28
    NSString * _templateURL; // +0x30
    NSString * _templateID; // +0x38
    NSString * _prompt; // +0x40
    NSString * _aigcTaskID; // +0x48
    NSString * _aigcServiceID; // +0x50
    MJTemplateVersionInfo * _templateVersionInfo; // +0x58
    unsigned long long _templateType; // +0x60
    NSString * _scene; // +0x68
    long long _enterChildScene; // +0x70
    long long _enterScene; // +0x78
    long long _sourceEnterScene; // +0x80
    NSString * _effectPostSessionId; // +0x88
    NSString * _templateName; // +0x90
    NSString * _templateIconURL; // +0x98
    NSString * _templateCoverURL; // +0xa0
}
+ (BOOL)isReeditSceneWithParams:(id)arg1;
+ (id)paramsWithDictionary:(id)arg1;
- (id)toDictionary;
- (id)description;
- (id)copy;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (id)transitionID;
- (void)setTransitionID:(id)arg1;
- (id)assetInfos;
- (void)setAssetInfos:(id)arg1;
- (id)effectsInfos;
- (void)setEffectsInfos:(id)arg1;
- (id)templateJsonFilePath;
- (void)setTemplateJsonFilePath:(id)arg1;
- (id)templateURL;
- (void)setTemplateURL:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)prompt;
- (void)setPrompt:(id)arg1;
- (id)aigcTaskID;
- (void)setAigcTaskID:(id)arg1;
- (id)aigcServiceID;
- (void)setAigcServiceID:(id)arg1;
- (id)templateVersionInfo;
- (void)setTemplateVersionInfo:(id)arg1;
- (unsigned long long)templateType;
- (void)setTemplateType:(unsigned long long)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (long long)enterChildScene;
- (void)setEnterChildScene:(long long)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (long long)sourceEnterScene;
- (void)setSourceEnterScene:(long long)arg1;
- (id)effectPostSessionId;
- (void)setEffectPostSessionId:(id)arg1;
- (id)templateName;
- (void)setTemplateName:(id)arg1;
- (id)templateIconURL;
- (void)setTemplateIconURL:(id)arg1;
- (id)templateCoverURL;
- (void)setTemplateCoverURL:(id)arg1;
- (void).cxx_destruct;
@end
