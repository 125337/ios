@interface WCNativeTextMagnifierPlugin : NSObject <FlutterPlugin>
{
    BOOL _systemLoupeTintColorOverridden; // +0x8
    WCNativeTextMagnifierView * _magnifier; // +0x10
    FlutterMethodChannel * _channel; // +0x18
    UITextLoupeSession * _systemLoupeSession; // +0x20
    UIView * _systemLoupeTintHostView; // +0x28
    UIColor * _systemLoupePreviousTintColor; // +0x30
}
+ (void)registerWithRegistrar:(id)arg1;
- (void)dealloc;
- (void)handleMethodCall:(id)arg1 result:(id /* block */)arg2;
- (void)handleShow:(id)arg1 result:(id /* block */)arg2;
- (void)handleUpdate:(id)arg1 result:(id /* block */)arg2;
- (void)handleHide:(id /* block */)arg1;
- (BOOL)isSystemLoupeAvailable;
- (BOOL)trySystemLoupeShow:(CGPoint)arg1 style:(id)arg2;
- (BOOL)trySystemLoupeUpdate:(CGPoint)arg1;
- (void)dismissSystemLoupe;
- (id)colorFromARGBNumber:(id)arg1;
- (void)applySystemLoupeTintFromStyle:(id)arg1 toView:(id)arg2;
- (void)restoreSystemLoupeTint;
- (BOOL)readGlobalPosition:(id)arg1 into:(CGPoint *)arg2;
- (void)applyStyle:(id)arg1 toView:(id)arg2;
- (void)placeMagnifier:(id)arg1 at:(CGPoint)arg2 inWindow:(id)arg3;
- (id)hostWindow;
- (id)interactionView;
- (void)dismissInternal;
- (id)magnifier;
- (void)setMagnifier:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)systemLoupeSession;
- (void)setSystemLoupeSession:(id)arg1;
- (id)systemLoupeTintHostView;
- (void)setSystemLoupeTintHostView:(id)arg1;
- (id)systemLoupePreviousTintColor;
- (void)setSystemLoupePreviousTintColor:(id)arg1;
- (BOOL)systemLoupeTintColorOverridden;
- (void)setSystemLoupeTintColorOverridden:(BOOL)arg1;
- (void).cxx_destruct;
@end
