@interface WCAdContinuousLikeInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    WCAdContinuousLikeButtonInfo * _buttonInfo; // +0x8
    WCAdContinuousLikeTagInfo * _tagInfo; // +0x10
    WCAdContinuousLikeBannerInfo * _bannerInfo; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)buttonInfo;
- (void)setButtonInfo:(id)arg1;
- (id)tagInfo;
- (void)setTagInfo:(id)arg1;
- (id)bannerInfo;
- (void)setBannerInfo:(id)arg1;
- (void).cxx_destruct;
@end

