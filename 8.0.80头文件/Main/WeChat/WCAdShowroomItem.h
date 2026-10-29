@interface WCAdShowroomItem : NSObject <NSCoding, WCAdParserProtocol>
{
    BOOL _hasReportIndex; // +0x8
    BOOL _needClickHighlight; // +0x9
    double _marginLeft; // +0x10
    double _marginTop; // +0x18
    double _width; // +0x20
    double _height; // +0x28
    double _cornerRadius; // +0x30
    WCMediaItem * _mediaItem; // +0x38
    long long _reportIndex; // +0x40
    WCAdCardBtnInfo * _clickActionInfo; // +0x48
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (BOOL)hasClickAction;
- (double)marginLeft;
- (void)setMarginLeft:(double)arg1;
- (double)marginTop;
- (void)setMarginTop:(double)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (long long)reportIndex;
- (void)setReportIndex:(long long)arg1;
- (BOOL)hasReportIndex;
- (void)setHasReportIndex:(BOOL)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (BOOL)needClickHighlight;
- (void)setNeedClickHighlight:(BOOL)arg1;
- (void).cxx_destruct;
@end
