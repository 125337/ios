@interface MMWebPrefetchInjectTaskRequest : MMObject
{
    BOOL _htmlStringInPkg; // +0x8
    unsigned int _requestId; // +0xc
    unsigned int _scene; // +0x10
    unsigned int _subScene; // +0x14
    NSString * _url; // +0x18
    NSString * _domain; // +0x20
    NSString * _identifier; // +0x28
    NSArray * _arrResInfo; // +0x30
    NSString * _codePkgPath; // +0x38
}
- (unsigned int)requestId;
- (void)setRequestId:(unsigned int)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)arrResInfo;
- (void)setArrResInfo:(id)arg1;
- (id)codePkgPath;
- (void)setCodePkgPath:(id)arg1;
- (BOOL)htmlStringInPkg;
- (void)setHtmlStringInPkg:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)subScene;
- (void)setSubScene:(unsigned int)arg1;
- (void).cxx_destruct;
@end
