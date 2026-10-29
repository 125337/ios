@interface WCAdInteractionResourceInfo : NSObject <NSCoding>
{
    BOOL _showGradientView; // +0x8
    BOOL _startAnimationManually; // +0x9
    BOOL _showShadow; // +0xa
    BOOL _usingPerformanceMode; // +0xb
    BOOL _needAccelerationData; // +0xc
    BOOL _clockwise; // +0xd
    BOOL _needExposedInfo; // +0xe
    NSString * _resourceId; // +0x10
    unsigned long long _resourceType; // +0x18
    double _cornerRadius; // +0x20
    NSArray * _contentResources; // +0x28
    unsigned long long _gradientViewType; // +0x30
    NSString * _relatedId; // +0x38
    double _alpha; // +0x40
    NSString * _backgroundColor; // +0x48
    double _backgroundColorAlpha; // +0x50
    WCAdInteractionResourceLayoutInfo * _portraitLayoutInfo; // +0x58
    WCAdInteractionResourceLayoutInfo * _landscapeLayoutInfo; // +0x60
    unsigned long long _imageType; // +0x68
    NSString * _resourceUrl; // +0x70
    NSString * _imageName; // +0x78
    NSString * _imageColor; // +0x80
    double _imageColorAlpha; // +0x88
    NSString * _text; // +0x90
    double _fontSize; // +0x98
    unsigned long long _fontWeightType; // +0xa0
    NSString * _textColor; // +0xa8
    double _textColorAlpha; // +0xb0
    unsigned long long _lineCount; // +0xb8
    unsigned long long _alignmentType; // +0xc0
    NSString * _btnBackgroundColor; // +0xc8
    double _btnBackgroundColorAlpha; // +0xd0
    NSString * _btnIconUrl; // +0xd8
    unsigned long long _btnIconSize; // +0xe0
    double _btnIconSpacing; // +0xe8
    double _startAngle; // +0xf0
    double _endAngle; // +0xf8
    Class _reportDataHendlerClass; // +0x100
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)layoutInfo;
- (id)resourceId;
- (void)setResourceId:(id)arg1;
- (unsigned long long)resourceType;
- (void)setResourceType:(unsigned long long)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)contentResources;
- (void)setContentResources:(id)arg1;
- (BOOL)showGradientView;
- (void)setShowGradientView:(BOOL)arg1;
- (unsigned long long)gradientViewType;
- (void)setGradientViewType:(unsigned long long)arg1;
- (id)relatedId;
- (void)setRelatedId:(id)arg1;
- (BOOL)startAnimationManually;
- (void)setStartAnimationManually:(BOOL)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (double)backgroundColorAlpha;
- (void)setBackgroundColorAlpha:(double)arg1;
- (id)portraitLayoutInfo;
- (void)setPortraitLayoutInfo:(id)arg1;
- (id)landscapeLayoutInfo;
- (void)setLandscapeLayoutInfo:(id)arg1;
- (unsigned long long)imageType;
- (void)setImageType:(unsigned long long)arg1;
- (id)resourceUrl;
- (void)setResourceUrl:(id)arg1;
- (id)imageName;
- (void)setImageName:(id)arg1;
- (id)imageColor;
- (void)setImageColor:(id)arg1;
- (double)imageColorAlpha;
- (void)setImageColorAlpha:(double)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (double)fontSize;
- (void)setFontSize:(double)arg1;
- (unsigned long long)fontWeightType;
- (void)setFontWeightType:(unsigned long long)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (double)textColorAlpha;
- (void)setTextColorAlpha:(double)arg1;
- (unsigned long long)lineCount;
- (void)setLineCount:(unsigned long long)arg1;
- (BOOL)showShadow;
- (void)setShowShadow:(BOOL)arg1;
- (unsigned long long)alignmentType;
- (void)setAlignmentType:(unsigned long long)arg1;
- (id)btnBackgroundColor;
- (void)setBtnBackgroundColor:(id)arg1;
- (double)btnBackgroundColorAlpha;
- (void)setBtnBackgroundColorAlpha:(double)arg1;
- (id)btnIconUrl;
- (void)setBtnIconUrl:(id)arg1;
- (unsigned long long)btnIconSize;
- (void)setBtnIconSize:(unsigned long long)arg1;
- (double)btnIconSpacing;
- (void)setBtnIconSpacing:(double)arg1;
- (BOOL)usingPerformanceMode;
- (void)setUsingPerformanceMode:(BOOL)arg1;
- (BOOL)needAccelerationData;
- (void)setNeedAccelerationData:(BOOL)arg1;
- (double)startAngle;
- (void)setStartAngle:(double)arg1;
- (double)endAngle;
- (void)setEndAngle:(double)arg1;
- (BOOL)clockwise;
- (void)setClockwise:(BOOL)arg1;
- (BOOL)needExposedInfo;
- (void)setNeedExposedInfo:(BOOL)arg1;
- (Class)reportDataHendlerClass;
- (void)setReportDataHendlerClass:(Class)arg1;
- (void).cxx_destruct;
@end
