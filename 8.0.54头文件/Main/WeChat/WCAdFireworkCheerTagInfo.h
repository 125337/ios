@interface WCAdFireworkCheerTagInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _numberRequestId; // +0x8
    NSString * _numberDefaultTitle; // +0x10
    NSString * _numberDesc; // +0x18
    NSString * _numberCurrentTitle; // +0x20
    NSString * _jumpLinkTitle; // +0x28
    NSString * _jumpLinkIconLight; // +0x30
    NSString * _jumpLinkIconDark; // +0x38
    WCAdCardBtnInfo * _jumpLinkActionInfo; // +0x40
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchJumpLinkIconUrl;
- (BOOL)isValid;
- (id)numberRequestId;
- (void)setNumberRequestId:(id)arg1;
- (id)numberDefaultTitle;
- (void)setNumberDefaultTitle:(id)arg1;
- (id)numberDesc;
- (void)setNumberDesc:(id)arg1;
- (id)numberCurrentTitle;
- (void)setNumberCurrentTitle:(id)arg1;
- (id)jumpLinkTitle;
- (void)setJumpLinkTitle:(id)arg1;
- (id)jumpLinkIconLight;
- (void)setJumpLinkIconLight:(id)arg1;
- (id)jumpLinkIconDark;
- (void)setJumpLinkIconDark:(id)arg1;
- (id)jumpLinkActionInfo;
- (void)setJumpLinkActionInfo:(id)arg1;
- (void).cxx_destruct;
@end

