@interface WCCanvasRandomLayoutTransitionImgInfo : MMObject <NSCoding>
{
    NSString * _transitionImgUrl; // +0x8
    NSString * _transitionColor; // +0x10
    double _transitionColorAlpha; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)transitionImgUrl;
- (void)setTransitionImgUrl:(id)arg1;
- (id)transitionColor;
- (void)setTransitionColor:(id)arg1;
- (double)transitionColorAlpha;
- (void)setTransitionColorAlpha:(double)arg1;
- (void).cxx_destruct;
@end
