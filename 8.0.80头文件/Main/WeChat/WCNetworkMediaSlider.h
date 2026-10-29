@interface WCNetworkMediaSlider : UISlider
{
    double m_cacheTime; // +0x8
    double m_thumbLeftMargin; // +0x10
    double m_thumbRightMargin; // +0x18
    BOOL _showCacheProgress; // +0x20
    BOOL _roundedRect; // +0x21
    BOOL _showThumb; // +0x22
    UIColor * _frontgroundColor; // +0x28
    UIColor * _backgroundColor; // +0x30
    UIColor * _cacheColor; // +0x38
    double _sliderHeight; // +0x40
    UIImage * _thumbImage; // +0x48
    NSArray * _markArr; // +0x50
}
- (id)init;
- (void)initView;
- (CGRect)minimumValueImageRectForBounds:(CGRect)arg1;
- (void)setCacheProgress:(double)arg1;
- (void)resizeCacheProgress;
- (id)getBackgroundImage;
- (id)getBackgroundImage:(BOOL)arg1;
- (id)getFrontgroundImage;
- (id)getFrontgroundImage:(BOOL)arg1;
- (void)drawMarkArr:(CGContext *)arg1;
- (id)backgroundColor;
- (id)frontgroundColor;
- (id)cacheColor;
- (CGRect)trackRectForBounds:(CGRect)arg1;
- (CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3;
- (void)setFrontgroundColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCacheColor:(id)arg1;
- (double)sliderHeight;
- (void)setSliderHeight:(double)arg1;
- (BOOL)showCacheProgress;
- (void)setShowCacheProgress:(BOOL)arg1;
- (BOOL)roundedRect;
- (void)setRoundedRect:(BOOL)arg1;
- (BOOL)showThumb;
- (void)setShowThumb:(BOOL)arg1;
- (id)thumbImage;
- (void)setThumbImage:(id)arg1;
- (id)markArr;
- (void)setMarkArr:(id)arg1;
- (void).cxx_destruct;
@end
