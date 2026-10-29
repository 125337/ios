@interface WCCanvasPageItem : NSObject <PBCoding, NSCopying>
{
    NSString * _canvasPageXml; // +0x8
}
+ (void)PBArrayAdd_canvasPageXml;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)fromXML:(XmlReaderNode_t *)arg1;
- (id)toXML;
- (id)canvasPageXml;
- (void)setCanvasPageXml:(id)arg1;
- (void).cxx_destruct;
@end

