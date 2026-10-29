@interface WCFinderPhotoProgressBarInitParams : NSObject
{
    BOOL _enableTapGes; // +0x8
    double _barSpacing; // +0x10
    double _barHeight; // +0x18
    double _cornerRadius; // +0x20
    UIColor * _backgroundBarColor; // +0x28
    UIColor * _fillBarColor; // +0x30
}
+ (id)defaultParams;
- (id)init;
- (double)barSpacing;
- (void)setBarSpacing:(double)arg1;
- (double)barHeight;
- (void)setBarHeight:(double)arg1;
- (double)cornerRadius;
- (void)setCornerRadius:(double)arg1;
- (id)backgroundBarColor;
- (void)setBackgroundBarColor:(id)arg1;
- (id)fillBarColor;
- (void)setFillBarColor:(id)arg1;
- (BOOL)enableTapGes;
- (void)setEnableTapGes:(BOOL)arg1;
- (void).cxx_destruct;
@end
