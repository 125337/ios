@interface WCCardDataCardTPInfo : MMObject <PBCoding>
{
    BOOL _isCardCodeExposed; // +0x8
    BOOL _dismissQrcodeIconOnCard; // +0x9
    BOOL _isNeedLocation; // +0xa
    BOOL _needDirectjump; // +0xb
    BOOL _hasHongbao; // +0xc
    BOOL _isAcceptable; // +0xd
    BOOL _isShowAcceptView; // +0xe
    unsigned int _cardType; // +0x10
    unsigned int _shopCount; // +0x14
    unsigned int _blockMask; // +0x18
    unsigned int _controlflag; // +0x1c
    unsigned int _genType; // +0x20
    unsigned int _qrcodeCorrectLevel; // +0x24
    NSString * _cardTypeName; // +0x28
    NSString * _cardCategory; // +0x30
    NSString * _acceptWording; // +0x38
    NSString * _buttonWording; // +0x40
    NSString * _appId; // +0x48
    NSString * _appUserName; // +0x50
    NSString * _primarySubTitle; // +0x58
    NSString * _middleIconUrl; // +0x60
    NSString * _notice; // +0x68
    NSString * _servicePhone; // +0x70
    NSArray * _introduceFields; // +0x78
    NSString * _imageTextUrl; // +0x80
    NSString * _sourceIconUrl; // +0x88
    NSString * _source; // +0x90
    NSString * _h5ShowUrl; // +0x98
    WCCardUsedStoreInfo * _oneShopInfo; // +0xa0
    NSString * _advertiseWording; // +0xa8
    NSString * _advertiseUrl; // +0xb0
    NSString * _publicServiceName; // +0xb8
    NSString * _publicServiceTip; // +0xc0
    WCCardOperationRegion * _announcement; // +0xc8
    NSString * _cardTpId; // +0xd0
    WCCardDetailInfo * _detailInfo; // +0xd8
    WCCardUseConditionInfo * _usedCondition; // +0xe0
    WCCardFollowBoxInfo * _followBoxInfo; // +0xe8
    WCCardActionSheet * _guidanceAction; // +0xf0
    DynamicQrCodeInfo * _dynamicQrCodeItem; // +0xf8
    NSString * _bizNickname; // +0x100
    NSString * _color; // +0x108
    NSString * _logoUrl; // +0x110
    NSString * _logoName; // +0x118
    NSArray * _primaryFields; // +0x120
    NSString * _advertiseTinyAppUsername; // +0x128
    NSString * _advertiseTinyAppPath; // +0x130
    NSString * _title; // +0x138
    NSString * _acceptTitle; // +0x140
    WCCardFieldItem * _brandField; // +0x148
    NSString * _cardExt; // +0x150
    NSString * _unacceptableWording; // +0x158
    NSString * _shopName; // +0x160
    WCCardFieldItem * _payAndQrcodeField; // +0x168
    BluetoothInfo * _bleInfo; // +0x170
    NSString * _giftTitle; // +0x178
    NSString * _brandIconUrl; // +0x180
}
+ (void)PBArrayAdd_color;
+ (void)PBArrayAdd_logoUrl;
+ (void)PBArrayAdd_logoName;
+ (void)PBArrayAdd_primaryFields;
+ (void)initialize;
- (id)getPBPropertyTable;
- (unsigned int)cardType;
- (void)setCardType:(unsigned int)arg1;
- (id)cardTypeName;
- (void)setCardTypeName:(id)arg1;
- (id)cardCategory;
- (void)setCardCategory:(id)arg1;
- (id)acceptWording;
- (void)setAcceptWording:(id)arg1;
- (id)buttonWording;
- (void)setButtonWording:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)appUserName;
- (void)setAppUserName:(id)arg1;
- (id)primarySubTitle;
- (void)setPrimarySubTitle:(id)arg1;
- (id)middleIconUrl;
- (void)setMiddleIconUrl:(id)arg1;
- (id)notice;
- (void)setNotice:(id)arg1;
- (id)servicePhone;
- (void)setServicePhone:(id)arg1;
- (id)introduceFields;
- (void)setIntroduceFields:(id)arg1;
- (unsigned int)shopCount;
- (void)setShopCount:(unsigned int)arg1;
- (id)imageTextUrl;
- (void)setImageTextUrl:(id)arg1;
- (id)sourceIconUrl;
- (void)setSourceIconUrl:(id)arg1;
- (id)source;
- (void)setSource:(id)arg1;
- (id)h5ShowUrl;
- (void)setH5ShowUrl:(id)arg1;
- (unsigned int)blockMask;
- (void)setBlockMask:(unsigned int)arg1;
- (id)oneShopInfo;
- (void)setOneShopInfo:(id)arg1;
- (unsigned int)controlflag;
- (void)setControlflag:(unsigned int)arg1;
- (id)advertiseWording;
- (void)setAdvertiseWording:(id)arg1;
- (id)advertiseUrl;
- (void)setAdvertiseUrl:(id)arg1;
- (id)publicServiceName;
- (void)setPublicServiceName:(id)arg1;
- (id)publicServiceTip;
- (void)setPublicServiceTip:(id)arg1;
- (id)announcement;
- (void)setAnnouncement:(id)arg1;
- (unsigned int)genType;
- (void)setGenType:(unsigned int)arg1;
- (id)cardTpId;
- (void)setCardTpId:(id)arg1;
- (id)detailInfo;
- (void)setDetailInfo:(id)arg1;
- (id)usedCondition;
- (void)setUsedCondition:(id)arg1;
- (id)followBoxInfo;
- (void)setFollowBoxInfo:(id)arg1;
- (id)guidanceAction;
- (void)setGuidanceAction:(id)arg1;
- (id)dynamicQrCodeItem;
- (void)setDynamicQrCodeItem:(id)arg1;
- (BOOL)isCardCodeExposed;
- (void)setIsCardCodeExposed:(BOOL)arg1;
- (BOOL)dismissQrcodeIconOnCard;
- (void)setDismissQrcodeIconOnCard:(BOOL)arg1;
- (unsigned int)qrcodeCorrectLevel;
- (void)setQrcodeCorrectLevel:(unsigned int)arg1;
- (BOOL)isNeedLocation;
- (void)setIsNeedLocation:(BOOL)arg1;
- (id)bizNickname;
- (void)setBizNickname:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)logoUrl;
- (void)setLogoUrl:(id)arg1;
- (id)logoName;
- (void)setLogoName:(id)arg1;
- (id)primaryFields;
- (void)setPrimaryFields:(id)arg1;
- (id)advertiseTinyAppUsername;
- (void)setAdvertiseTinyAppUsername:(id)arg1;
- (id)advertiseTinyAppPath;
- (void)setAdvertiseTinyAppPath:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)acceptTitle;
- (void)setAcceptTitle:(id)arg1;
- (BOOL)needDirectjump;
- (void)setNeedDirectjump:(BOOL)arg1;
- (id)brandField;
- (void)setBrandField:(id)arg1;
- (id)cardExt;
- (void)setCardExt:(id)arg1;
- (BOOL)hasHongbao;
- (void)setHasHongbao:(BOOL)arg1;
- (BOOL)isAcceptable;
- (void)setIsAcceptable:(BOOL)arg1;
- (id)unacceptableWording;
- (void)setUnacceptableWording:(id)arg1;
- (BOOL)isShowAcceptView;
- (void)setIsShowAcceptView:(BOOL)arg1;
- (id)shopName;
- (void)setShopName:(id)arg1;
- (id)payAndQrcodeField;
- (void)setPayAndQrcodeField:(id)arg1;
- (id)bleInfo;
- (void)setBleInfo:(id)arg1;
- (id)giftTitle;
- (void)setGiftTitle:(id)arg1;
- (id)brandIconUrl;
- (void)setBrandIconUrl:(id)arg1;
- (void).cxx_destruct;
@end

