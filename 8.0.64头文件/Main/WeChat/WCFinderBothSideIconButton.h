@interface WCFinderBothSideIconButton : WCFinderMaskButton <WCFinderFlexViewLayoutHash>
{
    BOOL _revertLayout; // +0x8
    BOOL _hiddenImageView; // +0x9
    UIImageView * _leadingIcon; // +0x10
    NSString * _leadingIconUrl; // +0x18
    double _leadingIconPadding; // +0x20
    NSString * _mainIconUrl; // +0x28
    double _iconPadding; // +0x30
    unsigned long long _textContentHash; // +0x38
    CGSize _leadingIconSize; // +0x40
    CGSize _tailIconSize; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (id)leadingIcon;
- (void)setTailIconSize:(CGSize)arg1;
- (void)setRevertLayout:(BOOL)arg1;
- (void)updateLayout;
- (void)setLeadingIconSize:(CGSize)arg1;
- (void)setLeadingIconUrl:(id)arg1;
- (void)setMainIconUrl:(id)arg1;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)titleSizeThatFit:(CGSize)arg1;
- (unsigned long long)layoutDepHashValue;
- (void)setLeadingIcon:(id)arg1;
- (id)leadingIconUrl;
- (double)leadingIconPadding;
- (void)setLeadingIconPadding:(double)arg1;
- (id)mainIconUrl;
- (CGSize)leadingIconSize;
- (CGSize)tailIconSize;
- (double)iconPadding;
- (void)setIconPadding:(double)arg1;
- (BOOL)revertLayout;
- (BOOL)hiddenImageView;
- (void)setHiddenImageView:(BOOL)arg1;
- (unsigned long long)textContentHash;
- (void)setTextContentHash:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
