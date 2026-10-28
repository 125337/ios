@interface SWMidasPurchaseOption : NSObject
{
     shouldContinueWhenStorefrontChanged; // +0x8
     shouldShowHudTextWhenProcessing; // +0x9
     usingStoreKit2Above15; // +0xa
     metaTrackEventID; // +0x10
     shouldHideMidasSandboxAlert; // +0x20
     shouldStopPaymentWhenSameProductNeedReproviding; // +0x21
     purchaseTimeoutLimit; // +0x28
     fetchingProductTimeoutLimit; // +0x30
}
- (BOOL)shouldContinueWhenStorefrontChanged;
- (BOOL)shouldShowHudTextWhenProcessing;
- (BOOL)usingStoreKit2Above15;
- (id)metaTrackEventID;
- (BOOL)shouldHideMidasSandboxAlert;
- (void)setShouldHideMidasSandboxAlert:(BOOL)arg1;
- (BOOL)shouldStopPaymentWhenSameProductNeedReproviding;
- (void)setShouldStopPaymentWhenSameProductNeedReproviding:(BOOL)arg1;
- (double)purchaseTimeoutLimit;
- (void)setPurchaseTimeoutLimit:(double)arg1;
- (double)fetchingProductTimeoutLimit;
- (void)setFetchingProductTimeoutLimit:(double)arg1;
- (id)initWithShouldContinueWhenStorefrontChanged:(BOOL)arg1 shouldShowHudTextWhenProcessing:(BOOL)arg2 usingStoreKit2Above15:(BOOL)arg3 metaTrackEventID:(id)arg4;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end
