@interface WCAdTagButtonInfo : NSObject <NSCoding>
{
    int _basicRemWidth; // +0x8
    int _basicRootFontSize; // +0xc
    NSString * _bgImageUrl; // +0x10
    NSString * _bgImageUrlDark; // +0x18
    double _layoutWidth; // +0x20
    double _layoutHeight; // +0x28
    double _cornerRadius; // +0x30
    NSString * _iconUrl; // +0x38
    NSString * _iconUrlDark; // +0x40
    NSString * _title; // +0x48
    NSString * _titleColor; // +0x50
    double _titleColorAlpha; // +0x58
    NSString * _titleColorDark; // +0x60
    double _titleColorAlphaDark; // +0x68
    WCAdCardBtnInfo * _clickActionInfo; // +0x70
}
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)bgImageUrl;
- (void)setBgImageUrl:(id)arg1;
- (id)bgImageUrlDark;
- (void)setBgImageUrlDark:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (double)layoutHeight;
- (void)setLayoutHeight:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (int)basicRemWidth;
- (void)setBasicRemWidth:(int)arg1;
- (int)basicRootFontSize;
- (void)setBasicRootFontSize:(int)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)iconUrlDark;
- (void)setIconUrlDark:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (double)titleColorAlpha;
- (void)setTitleColorAlpha:(double)arg1;
- (id)titleColorDark;
- (void)setTitleColorDark:(id)arg1;
- (double)titleColorAlphaDark;
- (void)setTitleColorAlphaDark:(double)arg1;
- (id)clickActionInfo;
- (void)setClickActionInfo:(id)arg1;
- (void).cxx_destruct;
@end
