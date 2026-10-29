@interface CBTCoopV2AsstBoardCommonCellContentView : UIView
{
    MMWebImageView * _imageView; // +0x8
    MMUILabel * _titleLabel; // +0x10
    MMUILabel * _subtitleLabel; // +0x18
    UIView * _leadingView; // +0x20
    UIView * _accessoryView; // +0x28
    double _contentInset; // +0x30
    double _leadingSize; // +0x38
    double _leadingTextGap; // +0x40
    double _accessorySize; // +0x48
    double _accessoryRightInset; // +0x50
    double _textAccessoryGap; // +0x58
    double _titleLineHeight; // +0x60
    double _subtitleLineHeight; // +0x68
}
+ (double)titleFontSize;
+ (double)subtitleFontSize;
+ (double)dynamicFontSizeForFontSize:(double)arg1;
+ (double)dynamicTitleFontSize;
+ (double)dynamicSubtitleFontSize;
+ (double)lineHeightScale;
+ (id)fontWithSize:(double)arg1;
+ (id)titleFont;
+ (id)subtitleFont;
+ (double)lineHeightForFontSize:(double)arg1;
+ (double)titleLineHeight;
+ (double)subtitleLineHeight;
+ (double)titleSubtitleContentHeight;
+ (double)contentHeightWithVerticalPadding:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupDefaults;
- (id)effectiveLeadingView;
- (void)setLeadingView:(id)arg1;
- (void)setAccessoryView:(id)arg1;
- (void)layoutSubviews;
- (void)applyTitle:(id)arg1 subtitle:(id)arg2 titleColor:(id)arg3 subtitleColor:(id)arg4;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)leadingView;
- (id)accessoryView;
- (double)contentInset;
- (void)setContentInset:(double)arg1;
- (double)leadingSize;
- (void)setLeadingSize:(double)arg1;
- (double)leadingTextGap;
- (void)setLeadingTextGap:(double)arg1;
- (double)accessorySize;
- (void)setAccessorySize:(double)arg1;
- (double)accessoryRightInset;
- (void)setAccessoryRightInset:(double)arg1;
- (double)textAccessoryGap;
- (void)setTextAccessoryGap:(double)arg1;
- (double)titleLineHeight;
- (void)setTitleLineHeight:(double)arg1;
- (double)subtitleLineHeight;
- (void)setSubtitleLineHeight:(double)arg1;
- (void).cxx_destruct;
@end
