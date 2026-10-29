@interface WCCanvasComponentRedEnvelopSubCardInfo : MMObject <NSCoding, WCAdParserProtocol>
{
    int _subType; // +0x8
    unsigned int _expireTime; // +0xc
    NSString * _headline; // +0x10
    NSString * _desc; // +0x18
    NSString * _btnTitle; // +0x20
    NSString * _btnTitleAfterAction; // +0x28
    NSString * _btnTitleExpired; // +0x30
    NSString * _btnTitleGetByOther; // +0x38
    NSString * _decorationTitle; // +0x40
    NSMutableDictionary * _subCardsInfo; // +0x48
}
+ (id)parseSubCardsFromXML:(XmlReaderNode_t *)arg1;
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)subType;
- (void)setSubType:(int)arg1;
- (id)headline;
- (void)setHeadline:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (id)btnTitle;
- (void)setBtnTitle:(id)arg1;
- (id)btnTitleAfterAction;
- (void)setBtnTitleAfterAction:(id)arg1;
- (id)btnTitleExpired;
- (void)setBtnTitleExpired:(id)arg1;
- (id)btnTitleGetByOther;
- (void)setBtnTitleGetByOther:(id)arg1;
- (id)decorationTitle;
- (void)setDecorationTitle:(id)arg1;
- (unsigned int)expireTime;
- (void)setExpireTime:(unsigned int)arg1;
- (id)subCardsInfo;
- (void)setSubCardsInfo:(id)arg1;
- (void).cxx_destruct;
@end

