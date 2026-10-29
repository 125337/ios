@interface WCADCanvasEggAnimationSimpleTwist : WCADCanvasEggAnimationElementInfo
{
    BOOL _clockwise; // +0xa
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)fromAdInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)clockwise;
- (void)setClockwise:(BOOL)arg1;
@end

