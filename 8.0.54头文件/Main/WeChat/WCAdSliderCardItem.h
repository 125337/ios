@interface WCAdSliderCardItem : WCAdSliderCardBaseItem <NSCoding>
{
    unsigned int _markMaxAlpha; // +0x8
    NSString * _title; // +0x10
    NSString * _desc; // +0x18
    NSString * _backBorderImage; // +0x20
    NSString * _frontBorderImage; // +0x28
    WCAdCardBtnInfo * _clickActionInfo; // +0x30
    WCAdSliderCardButton * _buttonInfo; // +0x38
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)fetchCardAdLogoType;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (unsigned int)markMaxAlpha;
- (void)setMarkMaxAlpha:(unsigned int)arg1;
- (id)backBorderImage;
- (void)setBackBorderImage:(id)arg1;
- (id)frontBorderImage;
- (void)setFrontBorderImage:(id)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (id)buttonInfo;
- (void)setButtonInfo:(id)arg1;
- (void).cxx_destruct;
@end

