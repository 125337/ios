@interface WNImageButtonInfo : NSObject
{
    NSString * _buttonName; // +0x8
    UIImage * _buttonImage; // +0x10
    UIFont * _displayFont; // +0x18
    long long _textAlignment; // +0x20
    long long _dataSourceType; // +0x28
    long long _imageType; // +0x30
    UIColor * _textColor; // +0x38
    UIColor * _logoColor; // +0x40
    unsigned long long _colorType; // +0x48
    NSString * _reportName; // +0x50
    double _btnWidth; // +0x58
}
- (id)initInfoWith:(id)arg1 buttonImage:(id)arg2 displayFont:(id)arg3 textAlignment:(long long)arg4 dataSourceType:(long long)arg5;
- (id)initInfoWith:(id)arg1 buttonImage:(id)arg2 displayFont:(id)arg3 textAlignment:(long long)arg4 dataSourceType:(long long)arg5 imageType:(long long)arg6;
- (id)initInfoWith:(id)arg1 buttonImage:(id)arg2 displayFont:(id)arg3 textAlignment:(long long)arg4 dataSourceType:(long long)arg5 imageType:(long long)arg6 textColor:(id)arg7 logoColor:(id)arg8 colorType:(unsigned long long)arg9;
- (id)buttonName;
- (void)setButtonName:(id)arg1;
- (id)buttonImage;
- (void)setButtonImage:(id)arg1;
- (id)displayFont;
- (void)setDisplayFont:(id)arg1;
- (long long)textAlignment;
- (void)setTextAlignment:(long long)arg1;
- (long long)dataSourceType;
- (void)setDataSourceType:(long long)arg1;
- (long long)imageType;
- (void)setImageType:(long long)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)logoColor;
- (void)setLogoColor:(id)arg1;
- (unsigned long long)colorType;
- (void)setColorType:(unsigned long long)arg1;
- (id)reportName;
- (void)setReportName:(id)arg1;
- (double)btnWidth;
- (void)setBtnWidth:(double)arg1;
- (void).cxx_destruct;
@end

