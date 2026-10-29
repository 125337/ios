@interface MMWebOptimizationPrefetchRequest : MMObject
{
    BOOL _canRedirect; // +0x8
    BOOL _shouldPrefetchContent; // +0x9
    BOOL _isUseSingletonVM; // +0xa
    unsigned int _scene; // +0xc
    unsigned int _subScene; // +0x10
    unsigned int _prefetchMode; // +0x14
    unsigned int _fetchPkgType; // +0x18
    NSString * _identifier; // +0x20
    NSString * _domain; // +0x28
    NSString * _url; // +0x30
    NSArray * _resUrls; // +0x38
    NSDictionary * _httpHeader; // +0x40
    NSString * _pkgAppId; // +0x48
    NSString * _pkgUserName; // +0x50
    NSString * _transferScope; // +0x58
}
- (id)description;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)domain;
- (void)setDomain:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)subScene;
- (void)setSubScene:(unsigned int)arg1;
- (BOOL)canRedirect;
- (void)setCanRedirect:(BOOL)arg1;
- (id)resUrls;
- (void)setResUrls:(id)arg1;
- (id)httpHeader;
- (void)setHttpHeader:(id)arg1;
- (BOOL)shouldPrefetchContent;
- (void)setShouldPrefetchContent:(BOOL)arg1;
- (id)pkgAppId;
- (void)setPkgAppId:(id)arg1;
- (id)pkgUserName;
- (void)setPkgUserName:(id)arg1;
- (BOOL)isUseSingletonVM;
- (void)setIsUseSingletonVM:(BOOL)arg1;
- (unsigned int)prefetchMode;
- (void)setPrefetchMode:(unsigned int)arg1;
- (unsigned int)fetchPkgType;
- (void)setFetchPkgType:(unsigned int)arg1;
- (id)transferScope;
- (void)setTransferScope:(id)arg1;
- (void).cxx_destruct;
@end

