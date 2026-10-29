@interface FlutterView : UIView <FlutterViewHelper>
{
    BOOL _isWideGamutEnabled; // +0x8
    BOOL _presentsWithTransaction; // +0x9
    id <FlutterViewEngineDelegate> _delegate; // +0x10
}
+ (BOOL)enableFlutterMetalLayer;
+ (void)setEnableFlutterMetalLayer:(BOOL)arg1;
+ (Class)layerClass;
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)screen;
- (unsigned long long)pixelFormat;
- (BOOL)isWideGamutSupported;
- (id)initWithDelegate:(id)arg1 opaque:(BOOL)arg2 enableWideGamut:(BOOL)arg3;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)snapshotFlutter;
- (void)drawLayer:(id)arg1 inContext:(CGContext *)arg2;
- (BOOL)isAccessibilityElement;
- (id)focusItemsInRect:(CGRect)arg1;
- (id)preferredFocusEnvironments;
- (BOOL)presentsWithTransaction;
- (void)setPresentsWithTransaction:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
