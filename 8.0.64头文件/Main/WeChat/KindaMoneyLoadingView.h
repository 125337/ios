@interface KindaMoneyLoadingView : KindaView <MMKMoneyLoadingView>
{
    float _textSize; // +0xa8
    TimeoutNumber * _timeoutNumber; // +0xb0
    MMDynamicColor * _textColor; // +0xb8
    NSString * _fontName; // +0xc0
    long long _textAlign; // +0xc8
}
- (void)updateTextAlignment:(long long)arg1;
- (id)init;
- (id)getView;
- (void)setCurrencySymbol:(id)arg1;
- (id)getCurrencySymbol;
- (void)setFont:(id)arg1;
- (void)setMoney:(long long)arg1 animated:(BOOL)arg2;
- (void)setTextSize:(float)arg1;
- (float)getTextSize;
- (void)setTextColor:(id)arg1;
- (id)getTextColor;
- (void)setAnimationDuration:(float)arg1;
- (float)getAnimationDuration;
- (void)startLoading;
- (void)stopLoading;
- (void)applyFont;
- (void)setTextSizeNotScaleable:(float)arg1 isScaleable:(BOOL)arg2;
- (void)setGravity:(long long)arg1;
- (id)timeoutNumber;
- (void)setTimeoutNumber:(id)arg1;
- (id)textColor;
- (id)fontName;
- (void)setFontName:(id)arg1;
- (float)textSize;
- (long long)textAlign;
- (void)setTextAlign:(long long)arg1;
- (void).cxx_destruct;
@end
