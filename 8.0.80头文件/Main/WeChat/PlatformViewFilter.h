@interface PlatformViewFilter : NSObject
{
    BOOL _backdropFilterViewConfigured; // +0x8
    double _blurRadius; // +0x10
    UIVisualEffectView * _backdropFilterView; // +0x18
    CGRect _frame; // +0x20
}
+ (void)resetPreparation;
+ (void)prepareOnce:(id)arg1;
+ (BOOL)isUIVisualEffectViewImplementationValid;
- (id)initWithFrame:(CGRect)arg1 blurRadius:(double)arg2 visualEffectView:(id)arg3;
- (id)backdropFilterView;
- (void)updateVisualEffectView:(id)arg1;
- (CGRect)frame;
- (double)blurRadius;
- (void)setBackdropFilterView:(id)arg1;
- (BOOL)backdropFilterViewConfigured;
- (void)setBackdropFilterViewConfigured:(BOOL)arg1;
- (void).cxx_destruct;
@end
