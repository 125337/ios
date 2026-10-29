@interface WCAdHotZoneRect : NSObject <NSCoding, WCAdParserProtocol>
{
    double _width; // +0x8
    double _height; // +0x10
    double _marginLeft; // +0x18
    double _marginTop; // +0x20
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (double)marginLeft;
- (void)setMarginLeft:(double)arg1;
- (double)marginTop;
- (void)setMarginTop:(double)arg1;
@end
