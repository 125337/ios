@interface FBSDKPaymentProductRequestor : NSObject <SKProductsRequestDelegate>
{
    NSMutableSet * _originalTransactionSet; // +0x8
    NSSet * _eventsWithReceipt; // +0x10
    NSDateFormatter * _formatter; // +0x18
    SKPaymentTransaction * _transaction; // +0x20
    SKProductsRequest * _productRequest; // +0x28
}
+ (void)initialize;
- (id)initWithTransaction:(id)arg1;
- (void)setProductRequest:(id)arg1;
- (void)resolveProducts;
- (id)getTruncatedString:(id)arg1;
- (void)logTransactionEvent:(id)arg1;
- (BOOL)isSubscription:(id)arg1;
- (id)getEventParametersOfProduct:(id)arg1 withTransaction:(id)arg2;
- (void)appendOriginalTransactionID:(id)arg1;
- (void)clearOriginalTransactionID:(id)arg1;
- (BOOL)isStartTrial:(id)arg1 ofProduct:(id)arg2;
- (BOOL)hasStartTrial:(id)arg1;
- (id)durationOfSubscriptionPeriod:(id)arg1;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestDidFinish:(id)arg1;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)cleanUp;
- (void)logImplicitSubscribeTransaction:(id)arg1 ofProduct:(id)arg2;
- (void)logImplicitPurchaseTransaction:(id)arg1 ofProduct:(id)arg2;
- (void)logImplicitTransactionEvent:(id)arg1 valueToSum:(double)arg2 parameters:(id)arg3;
- (id)fetchDeviceReceipt;
- (id)transaction;
- (void)setTransaction:(id)arg1;
- (id)productRequest;
- (void).cxx_destruct;
@end
