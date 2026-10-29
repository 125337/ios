@interface WCADCanvasEggAnimationDropCard : WCADCanvasEggAnimationElementInfo
{
    NSArray * _transitionImgs; // +0x10
    NSString * _transitionAnimationUrl; // +0x18
    NSString * _transitionAnimationMd5; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)fromAdInfo:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)transitionImgs;
- (void)setTransitionImgs:(id)arg1;
- (id)transitionAnimationUrl;
- (void)setTransitionAnimationUrl:(id)arg1;
- (id)transitionAnimationMd5;
- (void)setTransitionAnimationMd5:(id)arg1;
- (void).cxx_destruct;
@end

