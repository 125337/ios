@interface EcsGiftMsgItem : MMObject <NSCopying>
{
    unsigned int _subtype; // +0x8
    NSDictionary * _giftList; // +0x10
    NSString * _wishMessage; // +0x18
    NSString * _giftMsgId; // +0x20
    EcsGiftJumpInfo * _jumpInfo; // +0x28
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)toXML;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (unsigned int)subtype;
- (void)setSubtype:(unsigned int)arg1;
- (id)giftList;
- (void)setGiftList:(id)arg1;
- (id)wishMessage;
- (void)setWishMessage:(id)arg1;
- (id)giftMsgId;
- (void)setGiftMsgId:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (void).cxx_destruct;
@end

