@interface WCADCanvasEggAnimationElementInfo : NSObject <NSCoding>
{
    BOOL _shouldUpdateCardId; // +0x8
    BOOL _shouldShowAnimationFromShared; // +0x9
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
+ (id)fromAdInfo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)shouldUpdateCardId;
- (void)setShouldUpdateCardId:(BOOL)arg1;
- (BOOL)shouldShowAnimationFromShared;
- (void)setShouldShowAnimationFromShared:(BOOL)arg1;
@end

