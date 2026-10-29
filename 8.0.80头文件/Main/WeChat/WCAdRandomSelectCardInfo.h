@interface WCAdRandomSelectCardInfo : NSObject <NSCoding, WCAdParserProtocol>
{
    double _containerWidth; // +0x8
    double _containerHeight; // +0x10
    NSString * _titleTxt; // +0x18
    NSString * _introduceTitle; // +0x20
    NSString * _selectedTitlePrefix; // +0x28
    NSString * _selectedTitleSuffix; // +0x30
    NSString * _doneTitle; // +0x38
    NSString * _numberDefaultTitle; // +0x40
    NSString * _numberCurrentTitle; // +0x48
    NSString * _numberRequestParams; // +0x50
    WCAdColorInfo * _titleColor; // +0x58
    WCAdColorInfo * _descColor; // +0x60
    WCAdRandomSelectCardItemsInfo * _cardsInfo; // +0x68
    WCAdPagInfo * _allDonePagInfo; // +0x70
    WCAdCardBtnInfo * _clickActionInfo; // +0x78
}
+ (id)fromXML:(XmlReaderNode_t *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (double)containerHeight;
- (void)setContainerHeight:(double)arg1;
- (id)titleTxt;
- (void)setTitleTxt:(id)arg1;
- (id)introduceTitle;
- (void)setIntroduceTitle:(id)arg1;
- (id)selectedTitlePrefix;
- (void)setSelectedTitlePrefix:(id)arg1;
- (id)selectedTitleSuffix;
- (void)setSelectedTitleSuffix:(id)arg1;
- (id)doneTitle;
- (void)setDoneTitle:(id)arg1;
- (id)numberDefaultTitle;
- (void)setNumberDefaultTitle:(id)arg1;
- (id)numberCurrentTitle;
- (void)setNumberCurrentTitle:(id)arg1;
- (id)numberRequestParams;
- (void)setNumberRequestParams:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)descColor;
- (void)setDescColor:(id)arg1;
- (id)cardsInfo;
- (void)setCardsInfo:(id)arg1;
- (id)allDonePagInfo;
- (void)setAllDonePagInfo:(id)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
