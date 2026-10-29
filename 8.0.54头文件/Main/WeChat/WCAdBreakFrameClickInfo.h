@interface WCAdBreakFrameClickInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    double _areaLeft; // +0x8
    double _areaTop; // +0x10
    double _areaWidth; // +0x18
    double _areaHeight; // +0x20
    double _clickStartTime; // +0x28
    double _clickEndTime; // +0x30
    WCAdCardBtnInfo * _clickActionInfo; // +0x38
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)areaLeft;
- (void)setAreaLeft:(double)arg1;
- (double)areaTop;
- (void)setAreaTop:(double)arg1;
- (double)areaWidth;
- (void)setAreaWidth:(double)arg1;
- (double)areaHeight;
- (void)setAreaHeight:(double)arg1;
- (double)clickStartTime;
- (void)setClickStartTime:(double)arg1;
- (double)clickEndTime;
- (void)setClickEndTime:(double)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end

