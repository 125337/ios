@interface CardTicketItem : MMObject <PBCoding, NSCopying>
{
    BOOL _isRecommend; // +0x8
    unsigned int _fromScene; // +0xc
    unsigned int _cardType; // +0x10
    unsigned int _cardShareFrom; // +0x14
    NSString * _fromUserName; // +0x18
    NSString * _cardTypeName; // +0x20
    NSString * _cardId; // +0x28
    NSString * _color; // +0x30
    NSString * _brandName; // +0x38
    NSString * _cardExt; // +0x40
    NSString * _recommendCardId; // +0x48
}
+ (void)PBArrayAdd_fromUserName;
+ (void)PBArrayAdd_fromScene;
+ (void)PBArrayAdd_cardType;
+ (void)PBArrayAdd_cardId;
+ (void)PBArrayAdd_color;
+ (void)PBArrayAdd_cardTypeName;
+ (void)PBArrayAdd_brandName;
+ (void)PBArrayAdd_cardExt;
+ (void)PBArrayAdd_cardShareFrom;
+ (void)PBArrayAdd_isRecommend;
+ (void)PBArrayAdd_recommendCardId;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)fromUserName;
- (void)setFromUserName:(id)arg1;
- (unsigned int)fromScene;
- (void)setFromScene:(unsigned int)arg1;
- (unsigned int)cardType;
- (void)setCardType:(unsigned int)arg1;
- (id)cardTypeName;
- (void)setCardTypeName:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)color;
- (void)setColor:(id)arg1;
- (id)brandName;
- (void)setBrandName:(id)arg1;
- (id)cardExt;
- (void)setCardExt:(id)arg1;
- (unsigned int)cardShareFrom;
- (void)setCardShareFrom:(unsigned int)arg1;
- (BOOL)isRecommend;
- (void)setIsRecommend:(BOOL)arg1;
- (id)recommendCardId;
- (void)setRecommendCardId:(id)arg1;
- (void).cxx_destruct;
@end
