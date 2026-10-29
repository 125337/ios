@interface WAAppMsgItem : MMObject
{
    BOOL _isPrivateMessage; // +0x8
    BOOL _disableForward; // +0x9
    unsigned int _type; // +0xc
    unsigned int _version; // +0x10
    unsigned int _appServiceType; // +0x14
    unsigned int _brandOfficialFlag; // +0x18
    unsigned int _relievedBuyFlag; // +0x1c
    unsigned int _hasRelievedBuyPlugin; // +0x20
    unsigned int _financialLicenseFlag; // +0x24
    unsigned int _flagshipFlag; // +0x28
    unsigned int _subType; // +0x2c
    unsigned int _certificationImageType; // +0x30
    unsigned int _scene; // +0x34
    unsigned int _secFlagForSinglePageMode; // +0x38
    unsigned int _pcSharedLaunchScene; // +0x3c
    NSString * _username; // +0x40
    NSString * _appid; // +0x48
    NSString * _pagepath; // +0x50
    NSString * _weappIconUrl; // +0x58
    NSString * _shareId; // +0x60
    NSString * _shareKey; // +0x68
    NSString * _shareName; // +0x70
    long long _tradeCommentScore; // +0x78
    NSString * _registerBody; // +0x80
    WAAppPackageInfo * _packInfo; // +0x88
    WADynamicPageInfo * _dynamicPageInfo; // +0x90
    WAUpdatableMsgInfo * _updatableMsgInfo; // +0x98
    NSString * _messageExtraData; // +0xa0
    NSString * _minitoolCardInfo; // +0xa8
    NSString * _minitoolShareType; // +0xb0
    NSString * _instanceSessionId; // +0xb8
    NSString * _mtVersion; // +0xc0
    WANativeAppMsgInfo * _nativeAppMsgInfo; // +0xc8
    WAVideoPageInfo * _videoPageInfo; // +0xd0
    WAScreenVideoInfo * _screenVideoInfo; // +0xd8
    NSString * _toDoActivityId; // +0xe0
    NSString * _favWeAppMsgId; // +0xe8
    NSMutableDictionary * _dynamicInfo; // +0xf0
    NSString * _weAppPageThumbRawUrl; // +0xf8
    NSString * _agentSessionId; // +0x100
    NSString * _pagepathForRoute; // +0x108
    NSString * _payload; // +0x110
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)dynamicInfo;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)pagepath;
- (void)setPagepath:(id)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (id)weappIconUrl;
- (void)setWeappIconUrl:(id)arg1;
- (id)shareId;
- (void)setShareId:(id)arg1;
- (id)shareKey;
- (void)setShareKey:(id)arg1;
- (id)shareName;
- (void)setShareName:(id)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned int)brandOfficialFlag;
- (void)setBrandOfficialFlag:(unsigned int)arg1;
- (unsigned int)relievedBuyFlag;
- (void)setRelievedBuyFlag:(unsigned int)arg1;
- (unsigned int)hasRelievedBuyPlugin;
- (void)setHasRelievedBuyPlugin:(unsigned int)arg1;
- (unsigned int)financialLicenseFlag;
- (void)setFinancialLicenseFlag:(unsigned int)arg1;
- (unsigned int)flagshipFlag;
- (void)setFlagshipFlag:(unsigned int)arg1;
- (long long)tradeCommentScore;
- (void)setTradeCommentScore:(long long)arg1;
- (unsigned int)subType;
- (void)setSubType:(unsigned int)arg1;
- (unsigned int)certificationImageType;
- (void)setCertificationImageType:(unsigned int)arg1;
- (id)registerBody;
- (void)setRegisterBody:(id)arg1;
- (id)packInfo;
- (void)setPackInfo:(id)arg1;
- (id)dynamicPageInfo;
- (void)setDynamicPageInfo:(id)arg1;
- (id)updatableMsgInfo;
- (void)setUpdatableMsgInfo:(id)arg1;
- (id)messageExtraData;
- (void)setMessageExtraData:(id)arg1;
- (id)minitoolCardInfo;
- (void)setMinitoolCardInfo:(id)arg1;
- (id)minitoolShareType;
- (void)setMinitoolShareType:(id)arg1;
- (id)instanceSessionId;
- (void)setInstanceSessionId:(id)arg1;
- (id)mtVersion;
- (void)setMtVersion:(id)arg1;
- (id)nativeAppMsgInfo;
- (void)setNativeAppMsgInfo:(id)arg1;
- (id)videoPageInfo;
- (void)setVideoPageInfo:(id)arg1;
- (id)screenVideoInfo;
- (void)setScreenVideoInfo:(id)arg1;
- (id)toDoActivityId;
- (void)setToDoActivityId:(id)arg1;
- (BOOL)isPrivateMessage;
- (void)setIsPrivateMessage:(BOOL)arg1;
- (BOOL)disableForward;
- (void)setDisableForward:(BOOL)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (id)favWeAppMsgId;
- (void)setFavWeAppMsgId:(id)arg1;
- (void)setDynamicInfo:(id)arg1;
- (id)weAppPageThumbRawUrl;
- (void)setWeAppPageThumbRawUrl:(id)arg1;
- (unsigned int)secFlagForSinglePageMode;
- (void)setSecFlagForSinglePageMode:(unsigned int)arg1;
- (unsigned int)pcSharedLaunchScene;
- (void)setPcSharedLaunchScene:(unsigned int)arg1;
- (id)agentSessionId;
- (void)setAgentSessionId:(id)arg1;
- (id)pagepathForRoute;
- (void)setPagepathForRoute:(id)arg1;
- (id)payload;
- (void)setPayload:(id)arg1;
- (void).cxx_destruct;
@end
