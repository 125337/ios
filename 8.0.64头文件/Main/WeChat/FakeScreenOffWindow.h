@interface FakeScreenOffWindow : MMUIWindow
{
    double _originBrightness; // +0x8
}
+ (id)window;
+ (void)show:(BOOL)arg1;
+ (void)hide:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)onWindowSceneSizeChanged;
- (double)originBrightness;
- (void)setOriginBrightness:(double)arg1;
@end
