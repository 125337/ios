@interface WCAdScratchCardInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    WCAdPagInfo * _guidePagInfo; // +0x8
    NSString * _textBeforeScratch; // +0x10
    NSString * _titleAfterScratch; // +0x18
    NSString * _subTitleAfterScratch; // +0x20
    long long _couponType; // +0x28
    NSString * _voucherNumberStr; // +0x30
    NSString * _discountStr; // +0x38
    double _scratchAreaPercent; // +0x40
    double _scratchAreaRadius; // +0x48
    WCAdPagInfo * _scratchBeginPagInfo; // +0x50
    WCAdPagInfo * _scratchSuccessLeftPagInfo; // +0x58
    WCAdPagInfo * _scratchSuccessRightPagInfo; // +0x60
    WCAdCardBtnInfo * _clickActionInfo; // +0x68
    WCAdCardBtnInfo * _scratchSuccessActionInfo; // +0x70
    WCAdColorInfo * _coverBgColor; // +0x78
    WCAdColorInfo * _coverBorderColor; // +0x80
    WCAdColorInfo * _coverTextColor; // +0x88
    WCAdColorInfo * _contentBgColor; // +0x90
    WCAdColorInfo * _contentBorderColor; // +0x98
    WCAdColorInfo * _couponTextColor; // +0xa0
    WCAdColorInfo * _titleColor; // +0xa8
    WCAdColorInfo * _subTitleColor; // +0xb0
    WCAdColorInfo * _buttonBgColor; // +0xb8
    WCAdColorInfo * _buttonTextColor; // +0xc0
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)guidePagInfo;
- (void)setGuidePagInfo:(id)arg1;
- (id)textBeforeScratch;
- (void)setTextBeforeScratch:(id)arg1;
- (id)titleAfterScratch;
- (void)setTitleAfterScratch:(id)arg1;
- (id)subTitleAfterScratch;
- (void)setSubTitleAfterScratch:(id)arg1;
- (long long)couponType;
- (void)setCouponType:(long long)arg1;
- (id)voucherNumberStr;
- (void)setVoucherNumberStr:(id)arg1;
- (id)discountStr;
- (void)setDiscountStr:(id)arg1;
- (double)scratchAreaPercent;
- (void)setScratchAreaPercent:(double)arg1;
- (double)scratchAreaRadius;
- (void)setScratchAreaRadius:(double)arg1;
- (id)scratchBeginPagInfo;
- (void)setScratchBeginPagInfo:(id)arg1;
- (id)scratchSuccessLeftPagInfo;
- (void)setScratchSuccessLeftPagInfo:(id)arg1;
- (id)scratchSuccessRightPagInfo;
- (void)setScratchSuccessRightPagInfo:(id)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (id)scratchSuccessActionInfo;
- (void)setScratchSuccessActionInfo:(id)arg1;
- (id)coverBgColor;
- (void)setCoverBgColor:(id)arg1;
- (id)coverBorderColor;
- (void)setCoverBorderColor:(id)arg1;
- (id)coverTextColor;
- (void)setCoverTextColor:(id)arg1;
- (id)contentBgColor;
- (void)setContentBgColor:(id)arg1;
- (id)contentBorderColor;
- (void)setContentBorderColor:(id)arg1;
- (id)couponTextColor;
- (void)setCouponTextColor:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)subTitleColor;
- (void)setSubTitleColor:(id)arg1;
- (id)buttonBgColor;
- (void)setButtonBgColor:(id)arg1;
- (id)buttonTextColor;
- (void)setButtonTextColor:(id)arg1;
- (void).cxx_destruct;
@end
