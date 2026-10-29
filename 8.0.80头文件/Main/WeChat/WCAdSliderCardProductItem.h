@interface WCAdSliderCardProductItem : NSObject <NSCoding, WCAdParserProtocol>
{
    NSString * _iconUrl; // +0x8
    NSString * _title; // +0x10
    NSString * _actionBarTitle; // +0x18
    WCAdColorInfo * _actionBarTitleColor; // +0x20
    WCAdColorInfo * _highlightColor; // +0x28
    double _timeInterval; // +0x30
    WCAdCardBtnInfo * _clickActionInfo; // +0x38
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)fetchHighlightColor;
- (id)fetchActionBarTitleColor;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)actionBarTitle;
- (void)setActionBarTitle:(id)arg1;
- (id)actionBarTitleColor;
- (void)setActionBarTitleColor:(id)arg1;
- (id)highlightColor;
- (void)setHighlightColor:(id)arg1;
- (double)timeInterval;
- (void)setTimeInterval:(double)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
