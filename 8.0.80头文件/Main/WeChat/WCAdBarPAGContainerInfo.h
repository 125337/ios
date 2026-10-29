@interface WCAdBarPAGContainerInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    double _containerWidth; // +0x8
    double _containerHeight; // +0x10
    double _bottomOffset; // +0x18
    WCAdPagInfo * _animationPag; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (double)containerHeight;
- (void)setContainerHeight:(double)arg1;
- (double)bottomOffset;
- (void)setBottomOffset:(double)arg1;
- (id)animationPag;
- (void)setAnimationPag:(id)arg1;
- (void).cxx_destruct;
@end
