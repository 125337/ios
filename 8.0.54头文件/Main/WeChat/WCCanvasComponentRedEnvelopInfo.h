@interface WCCanvasComponentRedEnvelopInfo : MMObject <NSCoding>
{
    int _theChosenSubtype; // +0x8
    NSString * _title; // +0x10
    NSString * _hbImgUrl; // +0x18
    NSString * _jumpUrl; // +0x20
    NSString * _shareTitle; // +0x28
    NSString * _shareThumbUrl; // +0x30
    NSString * _btnTxtColor; // +0x38
    double _btnTxtColorAlpha; // +0x40
    NSString * _btnBgColor; // +0x48
    double _btnBgColorAlpha; // +0x50
    double _btnCornerRadius; // +0x58
    WCCanvasComponentItem * _videoItem; // +0x60
    NSString * _inviteLinkTxt; // +0x68
    NSString * _inviteLinkTxtColor; // +0x70
    double _inviteLinkTxtColorAlpha; // +0x78
    NSMutableDictionary * _subCardsInfo; // +0x80
    NSString * _cardDynamicInfo; // +0x88
    NSString * _giveCardId; // +0x90
    NSString * _receiveUrl; // +0x98
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)hbImgUrl;
- (void)setHbImgUrl:(id)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (id)shareTitle;
- (void)setShareTitle:(id)arg1;
- (id)shareThumbUrl;
- (void)setShareThumbUrl:(id)arg1;
- (id)btnTxtColor;
- (void)setBtnTxtColor:(id)arg1;
- (double)btnTxtColorAlpha;
- (void)setBtnTxtColorAlpha:(double)arg1;
- (id)btnBgColor;
- (void)setBtnBgColor:(id)arg1;
- (double)btnBgColorAlpha;
- (void)setBtnBgColorAlpha:(double)arg1;
- (double)btnCornerRadius;
- (void)setBtnCornerRadius:(double)arg1;
- (id)videoItem;
- (void)setVideoItem:(id)arg1;
- (id)inviteLinkTxt;
- (void)setInviteLinkTxt:(id)arg1;
- (id)inviteLinkTxtColor;
- (void)setInviteLinkTxtColor:(id)arg1;
- (double)inviteLinkTxtColorAlpha;
- (void)setInviteLinkTxtColorAlpha:(double)arg1;
- (id)subCardsInfo;
- (void)setSubCardsInfo:(id)arg1;
- (id)cardDynamicInfo;
- (void)setCardDynamicInfo:(id)arg1;
- (int)theChosenSubtype;
- (void)setTheChosenSubtype:(int)arg1;
- (id)giveCardId;
- (void)setGiveCardId:(id)arg1;
- (id)receiveUrl;
- (void)setReceiveUrl:(id)arg1;
- (void).cxx_destruct;
@end

