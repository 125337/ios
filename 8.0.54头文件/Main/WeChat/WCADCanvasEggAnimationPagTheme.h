@interface WCADCanvasEggAnimationPagTheme : WCADCanvasEggAnimationElementInfo
{
    NSString * _simpleTransitionAnimationUrl; // +0x10
    NSString * _simpleTransitionAnimationMD5; // +0x18
    unsigned long long _animationDuration; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)fromAdInfo:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)isAnimationPagReady;
- (id)simpleTransitionAnimationUrl;
- (void)setSimpleTransitionAnimationUrl:(id)arg1;
- (id)simpleTransitionAnimationMD5;
- (void)setSimpleTransitionAnimationMD5:(id)arg1;
- (unsigned long long)animationDuration;
- (void)setAnimationDuration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

