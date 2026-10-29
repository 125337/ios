@interface WCAdRockPaperScissorsInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    double _containerWidth; // +0x8
    double _containerHeight; // +0x10
    WCAdPagInfo * _animationPagInfo; // +0x18
    WCAdPagInfo * _animationPagDarkInfo; // +0x20
    NSString * _titleTxt; // +0x28
    WCAdColorInfo * _titleColor; // +0x30
    NSString * _titleIconUrl; // +0x38
    NSString * _titleDarkIconUrl; // +0x40
    NSString * _numberDefaultTitle; // +0x48
    NSString * _numberCurrentTitle; // +0x50
    NSString * _numberRequestParams; // +0x58
    WCAdPagInfo * _leftDecorPagInfo; // +0x60
    WCAdPagInfo * _rightDecorPagInfo; // +0x68
    WCAdCardBtnInfo * _clickActionInfo; // +0x70
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isValid;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (double)containerHeight;
- (void)setContainerHeight:(double)arg1;
- (id)animationPagInfo;
- (void)setAnimationPagInfo:(id)arg1;
- (id)animationPagDarkInfo;
- (void)setAnimationPagDarkInfo:(id)arg1;
- (id)titleTxt;
- (void)setTitleTxt:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)titleIconUrl;
- (void)setTitleIconUrl:(id)arg1;
- (id)titleDarkIconUrl;
- (void)setTitleDarkIconUrl:(id)arg1;
- (id)numberDefaultTitle;
- (void)setNumberDefaultTitle:(id)arg1;
- (id)numberCurrentTitle;
- (void)setNumberCurrentTitle:(id)arg1;
- (id)numberRequestParams;
- (void)setNumberRequestParams:(id)arg1;
- (id)leftDecorPagInfo;
- (void)setLeftDecorPagInfo:(id)arg1;
- (id)rightDecorPagInfo;
- (void)setRightDecorPagInfo:(id)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
