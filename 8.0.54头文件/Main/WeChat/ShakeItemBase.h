@interface ShakeItemBase : NSObject <PBCoding, NSCoding, NSCopying>
{
    int _itemType; // +0x8
    unsigned int _createTime; // +0xc
    ShakeTvHistoryItem * shakeTvHistoryItem; // +0x10
    ShakeTvItem * _shakeTvItem; // +0x18
    ShakeUrlItem * _shakeUrlItem; // +0x20
    ShakeUserItem * _shakeUsrItem; // +0x28
    ShakePayItem * _shakePayItem; // +0x30
    ShakeProductItem * _shakeProductItem; // +0x38
    ShakeTempSessionItem * _shakeTempSessionItem; // +0x40
    ShakeWeAppItem * _shakeWeAppItem; // +0x48
}
+ (void)PBArrayAdd_itemType;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_shakeTvItem;
+ (void)PBArrayAdd_shakeUrlItem;
+ (void)PBArrayAdd_shakeUsrItem;
+ (void)PBArrayAdd_shakePayItem;
+ (void)PBArrayAdd_shakeProductItem;
+ (void)PBArrayAdd_shakeTempSessionItem;
+ (void)PBArrayAdd_shakeWeAppItem;
+ (void)initialize;
+ (void)parseXml:(XmlReaderNode_t *)arg1 toShakeAction:(id)arg2;
+ (id)parseXmlToShakePay:(XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeTvHistory:(XmlReaderNode_t *)arg1;
+ (id)parseXmlToTempSession:(XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeWeAppItem:(XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeProduct:(XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeUrl:(XmlReaderNode_t *)arg1;
+ (id)parseXmlToShakeUser:(XmlReaderNode_t *)arg1;
+ (id)getShakeItemFromXml:(id)arg1 andType:(int)arg2;
- (id)getPBPropertyTable;
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)shakeTvHistoryItem;
- (void)setShakeTvHistoryItem:(id)arg1;
- (int)itemType;
- (void)setItemType:(int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (id)shakeTvItem;
- (void)setShakeTvItem:(id)arg1;
- (id)shakeUrlItem;
- (void)setShakeUrlItem:(id)arg1;
- (id)shakeUsrItem;
- (void)setShakeUsrItem:(id)arg1;
- (id)shakePayItem;
- (void)setShakePayItem:(id)arg1;
- (id)shakeProductItem;
- (void)setShakeProductItem:(id)arg1;
- (id)shakeTempSessionItem;
- (void)setShakeTempSessionItem:(id)arg1;
- (id)shakeWeAppItem;
- (void)setShakeWeAppItem:(id)arg1;
- (void).cxx_destruct;
@end

