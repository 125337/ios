@interface FWFScrollViewHostApiImpl : NSObject <FWFUIScrollViewHostApi>
{
    FWFInstanceManager * _instanceManager; // +0x8
}
- (id)initWithInstanceManager:(id)arg1;
- (id)scrollViewForIdentifier:(id)arg1;
- (void)createFromWebViewWithIdentifier:(id)arg1 webViewIdentifier:(id)arg2 error:(id *)arg3;
- (id)contentOffsetForScrollViewWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)scrollByForScrollViewWithIdentifier:(id)arg1 x:(id)arg2 y:(id)arg3 error:(id *)arg4;
- (void)setContentOffsetForScrollViewWithIdentifier:(id)arg1 toX:(id)arg2 y:(id)arg3 error:(id *)arg4;
- (id)instanceManager;
- (void)setInstanceManager:(id)arg1;
- (void).cxx_destruct;
@end

