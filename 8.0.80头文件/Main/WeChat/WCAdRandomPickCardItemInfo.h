@interface WCAdRandomPickCardItemInfo : NSObject <NSCoding>
{
    NSString * _imageUrl; // +0x8
    NSString * _title; // +0x10
    NSString * _cardId; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (void).cxx_destruct;
@end
