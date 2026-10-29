@interface CBTBridgeListener : NSObject
{
    id /* block */ _cancellation; // +0x8
}
- (void)cancel;
- (void)dealloc;
- (id /* block */)cancellation;
- (void)setCancellation:(id /* block */)arg1;
- (void).cxx_destruct;
@end
