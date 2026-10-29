@interface WCAdRandomSelectCardItemInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _imageUrl; // +0x8
    NSString * _cardId; // +0x10
    double _cardWidth; // +0x18
    double _cardHeight; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (double)cardWidth;
- (void)setCardWidth:(double)arg1;
- (double)cardHeight;
- (void)setCardHeight:(double)arg1;
- (void).cxx_destruct;
@end
