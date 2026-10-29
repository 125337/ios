@interface WCAdCombineFollowInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    int _allFollowedJumpType; // +0x8
    int _allFollowSuccessJumpType; // +0xc
    NSString * _headTitle; // +0x10
    NSString * _headImageUrl; // +0x18
    WCAdCombineFollowBrandInfo * _brandFollowInfo; // +0x20
    WCAdCombineFollowFinderInfo * _finderFollowInfo; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)headTitle;
- (void)setHeadTitle:(id)arg1;
- (id)headImageUrl;
- (void)setHeadImageUrl:(id)arg1;
- (int)allFollowedJumpType;
- (void)setAllFollowedJumpType:(int)arg1;
- (int)allFollowSuccessJumpType;
- (void)setAllFollowSuccessJumpType:(int)arg1;
- (id)brandFollowInfo;
- (void)setBrandFollowInfo:(id)arg1;
- (id)finderFollowInfo;
- (void)setFinderFollowInfo:(id)arg1;
- (void).cxx_destruct;
@end
