@interface WCAdBarSingleProductInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    double _containerWidth; // +0x8
    double _containerHeight; // +0x10
    double _bottomOffset; // +0x18
    WCAdColorInfo * _productBarBackgroundColor; // +0x20
    NSString * _actionBtnTitle; // +0x28
    WCAdColorInfo * _actionBtnTitleColor; // +0x30
    NSString * _brandImageUrl; // +0x38
    WCAdColorInfo * _brandColor; // +0x40
    WCAdCardBtnInfo * _clickActionInfo; // +0x48
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (double)containerHeight;
- (void)setContainerHeight:(double)arg1;
- (double)bottomOffset;
- (void)setBottomOffset:(double)arg1;
- (id)productBarBackgroundColor;
- (void)setProductBarBackgroundColor:(id)arg1;
- (id)actionBtnTitle;
- (void)setActionBtnTitle:(id)arg1;
- (id)actionBtnTitleColor;
- (void)setActionBtnTitleColor:(id)arg1;
- (id)brandImageUrl;
- (void)setBrandImageUrl:(id)arg1;
- (id)brandColor;
- (void)setBrandColor:(id)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
