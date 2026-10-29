@interface WCAdDynamicCanvasLoadInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    int _canvasPreloadType; // +0x8
    NSString * _canvasId; // +0x10
    NSString * _canvasDynamicInfo; // +0x18
    NSString * _canvasDynamicExtInfo; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (int)canvasPreloadType;
- (void)setCanvasPreloadType:(int)arg1;
- (id)canvasDynamicExtInfo;
- (void)setCanvasDynamicExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
