@interface FavWeAppItem : FavoritesModel
{
    unsigned int _type; // +0x8
    unsigned int _pkgType; // +0xc
    unsigned int _version; // +0x10
    unsigned int _disableForward; // +0x14
    unsigned int _brandOfficialFlag; // +0x18
    unsigned int _relievedBuyFlag; // +0x1c
    unsigned int _flagshipFlag; // +0x20
    unsigned int _financialLicenseFlag; // +0x24
    unsigned int _subType; // +0x28
    NSString * _userName; // +0x30
    NSString * _iconUrl; // +0x38
    NSString * _pagePath; // +0x40
    NSString * _sourceDisplayName; // +0x48
    NSString * _appId; // +0x50
    NSString * _messageExtraData; // +0x58
    NSString * _weappsourceUsername; // +0x60
}
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)pagePath;
- (void)setPagePath:(id)arg1;
- (id)sourceDisplayName;
- (void)setSourceDisplayName:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)pkgType;
- (void)setPkgType:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)disableForward;
- (void)setDisableForward:(unsigned int)arg1;
- (unsigned int)brandOfficialFlag;
- (void)setBrandOfficialFlag:(unsigned int)arg1;
- (unsigned int)relievedBuyFlag;
- (void)setRelievedBuyFlag:(unsigned int)arg1;
- (unsigned int)flagshipFlag;
- (void)setFlagshipFlag:(unsigned int)arg1;
- (unsigned int)financialLicenseFlag;
- (void)setFinancialLicenseFlag:(unsigned int)arg1;
- (id)messageExtraData;
- (void)setMessageExtraData:(id)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
- (id)weappsourceUsername;
- (void)setWeappsourceUsername:(id)arg1;
- (void).cxx_destruct;
@end
