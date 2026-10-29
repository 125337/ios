@interface WNSaveImageConfiguration : NSObject <NSCopying>
{
    BOOL _isShowAuthor; // +0x8
    BOOL _isShowDate; // +0x9
    long long _imageType; // +0x10
    UIColor * _backgroundColor; // +0x18
    long long _textAlignment; // +0x20
    double _visibleHeight; // +0x28
    double _squareWidth; // +0x30
    UIFont * _longImageFont; // +0x38
    UIFont * _squareImageFont; // +0x40
    double _scale; // +0x48
    UIColor * _textColor; // +0x50
    UIColor * _logoColor; // +0x58
    UIColor * _quoteColor; // +0x60
    unsigned long long _colorType; // +0x68
    NSMutableArray * _arrSelectedIndex; // +0x70
}
- (id)initSaveImageConfigWithType:(long long)arg1 andTextAlignment:(long long)arg2 andVisibleHeight:(double)arg3 andSquareWidth:(double)arg4 isDarkMode:(BOOL)arg5;
- (id)copyWithZone:(_NSZone *)arg1;
- (long long)imageType;
- (void)setImageType:(long long)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;
- (double)visibleHeight;
- (void)setVisibleHeight:(double)arg1;
- (double)squareWidth;
- (void)setSquareWidth:(double)arg1;
- (id)longImageFont;
- (void)setLongImageFont:(id)arg1;
- (id)squareImageFont;
- (void)setSquareImageFont:(id)arg1;
- (double)scale;
- (void)setScale:(double)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)logoColor;
- (void)setLogoColor:(id)arg1;
- (id)quoteColor;
- (void)setQuoteColor:(id)arg1;
- (unsigned long long)colorType;
- (void)setColorType:(unsigned long long)arg1;
- (id)arrSelectedIndex;
- (void)setArrSelectedIndex:(id)arg1;
- (BOOL)isShowAuthor;
- (void)setIsShowAuthor:(BOOL)arg1;
- (BOOL)isShowDate;
- (void)setIsShowDate:(BOOL)arg1;
- (void).cxx_destruct;
@end
