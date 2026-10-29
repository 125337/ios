@interface WCADCanvasEggAnimationInfo : NSObject <NSCoding>
{
    long long _animationType; // +0x8
    WCADCanvasEggAnimationElementInfo * _animationElementInfo; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)safeGetAnimationElementInfoForType:(long long)arg1;
- (BOOL)isValid;
- (BOOL)shouldUpdateCardId;
- (BOOL)shouldShowAnimationFromShared;
- (long long)animationType;
- (void)setAnimationType:(long long)arg1;
- (id)animationElementInfo;
- (void)setAnimationElementInfo:(id)arg1;
- (void).cxx_destruct;
@end

