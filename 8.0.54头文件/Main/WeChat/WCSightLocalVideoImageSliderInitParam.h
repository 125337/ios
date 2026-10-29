@interface WCSightLocalVideoImageSliderInitParam : NSObject
{
    BOOL _isSystemCrop; // +0x8
    BOOL _cropAllowEnlarge; // +0x9
    BOOL _isDurationMarkerEnabled; // +0xa
    BOOL _isStartTimeMarkerEnabled; // +0xb
    BOOL _isHighlightMaskEnabled; // +0xc
    unsigned long long _scene; // +0x10
    long long _sideFlagStyle; // +0x18
    double _startTimeMarkerKeepTimeSec; // +0x20
    double _maskRectRadius; // +0x28
    CGPoint _sliderContentOffset; // +0x30
}
- (BOOL)isSystemCrop;
- (void)setIsSystemCrop:(BOOL)arg1;
- (BOOL)cropAllowEnlarge;
- (void)setCropAllowEnlarge:(BOOL)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (CGPoint)sliderContentOffset;
- (void)setSliderContentOffset:(CGPoint)arg1;
- (long long)sideFlagStyle;
- (void)setSideFlagStyle:(long long)arg1;
- (BOOL)isDurationMarkerEnabled;
- (void)setIsDurationMarkerEnabled:(BOOL)arg1;
- (BOOL)isStartTimeMarkerEnabled;
- (void)setIsStartTimeMarkerEnabled:(BOOL)arg1;
- (double)startTimeMarkerKeepTimeSec;
- (void)setStartTimeMarkerKeepTimeSec:(double)arg1;
- (BOOL)isHighlightMaskEnabled;
- (void)setIsHighlightMaskEnabled:(BOOL)arg1;
- (double)maskRectRadius;
- (void)setMaskRectRadius:(double)arg1;
@end

