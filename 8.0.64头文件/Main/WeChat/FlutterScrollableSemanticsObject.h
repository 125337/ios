@interface FlutterScrollableSemanticsObject : SemanticsObject
{
    FlutterSemanticsScrollView * _scrollView; // +0x8
}
- (id)initWithBridge:(WeakPtr<flutter::AccessibilityBridgeIos>)arg1 uid:(int)arg2;
- (void)dealloc;
- (void)accessibilityBridgeDidFinishUpdate;
- (id)nativeAccessibility;
- (float)scrollExtentMax;
- (float)scrollPosition;
- (CGSize)contentSizeInternal;
- (CGPoint)contentOffsetInternal;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
@end
