@interface WCCanvasComponentHalfRandomCardItemInfo : MMObject <NSCoding>
{
    BOOL _isDefaultCard; // +0x8
    NSString * _cardId; // +0x10
    NSString * _preTitle; // +0x18
    NSString * _title; // +0x20
    NSString * _desc; // +0x28
    NSString * _preTitleTextColor; // +0x30
    WCCanvasComponentItem * _contentItem; // +0x38
    WCCanvasComponentItem * _buttonItem; // +0x40
    WCCanvasComponentItem * _repeatPickButtonItem; // +0x48
    long long _bulletCommentsType; // +0x50
}
+ (id)fromXML:(XmlReaderNode_t *)arg1 withSizeType:(long long)arg2 basicWidth:(int)arg3 basicRootFontSize:(int)arg4 widthRoundingType:(long long)arg5 heightRoundingType:(long long)arg6;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)isSpecialRedEnvelopeItem;
- (BOOL)canRepeatPick;
- (BOOL)isDefaultCard;
- (void)setIsDefaultCard:(BOOL)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)preTitle;
- (void)setPreTitle:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)preTitleTextColor;
- (void)setPreTitleTextColor:(id)arg1;
- (id)contentItem;
- (void)setContentItem:(id)arg1;
- (id)buttonItem;
- (void)setButtonItem:(id)arg1;
- (id)repeatPickButtonItem;
- (void)setRepeatPickButtonItem:(id)arg1;
- (long long)bulletCommentsType;
- (void)setBulletCommentsType:(long long)arg1;
- (void).cxx_destruct;
@end
