@interface FlutterView : UIView <FlutterViewHelper>
{
    id <FlutterViewEngineDelegate> _delegate; // +0x8
    BOOL _isWideGamutEnabled; // +0x10
    BOOL _presentsWithTransaction; // +0x11
}
+ (BOOL)forceSoftwareRendering;
+ (void)setForceSoftwareRendering:(BOOL)arg1;
+ (Class)layerClass;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)screen;
- (unsigned long long)pixelFormat;
- (BOOL)isWideGamutSupported;
- (id)initWithDelegate:(id)arg1 opaque:(BOOL)arg2 enableWideGamut:(BOOL)arg3;
- (void)layoutSubviews;
- (id)snapshotFlutter;
- (void)drawLayer:(id)arg1 inContext:(CGContext *)arg2;
- (BOOL)isAccessibilityElement;
- (BOOL)presentsWithTransaction;
- (void)setPresentsWithTransaction:(BOOL)arg1;
@end

