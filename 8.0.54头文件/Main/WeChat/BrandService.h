@interface BrandService : MMUserService <IMMLanguageMgrExt, MMServiceProtocol>
{
    int _agreementId; // +0x8
    int _wordAgreementId; // +0xc
    int _domainAgreementId; // +0x10
    unsigned int _brandType; // +0x14
    NSString * _sharedDomainDictPath; // +0x18
    NSMutableDictionary * _dictDomain; // +0x20
    NSRegularExpression * _domainRegex; // +0x28
    NSDictionary * _domainKeyToListDict; // +0x30
    BrandLemmaTable * _brandLemmaTable; // +0x38
}
+ (id)additionalUA;
+ (id)safeResolveURLString:(id)arg1;
+ (id)replacePlaceHolder:(id)arg1 withName:(id)arg2 inWording:(id)arg3;
+ (id)getDomainKey:(id)arg1;
+ (unsigned int)getBrandType;
+ (BOOL)isOverseaAgent;
+ (BOOL)isOverseaWallet;
- (void)onServiceInit;
- (void)setUserAgreementId:(unsigned int)arg1;
- (void)setWordingSettings:(id)arg1;
- (void)setDomainSettings:(id)arg1;
- (void)loadDomainDict;
- (void)updateDomainDict:(id)arg1;
- (id)getRealDomain:(id)arg1;
- (id)getBrandWordingForKey:(id)arg1;
- (id)getBrandWordingForKey:(id)arg1 brandType:(unsigned int)arg2;
- (id)getBrandWordingForKey:(id)arg1 brandType:(unsigned int)arg2 locale:(id)arg3;
- (id)getRealWording:(id)arg1;
- (id)getRealWording:(id)arg1 brandType:(unsigned int)arg2;
- (id)getRealWording:(id)arg1 locale:(id)arg2;
- (id)getRealWording:(id)arg1 brandType:(unsigned int)arg2 locale:(id)arg3;
- (id)resolveURLString:(id)arg1;
- (id)domainRegex;
- (id)domainDict;
- (void)initBrandLemmaTable;
- (void)onBrandTypeChange;
- (void)onLanguageChange;
- (id)sharedDomainDictPath;
- (void)setSharedDomainDictPath:(id)arg1;
- (int)agreementId;
- (void)setAgreementId:(int)arg1;
- (int)wordAgreementId;
- (void)setWordAgreementId:(int)arg1;
- (id)dictDomain;
- (void)setDictDomain:(id)arg1;
- (int)domainAgreementId;
- (void)setDomainAgreementId:(int)arg1;
- (void)setDomainRegex:(id)arg1;
- (id)domainKeyToListDict;
- (void)setDomainKeyToListDict:(id)arg1;
- (id)brandLemmaTable;
- (void)setBrandLemmaTable:(id)arg1;
- (unsigned int)brandType;
- (void)setBrandType:(unsigned int)arg1;
- (void).cxx_destruct;
@end

