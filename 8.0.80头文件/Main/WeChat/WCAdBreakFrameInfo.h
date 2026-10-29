@interface WCAdBreakFrameInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    int _mediaType; // +0x8
    WCAdBreakFrameAlphaVideoInfo * _alphaVideoInfo; // +0x10
    WCAdBreakFrameClickInfo * _clickInfo; // +0x18
    NSArray * _clickInfoList; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (int)mediaType;
- (void)setMediaType:(int)arg1;
- (id)alphaVideoInfo;
- (void)setAlphaVideoInfo:(id)arg1;
- (id)clickInfo;
- (void)setClickInfo:(id)arg1;
- (id)clickInfoList;
- (void)setClickInfoList:(id)arg1;
- (void).cxx_destruct;
@end
