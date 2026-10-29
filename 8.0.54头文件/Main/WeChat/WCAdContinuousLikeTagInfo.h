@interface WCAdContinuousLikeTagInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _numberRequestId; // +0x8
    NSString * _numberDefaultTitle; // +0x10
    NSString * _numberDesc; // +0x18
    NSString * _numberCurrentTitle; // +0x20
    NSString * _continuousLikeTitle; // +0x28
    NSString * _continuousLikeTitleColorLight; // +0x30
    NSString * _continuousLikeTitleColorDark; // +0x38
    NSString * _jumpLinkTitle; // +0x40
    NSString * _jumpLinkIconLight; // +0x48
    NSString * _jumpLinkIconDark; // +0x50
    WCAdCardBtnInfo * _jumpLinkActionInfo; // +0x58
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)fetchContinuousLikeTitleColor;
- (id)fetchJumpLinkIconUrl;
- (id)numberRequestId;
- (void)setNumberRequestId:(id)arg1;
- (id)numberDefaultTitle;
- (void)setNumberDefaultTitle:(id)arg1;
- (id)numberDesc;
- (void)setNumberDesc:(id)arg1;
- (id)numberCurrentTitle;
- (void)setNumberCurrentTitle:(id)arg1;
- (id)continuousLikeTitle;
- (void)setContinuousLikeTitle:(id)arg1;
- (id)continuousLikeTitleColorLight;
- (void)setContinuousLikeTitleColorLight:(id)arg1;
- (id)continuousLikeTitleColorDark;
- (void)setContinuousLikeTitleColorDark:(id)arg1;
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

