@interface MJMovieComposingReeditParams : NSObject
{
    BOOL _shouldAttachTemplateCreationInfoOnExport; // +0x8
    UIViewController * _fromVC; // +0x10
    NSString * _aigcTaskID; // +0x18
    NSString * _aigcServiceID; // +0x20
    NSString * _prompt; // +0x28
    NSString * _templateID; // +0x30
    long long _templateReeditEligibility; // +0x38
    NSString * _templateName; // +0x40
    NSString * _reeditTipIconURL; // +0x48
    NSString * _reeditButtonWording; // +0x50
    FinderJumpInfo_LiteApp * _reeditLiteAppInfo; // +0x58
    NSString * _templateURL; // +0x60
    unsigned long long _templateType; // +0x68
    unsigned long long _templateDescVersion; // +0x70
    MJTemplateVersionInfo * _templateVersionInfo; // +0x78
    NSString * _templateDescFileMD5; // +0x80
    NSString * _rootTemplateID; // +0x88
    long long _enterScene; // +0x90
    long long _sourceEnterScene; // +0x98
    long long _enterChildScene; // +0xa0
    NSString * _finderPostSessionId; // +0xa8
    MJShootAIGCImportMaterial * _importMaterial; // +0xb0
    NSArray * _originAssetInfos; // +0xb8
    NSArray * _aigcAssetInfos; // +0xc0
    NSArray * _aigcAssetURLs; // +0xc8
}
- (id)description;
- (id)copy;
- (void)inheritTemplateReeditEligibilityFromParams:(id)arg1;
- (id)toDictionary;
- (id)toLiteDictionary;
- (id)reportingParamsDictionary;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)aigcTaskID;
- (void)setAigcTaskID:(id)arg1;
- (id)aigcServiceID;
- (void)setAigcServiceID:(id)arg1;
- (id)prompt;
- (void)setPrompt:(id)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (long long)templateReeditEligibility;
- (void)setTemplateReeditEligibility:(long long)arg1;
- (id)templateName;
- (void)setTemplateName:(id)arg1;
- (id)reeditTipIconURL;
- (void)setReeditTipIconURL:(id)arg1;
- (id)reeditButtonWording;
- (void)setReeditButtonWording:(id)arg1;
- (id)reeditLiteAppInfo;
- (void)setReeditLiteAppInfo:(id)arg1;
- (id)templateURL;
- (void)setTemplateURL:(id)arg1;
- (unsigned long long)templateType;
- (void)setTemplateType:(unsigned long long)arg1;
- (unsigned long long)templateDescVersion;
- (void)setTemplateDescVersion:(unsigned long long)arg1;
- (id)templateVersionInfo;
- (void)setTemplateVersionInfo:(id)arg1;
- (id)templateDescFileMD5;
- (void)setTemplateDescFileMD5:(id)arg1;
- (id)rootTemplateID;
- (void)setRootTemplateID:(id)arg1;
- (BOOL)shouldAttachTemplateCreationInfoOnExport;
- (void)setShouldAttachTemplateCreationInfoOnExport:(BOOL)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (long long)sourceEnterScene;
- (void)setSourceEnterScene:(long long)arg1;
- (long long)enterChildScene;
- (void)setEnterChildScene:(long long)arg1;
- (id)finderPostSessionId;
- (void)setFinderPostSessionId:(id)arg1;
- (id)importMaterial;
- (void)setImportMaterial:(id)arg1;
- (id)originAssetInfos;
- (void)setOriginAssetInfos:(id)arg1;
- (id)aigcAssetInfos;
- (void)setAigcAssetInfos:(id)arg1;
- (id)aigcAssetURLs;
- (void)setAigcAssetURLs:(id)arg1;
- (void).cxx_destruct;
@end
