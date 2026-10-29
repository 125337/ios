@interface WCADCanvasEggAnimationHugeDiskImproved : WCADCanvasEggAnimationElementInfo
{
    NSString * _transitionImg; // +0x10
    NSString * _transitionColor; // +0x18
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)fromAdInfo:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)transitionImg;
- (void)setTransitionImg:(id)arg1;
- (id)transitionColor;
- (void)setTransitionColor:(id)arg1;
- (void).cxx_destruct;
@end

