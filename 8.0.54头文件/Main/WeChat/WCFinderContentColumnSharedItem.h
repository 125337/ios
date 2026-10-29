@interface WCFinderContentColumnSharedItem : NSObject <YYModel, NSCoding, NSCopying, PBCoding>
{
    NSString * _title; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _iconUrl_1; // +0x18
    NSString * _iconUrl_2; // +0x20
    NSString * _iconUrl_3; // +0x28
    NSData * _cardbuffer; // +0x30
    NSString * _base64Cardbuffer; // +0x38
}
+ (void)PBArrayAdd_title;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_iconUrl_1;
+ (void)PBArrayAdd_iconUrl_2;
+ (void)PBArrayAdd_iconUrl_3;
+ (void)PBArrayAdd_cardbuffer;
+ (void)PBArrayAdd_base64Cardbuffer;
+ (void)initialize;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)parseStringFieldFromXML:(XmlReaderNode_t *)arg1 key:(id)arg2;
- (id)toXML;
- (void)appendXMLNodeForField:(SEL)arg1 toXML:(id)arg2;
- (id)onlyTitleForShared;
- (void)setCardBufferWithoutBase64:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)iconUrl_1;
- (void)setIconUrl_1:(id)arg1;
- (id)iconUrl_2;
- (void)setIconUrl_2:(id)arg1;
- (id)iconUrl_3;
- (void)setIconUrl_3:(id)arg1;
- (id)cardbuffer;
- (void)setCardbuffer:(id)arg1;
- (id)base64Cardbuffer;
- (void)setBase64Cardbuffer:(id)arg1;
- (void).cxx_destruct;
@end

