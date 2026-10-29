@interface OpenSDKAppBrandItem : MMObject
{
    BOOL _disableForward; // +0x8
    BOOL _isPrivateMessage; // +0x9
    unsigned int _appBrandVersion; // +0xc
    unsigned int _brandOfficialFlag; // +0x10
    unsigned int _relievedBuyFlag; // +0x14
    unsigned int _flagshipFlag; // +0x18
    unsigned int _type; // +0x1c
    unsigned int _secFlagForSinglePageMode; // +0x20
    NSString * _appBrandUserName; // +0x28
    NSString * _appBrandAppId; // +0x30
    NSString * _appBrandPath; // +0x38
    NSString * _appBrandIconUrl; // +0x40
    NSString * _shareKey; // +0x48
    NSString * _shareId; // +0x50
    WAAppPackageInfo * _packInfo; // +0x58
    NSMutableDictionary * _dynamicInfo; // +0x60
    WAUpdatableMsgInfo * _updatableMsgInfo; // +0x68
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)dynamicInfo;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)appBrandUserName;
- (void)setAppBrandUserName:(id)arg1;
- (id)appBrandAppId;
- (void)setAppBrandAppId:(id)arg1;
- (id)appBrandPath;
- (void)setAppBrandPath:(id)arg1;
- (unsigned int)appBrandVersion;
- (void)setAppBrandVersion:(unsigned int)arg1;
- (id)appBrandIconUrl;
- (void)setAppBrandIconUrl:(id)arg1;
- (id)shareKey;
- (void)setShareKey:(id)arg1;
- (id)shareId;
- (void)setShareId:(id)arg1;
- (id)packInfo;
- (void)setPackInfo:(id)arg1;
- (BOOL)disableForward;
- (void)setDisableForward:(BOOL)arg1;
- (unsigned int)brandOfficialFlag;
- (void)setBrandOfficialFlag:(unsigned int)arg1;
- (unsigned int)relievedBuyFlag;
- (void)setRelievedBuyFlag:(unsigned int)arg1;
- (unsigned int)flagshipFlag;
- (void)setFlagshipFlag:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (void)setDynamicInfo:(id)arg1;
- (BOOL)isPrivateMessage;
- (void)setIsPrivateMessage:(BOOL)arg1;
- (id)updatableMsgInfo;
- (void)setUpdatableMsgInfo:(id)arg1;
- (unsigned int)secFlagForSinglePageMode;
- (void)setSecFlagForSinglePageMode:(unsigned int)arg1;
- (void).cxx_destruct;
@end

