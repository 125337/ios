@interface WebSearchTagView : UIView
{
    BOOL _tagNoBg; // +0x8
    BOOL _tagPostfixIcon; // +0x9
    UIImageView * _iconImageView; // +0x10
    UILabel * _titleLabel; // +0x18
    UIView * _descSeparator; // +0x20
    UILabel * _descLabel; // +0x28
    UIStackView * _contentStack; // +0x30
    long long _tagType; // +0x38
    NSString * _tagTitle; // +0x40
    NSString * _tagDesc; // +0x48
    NSString * _tagIconUrl; // +0x50
    NSString * _tagIconName; // +0x58
    double _tagIconSize; // +0x60
    double _tagFontSize; // +0x68
    UIColor * _tagTextColor; // +0x70
    double _tagFontWeight; // +0x78
    WebSearchTagStyle * _tagStyle; // +0x80
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setupSubviews;
- (void)configureWithJSON:(id)arg1;
- (void)configureWithType:(long long)arg1 title:(id)arg2 noBg:(BOOL)arg3;
- (void)configureWithType:(long long)arg1 title:(id)arg2 noBg:(BOOL)arg3 iconUrl:(id)arg4 iconName:(id)arg5;
- (void)configureWithType:(long long)arg1 title:(id)arg2 desc:(id)arg3 noBg:(BOOL)arg4 iconUrl:(id)arg5 iconName:(id)arg6 iconSize:(double)arg7 postfixIcon:(BOOL)arg8 fontSize:(double)arg9 textColor:(id)arg10 fontWeight:(double)arg11;
- (CGSize)intrinsicContentSize;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)applyStyle;
- (void)renderContent;
- (BOOL)loadIcon;
- (double)calculateWidth;
- (double)calculateHeight;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descSeparator;
- (void)setDescSeparator:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)contentStack;
- (void)setContentStack:(id)arg1;
- (long long)tagType;
- (void)setTagType:(long long)arg1;
- (id)tagTitle;
- (void)setTagTitle:(id)arg1;
- (id)tagDesc;
- (void)setTagDesc:(id)arg1;
- (BOOL)tagNoBg;
- (void)setTagNoBg:(BOOL)arg1;
- (id)tagIconUrl;
- (void)setTagIconUrl:(id)arg1;
- (id)tagIconName;
- (void)setTagIconName:(id)arg1;
- (double)tagIconSize;
- (void)setTagIconSize:(double)arg1;
- (BOOL)tagPostfixIcon;
- (void)setTagPostfixIcon:(BOOL)arg1;
- (double)tagFontSize;
- (void)setTagFontSize:(double)arg1;
- (id)tagTextColor;
- (void)setTagTextColor:(id)arg1;
- (double)tagFontWeight;
- (void)setTagFontWeight:(double)arg1;
- (id)tagStyle;
- (void)setTagStyle:(id)arg1;
- (void).cxx_destruct;
@end
