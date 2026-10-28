@interface MJTemplateServiceProvider : NSObject <OMJTemplateServiceProvider>
{
    MMContext * _mmContext; // +0x8
    unsigned long long _templateType; // +0x10
    id /* block */ _getSceneBlock; // +0x18
}
+ (id)hardcodeMetaDataWithTemplateId:(id)arg1;
- (id)init;
- (void)requestTemplateMetadataWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)templateType;
- (void)setTemplateType:(unsigned long long)arg1;
- (id /* block */)getSceneBlock;
- (void)setGetSceneBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
