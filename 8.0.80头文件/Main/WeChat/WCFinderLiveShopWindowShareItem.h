@interface WCFinderLiveShopWindowShareItem : MMObject <YYModel, NSCoding, NSCopying, PBCoding>
{
    BOOL _isWxShop; // +0x8
    unsigned int _topShopIconWidth; // +0xc
    unsigned int _topShopIconHeight; // +0x10
    unsigned int _simplifyTopShopIconWidth; // +0x14
    unsigned int _simplifyTopShopIconHeight; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _avatar; // +0x28
    NSString * _nickname; // +0x30
    NSString * _platformTagURL; // +0x38
    FinderGetWindowProductProfileCardInfoResponse_ReputationInfo * _reputationInfo; // +0x40
    NSString * _saleWording; // +0x48
    NSString * _saleWordingExtra; // +0x50
    NSArray * _productImageURLList; // +0x58
    NSString * _lastGMsgID; // +0x60
    NSString * _profileTypeWording; // +0x68
    NSString * _platformIconUrl; // +0x70
    NSString * _brandIconUrl; // +0x78
    NSString * _backgroundUrl; // +0x80
    NSString * _shopDescription; // +0x88
    NSString * _platformIconUrlDarkmode; // +0x90
    NSString * _rWords; // +0x98
    NSString * _rIconUrl; // +0xa0
    NSString * _rIconUrlDarkmode; // +0xa8
    NSString * _topShopIconUrl; // +0xb0
    NSString * _topShopIconUrlDarkmode; // +0xb8
    NSString * _simplifyTopShopIconUrl; // +0xc0
    NSString * _simplifyTopShopIconUrlDarkmode; // +0xc8
    NSString * _profileMainWording; // +0xd0
    NSString * _profileSubWording; // +0xd8
    NSString * _liteAppId; // +0xe0
    NSString * _liteAppPath; // +0xe8
    NSString * _query; // +0xf0
    NSString * _liteAppQuery; // +0xf8
    NSString * _commodityInStockCount; // +0x100
    NSString * _appId; // +0x108
    NSString * _path; // +0x110
    NSString * _appUsername; // +0x118
}
+ (void)PBArrayAdd_finderUsername;
+ (void)PBArrayAdd_avatar;
+ (void)PBArrayAdd_nickname;
+ (void)PBArrayAdd_commodityInStockCount;
+ (void)PBArrayAdd_appId;
+ (void)PBArrayAdd_path;
+ (void)PBArrayAdd_appUsername;
+ (void)PBArrayAdd_query;
+ (void)PBArrayAdd_liteAppId;
+ (void)PBArrayAdd_liteAppPath;
+ (void)PBArrayAdd_liteAppQuery;
+ (void)PBArrayAdd_platformTagURL;
+ (void)PBArrayAdd_reputationInfo;
+ (void)PBArrayAdd_saleWording;
+ (void)PBArrayAdd_productImageURLList;
+ (void)PBArrayAdd_lastGMsgID;
+ (void)PBArrayAdd_profileTypeWording;
+ (void)PBArrayAdd_saleWordingExtra;
+ (void)PBArrayAdd_isWxShop;
+ (void)PBArrayAdd_platformIconUrl;
+ (void)PBArrayAdd_brandIconUrl;
+ (void)PBArrayAdd_backgroundUrl;
+ (void)PBArrayAdd_platformIconUrlDarkmode;
+ (void)PBArrayAdd_rWords;
+ (void)PBArrayAdd_rIconUrl;
+ (void)PBArrayAdd_rIconUrlDarkmode;
+ (void)PBArrayAdd_topShopIconUrl;
+ (void)PBArrayAdd_topShopIconUrlDarkmode;
+ (void)initialize;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)getAppQuery;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (void)readMutablePartFromXML:(XmlReaderNode_t *)arg1;
- (void)readConstPartFromXML:(XmlReaderNode_t *)arg1;
- (void)writeMutablePartToXML:(id)arg1;
- (void)writeConstPartToXML:(id)arg1;
- (id)toXML;
- (id)toXMLForDataBase:(BOOL)arg1;
- (void)updateFromDataBase;
- (void)updateDataBase;
- (id)liteAppQueryDecoded;
- (void)setLiteAppQueryDecoded:(id)arg1;
- (void)setQueryDecoded:(id)arg1;
- (id)queryDecoded;
- (id)profileTypeWording;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)avatar;
- (void)setAvatar:(id)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)platformTagURL;
- (void)setPlatformTagURL:(id)arg1;
- (id)reputationInfo;
- (void)setReputationInfo:(id)arg1;
- (id)saleWording;
- (void)setSaleWording:(id)arg1;
- (id)saleWordingExtra;
- (void)setSaleWordingExtra:(id)arg1;
- (id)productImageURLList;
- (void)setProductImageURLList:(id)arg1;
- (id)lastGMsgID;
- (void)setLastGMsgID:(id)arg1;
- (void)setProfileTypeWording:(id)arg1;
- (BOOL)isWxShop;
- (void)setIsWxShop:(BOOL)arg1;
- (id)platformIconUrl;
- (void)setPlatformIconUrl:(id)arg1;
- (id)brandIconUrl;
- (void)setBrandIconUrl:(id)arg1;
- (id)backgroundUrl;
- (void)setBackgroundUrl:(id)arg1;
- (id)shopDescription;
- (void)setShopDescription:(id)arg1;
- (id)platformIconUrlDarkmode;
- (void)setPlatformIconUrlDarkmode:(id)arg1;
- (id)rWords;
- (void)setRWords:(id)arg1;
- (id)rIconUrl;
- (void)setRIconUrl:(id)arg1;
- (id)rIconUrlDarkmode;
- (void)setRIconUrlDarkmode:(id)arg1;
- (id)topShopIconUrl;
- (void)setTopShopIconUrl:(id)arg1;
- (id)topShopIconUrlDarkmode;
- (void)setTopShopIconUrlDarkmode:(id)arg1;
- (id)simplifyTopShopIconUrl;
- (void)setSimplifyTopShopIconUrl:(id)arg1;
- (id)simplifyTopShopIconUrlDarkmode;
- (void)setSimplifyTopShopIconUrlDarkmode:(id)arg1;
- (unsigned int)topShopIconWidth;
- (void)setTopShopIconWidth:(unsigned int)arg1;
- (unsigned int)topShopIconHeight;
- (void)setTopShopIconHeight:(unsigned int)arg1;
- (unsigned int)simplifyTopShopIconWidth;
- (void)setSimplifyTopShopIconWidth:(unsigned int)arg1;
- (unsigned int)simplifyTopShopIconHeight;
- (void)setSimplifyTopShopIconHeight:(unsigned int)arg1;
- (id)profileMainWording;
- (void)setProfileMainWording:(id)arg1;
- (id)profileSubWording;
- (void)setProfileSubWording:(id)arg1;
- (id)liteAppId;
- (void)setLiteAppId:(id)arg1;
- (id)liteAppPath;
- (void)setLiteAppPath:(id)arg1;
- (id)query;
- (void)setQuery:(id)arg1;
- (id)liteAppQuery;
- (void)setLiteAppQuery:(id)arg1;
- (id)commodityInStockCount;
- (void)setCommodityInStockCount:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)appUsername;
- (void)setAppUsername:(id)arg1;
- (void).cxx_destruct;
@end
