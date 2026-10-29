@interface WCAdPreloadConfigInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _forbidTimelinePreload; // +0x8
    BOOL _forbidCanvasPreload; // +0x9
    int _timelinePreloadRatio; // +0xc
    int _canvasPreloadRatio; // +0x10
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithConfig:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)parseConfig:(id)arg1;
- (BOOL)isTimelinePreloadRatioValid;
- (BOOL)isCanvasPreloadRatioValid;
- (BOOL)forbidTimelinePreload;
- (void)setForbidTimelinePreload:(BOOL)arg1;
- (int)timelinePreloadRatio;
- (void)setTimelinePreloadRatio:(int)arg1;
- (BOOL)forbidCanvasPreload;
- (void)setForbidCanvasPreload:(BOOL)arg1;
- (int)canvasPreloadRatio;
- (void)setCanvasPreloadRatio:(int)arg1;
@end

