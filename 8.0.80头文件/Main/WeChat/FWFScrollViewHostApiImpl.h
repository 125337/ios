@interface FWFScrollViewHostApiImpl : NSObject <FWFUIScrollViewHostApi>
{
    id <FlutterBinaryMessenger> _binaryMessenger; // +0x8
    FWFInstanceManager * _instanceManager; // +0x10
}
- (id)initWithInstanceManager:(id)arg1;
- (id)scrollViewForIdentifier:(long long)arg1;
- (void)createFromWebViewWithIdentifier:(long long)arg1 webViewIdentifier:(long long)arg2 error:(id *)arg3;
- (id)contentOffsetForScrollViewWithIdentifier:(long long)arg1 error:(id *)arg2;
- (void)scrollByForScrollViewWithIdentifier:(long long)arg1 x:(double)arg2 y:(double)arg3 error:(id *)arg4;
- (void)setContentOffsetForScrollViewWithIdentifier:(long long)arg1 toX:(double)arg2 y:(double)arg3 error:(id *)arg4;
- (void)setDelegateForScrollViewWithIdentifier:(long long)arg1 uiScrollViewDelegateIdentifier:(id)arg2 error:(id *)arg3;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end
