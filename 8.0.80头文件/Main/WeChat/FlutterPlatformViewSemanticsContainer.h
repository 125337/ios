@interface FlutterPlatformViewSemanticsContainer : SemanticsObject
{
    UIView * _platformView; // +0x290
}
- (id)initWithBridge:(WeakPtr<flutter::AccessibilityBridgeIos>)arg1 uid:(int)arg2 platformView:(id)arg3;
- (id)nativeAccessibility;
- (id)platformView;
- (void)setPlatformView:(id)arg1;
- (void).cxx_destruct;
@end
