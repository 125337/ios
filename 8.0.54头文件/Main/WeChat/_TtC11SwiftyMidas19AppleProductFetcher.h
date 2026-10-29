@interface _TtC11SwiftyMidas19AppleProductFetcher : NSObject <SKProductsRequestDelegate>
{
     usingStoreKit2; // +0x8
     isRunning; // +0x9
     productRequest; // +0x10
     completion; // +0x18
}
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end

