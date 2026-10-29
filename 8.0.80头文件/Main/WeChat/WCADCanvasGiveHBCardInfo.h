@interface WCADCanvasGiveHBCardInfo : NSObject <NSCoding>
{
    int _subCardType; // +0x8
    unsigned int _shareTime; // +0xc
    NSString * _twistCardId; // +0x10
    NSString * _giveCardId; // +0x18
    NSString * _senderUserName; // +0x20
    NSString * _senderNickName; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)twistCardId;
- (void)setTwistCardId:(id)arg1;
- (id)giveCardId;
- (void)setGiveCardId:(id)arg1;
- (int)subCardType;
- (void)setSubCardType:(int)arg1;
- (id)senderUserName;
- (void)setSenderUserName:(id)arg1;
- (id)senderNickName;
- (void)setSenderNickName:(id)arg1;
- (unsigned int)shareTime;
- (void)setShareTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end
