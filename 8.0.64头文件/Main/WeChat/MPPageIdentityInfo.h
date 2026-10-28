@interface MPPageIdentityInfo : NSObject <NSCopying, PBCoding>
{
    unsigned int _itemShowType; // +0x8
    NSString * _bizId; // +0x10
    NSString * _mid; // +0x18
    NSString * _idx; // +0x20
}
+ (void)PBArrayAdd_bizId;
+ (void)PBArrayAdd_mid;
+ (void)PBArrayAdd_idx;
+ (void)PBArrayAdd_itemShowType;
+ (void)initialize;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toXML;
- (id)genIdentifierString;
- (id)description;
- (id)bizId;
- (void)setBizId:(id)arg1;
- (id)mid;
- (void)setMid:(id)arg1;
- (id)idx;
- (void)setIdx:(id)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
