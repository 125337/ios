@interface WCAdFireworkCheerTopLikeAreaInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    WCAdPagInfo * _topLikePag; // +0x8
    NSString * _topLikeTitle; // +0x10
    NSString * _topLikeBackgroundImage; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)topLikePag;
- (void)setTopLikePag:(id)arg1;
- (id)topLikeTitle;
- (void)setTopLikeTitle:(id)arg1;
- (id)topLikeBackgroundImage;
- (void)setTopLikeBackgroundImage:(id)arg1;
- (void).cxx_destruct;
@end

