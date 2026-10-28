@interface WCAdHighlightTagInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    WCAdColorInfo * _titleColor; // +0x8
    WCAdColorInfo * _numberTitleColor; // +0x10
    NSString * _title; // +0x18
    NSString * _numberRequestId; // +0x20
    NSString * _numberDefaultTitle; // +0x28
    NSString * _numberDesc; // +0x30
    NSString * _numberCurrentTitle; // +0x38
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)fetchTitleColor;
- (id)fetchNumberTitleColor;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)numberTitleColor;
- (void)setNumberTitleColor:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)numberRequestId;
- (void)setNumberRequestId:(id)arg1;
- (id)numberDefaultTitle;
- (void)setNumberDefaultTitle:(id)arg1;
- (id)numberDesc;
- (void)setNumberDesc:(id)arg1;
- (id)numberCurrentTitle;
- (void)setNumberCurrentTitle:(id)arg1;
- (void).cxx_destruct;
@end
