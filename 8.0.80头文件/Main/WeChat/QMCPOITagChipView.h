@interface QMCPOITagChipView : UIView
{
    BOOL _isPlainMode; // +0x8
    UIImageView * _leftIconView; // +0x10
    UILabel * _textLabel; // +0x18
    CALayer * _strokeLayer; // +0x20
    double _configuredFontSize; // +0x28
    UIColor * _resolvedStrokeColor; // +0x30
    NSLayoutConstraint * _iconLeading; // +0x38
    NSLayoutConstraint * _iconWidth; // +0x40
    NSLayoutConstraint * _iconHeight; // +0x48
    NSLayoutConstraint * _textLeading; // +0x50
    NSLayoutConstraint * _textTrailing; // +0x58
    NSLayoutConstraint * _textTop; // +0x60
    NSLayoutConstraint * _textBottom; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithItem:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)leftIconView;
- (void)setLeftIconView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)strokeLayer;
- (void)setStrokeLayer:(id)arg1;
- (double)configuredFontSize;
- (void)setConfiguredFontSize:(double)arg1;
- (BOOL)isPlainMode;
- (void)setIsPlainMode:(BOOL)arg1;
- (id)resolvedStrokeColor;
- (void)setResolvedStrokeColor:(id)arg1;
- (id)iconLeading;
- (void)setIconLeading:(id)arg1;
- (id)iconWidth;
- (void)setIconWidth:(id)arg1;
- (id)iconHeight;
- (void)setIconHeight:(id)arg1;
- (id)textLeading;
- (void)setTextLeading:(id)arg1;
- (id)textTrailing;
- (void)setTextTrailing:(id)arg1;
- (id)textTop;
- (void)setTextTop:(id)arg1;
- (id)textBottom;
- (void)setTextBottom:(id)arg1;
- (void).cxx_destruct;
@end
