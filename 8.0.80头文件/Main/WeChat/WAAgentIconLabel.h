@interface WAAgentIconLabel : UIView
{
    BOOL _useDarkMode; // +0x8
    BOOL _isLoading; // +0x9
    long long _numberOfLines; // +0x10
    UIFont * _font; // +0x18
    double _maxWidth; // +0x20
    MMUILabel * _textLabel; // +0x28
    UIImageView * _iconImageView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 useDarkMode:(BOOL)arg2;
- (void)initSubviews;
- (id)text;
- (void)setNumberOfLines:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setLabelTextIconColor:(id)arg1 iconSize:(double)arg2;
- (void)setIconLoading:(BOOL)arg1;
- (void)setIconHidden:(BOOL)arg1;
- (void)layoutSubviews;
- (void)startRotationAnimation;
- (void)stopRotationAnimation;
- (CGPoint)midPointOfFirstLine:(id)arg1;
- (id)colorInLightMode:(id)arg1 DarkMode:(id)arg2;
- (long long)numberOfLines;
- (id)font;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (BOOL)useDarkMode;
- (void)setUseDarkMode:(BOOL)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (void).cxx_destruct;
@end
