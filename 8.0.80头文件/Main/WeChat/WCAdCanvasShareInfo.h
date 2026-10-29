@interface WCAdCanvasShareInfo : NSObject <WCAdParserProtocol>
{
    NSString * _canvasId; // +0x8
    NSString * _uxInfo; // +0x10
    NSString * _canvasDynamicInfo; // +0x18
    NSString * _canvasDynamicExtInfo; // +0x20
    NSString * _canvasDynamicLoadExtInfo; // +0x28
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (BOOL)isValid;
- (id)canvasId;
- (void)setCanvasId:(id)arg1;
- (id)uxInfo;
- (void)setUxInfo:(id)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (id)canvasDynamicExtInfo;
- (void)setCanvasDynamicExtInfo:(id)arg1;
- (id)canvasDynamicLoadExtInfo;
- (void)setCanvasDynamicLoadExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
