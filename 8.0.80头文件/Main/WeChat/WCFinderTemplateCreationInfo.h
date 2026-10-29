@interface WCFinderTemplateCreationInfo : NSObject <PBCoding>
{
    unsigned int _scene; // +0x8
    NSString * _aigcTaskID; // +0x10
    NSString * _aigcServiceID; // +0x18
    NSString * _templateCdnUrl; // +0x20
    NSString * _parentTemplateId; // +0x28
    NSString * _rootTemplateId; // +0x30
    NSString * _finderUsername; // +0x38
    NSString * _tplDescMd5; // +0x40
    MJTemplateVersionInfo * _templateVersionInfo; // +0x48
    unsigned long long _templateType; // +0x50
    NSString * _prompt; // +0x58
    NSString * _templateId; // +0x60
    NSString * _templateName; // +0x68
    NSString * _templateIconURL; // +0x70
    NSString * _templateCoverURL; // +0x78
}
+ (void)PBArrayAdd_aigcTaskID;
+ (void)PBArrayAdd_aigcServiceID;
+ (void)PBArrayAdd_templateCdnUrl;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_parentTemplateId;
+ (void)PBArrayAdd_rootTemplateId;
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_tplDescMd5;
+ (void)PBArrayAdd_templateVersionInfo;
+ (void)PBArrayAdd_templateType;
+ (void)PBArrayAdd_prompt;
+ (void)PBArrayAdd_templateId;
+ (void)PBArrayAdd_templateName;
+ (void)PBArrayAdd_templateIconURL;
+ (void)PBArrayAdd_templateCoverURL;
+ (void)initialize;
+ (id)fromPBTemplateCreationInfo:(id)arg1;
- (id)getPBPropertyTable;
- (id)convertToPBInfo;
- (id)aigcTaskID;
- (void)setAigcTaskID:(id)arg1;
- (id)aigcServiceID;
- (void)setAigcServiceID:(id)arg1;
- (id)templateCdnUrl;
- (void)setTemplateCdnUrl:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)parentTemplateId;
- (void)setParentTemplateId:(id)arg1;
- (id)rootTemplateId;
- (void)setRootTemplateId:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)tplDescMd5;
- (void)setTplDescMd5:(id)arg1;
- (id)templateVersionInfo;
- (void)setTemplateVersionInfo:(id)arg1;
- (unsigned long long)templateType;
- (void)setTemplateType:(unsigned long long)arg1;
- (id)prompt;
- (void)setPrompt:(id)arg1;
- (id)templateId;
- (void)setTemplateId:(id)arg1;
- (id)templateName;
- (void)setTemplateName:(id)arg1;
- (id)templateIconURL;
- (void)setTemplateIconURL:(id)arg1;
- (id)templateCoverURL;
- (void)setTemplateCoverURL:(id)arg1;
- (void).cxx_destruct;
@end
