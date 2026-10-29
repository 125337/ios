@interface MagicEcsScrollableSemanticsObject : MagicEcsSemanticsObject
{
    UIScrollView * _scrollView; // +0x8
    BOOL _scrollViewAdded; // +0x10
}
- (id)initWithId:(long long)arg1 semanticsNode:(id)arg2 accessibilityContainer:(id)arg3 bridge:(id)arg4;
- (id)scrollView;
- (id)nativeAccessibility;
- (void)accessibilityBridgeDidFinishUpdate;
- (float)scrollExtentMaxInternal;
- (float)scrollPositionInternal;
- (CGSize)contentSizeInternal;
- (CGPoint)contentOffsetInternal;
- (void).cxx_destruct;
@end
