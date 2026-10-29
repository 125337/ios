@interface WAMainFrameChatBotSugButton : UIButton
{
    BOOL _loading; // +0x8
    double _maxWidth; // +0x10
    id /* block */ _onTapHandler; // +0x18
    id /* block */ _onLongPressHandler; // +0x20
    long long _style; // +0x28
    UIView * _stateOverlay; // +0x30
    MMUIActivityIndicatorView * _loadingIndicator; // +0x38
    UILabel * _textLabel; // +0x40
    UIImageView * _iconImageView; // +0x48
}
+ (double)heightForStyle:(long long)arg1;
+ (double)hugWidthForText:(id)arg1 style:(long long)arg2;
+ (double)hugWidthForText:(id)arg1;
+ (double)defaultHeight;
+ (id)sugSectionRowIconImage;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (double)currentTextWidth;
- (double)hugWidthForCurrentText;
- (CGSize)intrinsicContentSize;
- (void)setMaxWidth:(double)arg1;
- (void)refreshWidthForCurrentText;
- (void)setupAppearance;
- (void)layoutSubviews;
- (BOOL)isLoading;
- (void)setLoading:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateDisplayText:(id)arg1;
- (void)onButtonTapped;
- (void)onButtonLongPressed:(id)arg1;
- (double)maxWidth;
- (id /* block */)onTapHandler;
- (void)setOnTapHandler:(id /* block */)arg1;
- (id /* block */)onLongPressHandler;
- (void)setOnLongPressHandler:(id /* block */)arg1;
- (long long)style;
- (void)setStyle:(long long)arg1;
- (id)stateOverlay;
- (void)setStateOverlay:(id)arg1;
- (id)loadingIndicator;
- (void)setLoadingIndicator:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (void).cxx_destruct;
@end
