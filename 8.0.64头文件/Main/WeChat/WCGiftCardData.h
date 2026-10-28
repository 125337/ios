@interface WCGiftCardData : MMObject
{
    BOOL _needJump; // +0x8
    unsigned int _picDataLength; // +0xc
    unsigned int _videoDataLength; // +0x10
    unsigned int _thumbDataLength; // +0x14
    unsigned int _layoutMode; // +0x18
    unsigned int _bizUin; // +0x1c
    unsigned int _outOfCard; // +0x20
    unsigned int _centerButtonJumpType; // +0x24
    NSString * _toUserName; // +0x28
    NSString * _fromUserName; // +0x30
    NSString * _fromUserHeadImgUrl; // +0x38
    NSString * _content; // +0x40
    NSString * _contentPicUrl; // +0x48
    NSString * _contentVideoUrl; // +0x50
    NSString * _contentVideoThumbPicUrl; // +0x58
    NSString * _picAesKey; // +0x60
    NSString * _videoAesKey; // +0x68
    NSString * _thumbPicAesKey; // +0x70
    NSString * _cardBackgroundPicUrl; // +0x78
    NSString * _cardLogoUrl; // +0x80
    NSString * _cardTitle; // +0x88
    NSString * _cardPrice; // +0x90
    NSString * _footerWording; // +0x98
    NSString * _color; // +0xa0
    NSString * _descriptionTitle; // +0xa8
    NSString * _descriptionIconUrl; // +0xb0
    NSString * _giftingMediaTitle; // +0xb8
    NSString * _orderId; // +0xc0
    NSString * _descriptionTitleColor; // +0xc8
    NSString * _cardTitleColor; // +0xd0
    NSString * _cardPriceTitleColor; // +0xd8
    NSString * _userCardId; // +0xe0
    NSString * _operationTitle; // +0xe8
    NSString * _operationUrl; // +0xf0
    NSString * _cardTpId; // +0xf8
    NSString * _cardCode; // +0x100
    NSArray * _acceptedCardList; // +0x108
    NSArray * _accepterList; // +0x110
    NSString * _acceptedListTitle; // +0x118
    NSString * _appBrandUserName; // +0x120
    NSString * _appBrandPath; // +0x128
    NSString * _bottomLeftBtnTitle; // +0x130
    NSString * _bottomRightBtnTitle; // +0x138
    NSString * _bottomRightBtnNativeUrl; // +0x140
    NSString * _centerButtonTitle; // +0x148
    NSString * _centerButtonNativeUrl; // +0x150
    NSString * _centerButtonAppUsername; // +0x158
    NSString * _centerButtonAppPath; // +0x160
    NSString * _centerButtonConfirmTitle; // +0x168
}
- (id)toUserName;
- (void)setToUserName:(id)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (id)fromUserHeadImgUrl;
- (void)setFromUserHeadImgUrl:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)contentPicUrl;
- (void)setContentPicUrl:(id)arg1;
- (id)contentVideoUrl;
- (void)setContentVideoUrl:(id)arg1;
- (id)contentVideoThumbPicUrl;
- (void)setContentVideoThumbPicUrl:(id)arg1;
- (id)picAesKey;
- (void)setPicAesKey:(id)arg1;
- (id)videoAesKey;
- (void)setVideoAesKey:(id)arg1;
- (id)thumbPicAesKey;
- (void)setThumbPicAesKey:(id)arg1;
- (id)cardBackgroundPicUrl;
- (void)setCardBackgroundPicUrl:(id)arg1;
- (id)cardLogoUrl;
- (void)setCardLogoUrl:(id)arg1;
- (id)cardTitle;
- (void)setCardTitle:(id)arg1;
- (id)cardPrice;
- (void)setCardPrice:(id)arg1;
- (id)footerWording;
- (void)setFooterWording:(id)arg1;
- (BOOL)needJump;
- (void)setNeedJump:(BOOL)arg1;
- (unsigned int)picDataLength;
- (void)setPicDataLength:(unsigned int)arg1;
- (unsigned int)videoDataLength;
- (void)setVideoDataLength:(unsigned int)arg1;
- (unsigned int)thumbDataLength;
- (void)setThumbDataLength:(unsigned int)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)descriptionTitle;
- (void)setDescriptionTitle:(id)arg1;
- (id)descriptionIconUrl;
- (void)setDescriptionIconUrl:(id)arg1;
- (unsigned int)layoutMode;
- (void)setLayoutMode:(unsigned int)arg1;
- (id)giftingMediaTitle;
- (void)setGiftingMediaTitle:(id)arg1;
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (id)orderId;
- (void)setOrderId:(id)arg1;
- (id)descriptionTitleColor;
- (void)setDescriptionTitleColor:(id)arg1;
- (id)cardTitleColor;
- (void)setCardTitleColor:(id)arg1;
- (id)cardPriceTitleColor;
- (void)setCardPriceTitleColor:(id)arg1;
- (id)userCardId;
- (void)setUserCardId:(id)arg1;
- (id)operationTitle;
- (void)setOperationTitle:(id)arg1;
- (id)operationUrl;
- (void)setOperationUrl:(id)arg1;
- (id)cardTpId;
- (void)setCardTpId:(id)arg1;
- (id)cardCode;
- (void)setCardCode:(id)arg1;
- (id)acceptedCardList;
- (void)setAcceptedCardList:(id)arg1;
- (id)accepterList;
- (void)setAccepterList:(id)arg1;
- (id)acceptedListTitle;
- (void)setAcceptedListTitle:(id)arg1;
- (unsigned int)outOfCard;
- (void)setOutOfCard:(unsigned int)arg1;
- (id)appBrandUserName;
- (void)setAppBrandUserName:(id)arg1;
- (id)appBrandPath;
- (void)setAppBrandPath:(id)arg1;
- (id)bottomLeftBtnTitle;
- (void)setBottomLeftBtnTitle:(id)arg1;
- (id)bottomRightBtnTitle;
- (void)setBottomRightBtnTitle:(id)arg1;
- (id)bottomRightBtnNativeUrl;
- (void)setBottomRightBtnNativeUrl:(id)arg1;
- (id)centerButtonTitle;
- (void)setCenterButtonTitle:(id)arg1;
- (unsigned int)centerButtonJumpType;
- (void)setCenterButtonJumpType:(unsigned int)arg1;
- (id)centerButtonNativeUrl;
- (void)setCenterButtonNativeUrl:(id)arg1;
- (id)centerButtonAppUsername;
- (void)setCenterButtonAppUsername:(id)arg1;
- (id)centerButtonAppPath;
- (void)setCenterButtonAppPath:(id)arg1;
- (id)centerButtonConfirmTitle;
- (void)setCenterButtonConfirmTitle:(id)arg1;
- (void).cxx_destruct;
@end
