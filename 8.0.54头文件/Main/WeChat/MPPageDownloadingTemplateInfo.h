@interface MPPageDownloadingTemplateInfo : NSObject
{
    BOOL _isInvalid; // +0x8
    unsigned int _scene; // +0xc
    MPPageTemplateInfo * _templateInfo; // +0x10
    MPPageDownloadedTemplateRecord * _record; // +0x18
}
- (id)templateInfo;
- (void)setTemplateInfo:(id)arg1;
- (id)record;
- (void)setRecord:(id)arg1;
- (BOOL)isInvalid;
- (void)setIsInvalid:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end

