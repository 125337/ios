@interface WCAdHotDiscussedBarInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _labelText; // +0x8
    WCAdColorInfo * _labelTextColor; // +0x10
    NSString * _title; // +0x18
    WCAdColorInfo * _titleColor; // +0x20
    NSString * _numberDefaultTitle; // +0x28
    NSString * _numberRequestParams; // +0x30
    NSString * _numberCurrentTitle; // +0x38
    WCAdColorInfo * _numberTitleColor; // +0x40
    NSArray * _headImageList; // +0x48
    WCAdCardBtnInfo * _jumpLinkActionInfo; // +0x50
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)fetchLabelTextColor;
- (id)fetchTitleColor;
- (id)fetchNumberTitleColor;
- (id)labelText;
- (void)setLabelText:(id)arg1;
- (id)labelTextColor;
- (void)setLabelTextColor:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)numberDefaultTitle;
- (void)setNumberDefaultTitle:(id)arg1;
- (id)numberRequestParams;
- (void)setNumberRequestParams:(id)arg1;
- (id)numberCurrentTitle;
- (void)setNumberCurrentTitle:(id)arg1;
- (id)numberTitleColor;
- (void)setNumberTitleColor:(id)arg1;
- (id)headImageList;
- (void)setHeadImageList:(id)arg1;
- (id)jumpLinkActionInfo;
- (void)setJumpLinkActionInfo:(id)arg1;
- (void).cxx_destruct;
@end

