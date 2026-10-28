@interface WSLocalTemplateConfig : NSObject
{
    unsigned int _version; // +0x8
    NSDictionary * _urlParams; // +0x10
    NSString * _htmlPath; // +0x18
    unsigned long long _localJSBizType; // +0x20
    MMUIViewController * _containerVC; // +0x28
    unsigned long long _bizType; // +0x30
    NSString * _byPassContent; // +0x38
}
- (id)urlParams;
- (void)setUrlParams:(id)arg1;
- (id)htmlPath;
- (void)setHtmlPath:(id)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned long long)localJSBizType;
- (void)setLocalJSBizType:(unsigned long long)arg1;
- (id)containerVC;
- (void)setContainerVC:(id)arg1;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg1;
- (id)byPassContent;
- (void)setByPassContent:(id)arg1;
- (void).cxx_destruct;
@end
