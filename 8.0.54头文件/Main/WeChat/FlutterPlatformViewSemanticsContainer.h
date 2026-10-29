@interface FlutterPlatformViewSemanticsContainer : SemanticsObject
{
    UIView * _platformView; // +0x258
}
- (id)initWithBridge:(WeakPtr<flutter::AccessibilityBridgeIos>)arg1 uid:(int)arg2 platformView:(id)arg3;
- (void)dealloc;
- (id)nativeAccessibility;
- (id)platformView;
- (void)setPlatformView:(id)arg1;
@end

