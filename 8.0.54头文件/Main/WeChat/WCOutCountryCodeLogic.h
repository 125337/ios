@interface WCOutCountryCodeLogic : MMObject <MMPackageDownloadMgrExt>
{
    WCOutCountryCodeWrap * m_defaultCountryCodeWrap; // +0x8
    unsigned int m_lastUpdateTime; // +0x10
    NSString * m_countryCodeConfig; // +0x18
    Package * m_downloadingPackage; // +0x20
    NSString * m_curLanguage; // +0x28
    NSSet * m_restrictionSet; // +0x30
    NSMutableArray * m_allCountryCodes; // +0x38
    NSDictionary * m_countryCodesDic; // +0x40
    NSLocale * m_curLocale; // +0x48
    unsigned long long _addressMgrId; // +0x50
}
- (id)init;
- (id)getTopCountryCodeConfig;
- (id)defaultCoutryCode;
- (id)getAllCountryCodes;
- (id)getCountryCodeWrapsFromCountryCodeList:(id)arg1;
- (BOOL)isRestrictedCountryCode:(id)arg1;
- (BOOL)isValidCountryCode:(id)arg1;
- (unsigned int)countOfCountryCodeStartWith:(id)arg1;
- (id)countryISOCodeForCountryCode:(id)arg1;
- (id)countryCodeFromISOCountryCode:(id)arg1;
- (void)checkUpdate;
- (void)configData;
- (void)configCountryCodeRestriction;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)getAllCountryCode;
- (id)findCountryWrapFromISOCountryCode:(id)arg1;
- (id)getCurCountryCode;
- (id)getCarrierCountryCode;
- (id)getLocaleCountryCode;
- (unsigned long long)addressMgrId;
- (void)setAddressMgrId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

