@interface SWMidasPurchaseOption : NSObject
{
     shouldContinueWhenStorefrontChanged; // +0x8
     shouldShowHudTextWhenProcessing; // +0x9
     iOS15PreferredReceiptType; // +0x10
     metaTrackEventID; // +0x18
     shouldHideMidasSandboxAlert; // +0x28
     shouldStopPaymentWhenSameProductNeedReproviding; // +0x29
}
- (BOOL)shouldContinueWhenStorefrontChanged;
- (BOOL)shouldShowHudTextWhenProcessing;
- (long long)iOS15PreferredReceiptType;
- (id)metaTrackEventID;
- (BOOL)shouldHideMidasSandboxAlert;
- (void)setShouldHideMidasSandboxAlert:(BOOL)arg1;
- (BOOL)shouldStopPaymentWhenSameProductNeedReproviding;
- (void)setShouldStopPaymentWhenSameProductNeedReproviding:(BOOL)arg1;
- (id)initWithShouldContinueWhenStorefrontChanged:(BOOL)arg1 shouldShowHudTextWhenProcessing:(BOOL)arg2 iOS15PreferredReceiptType:(long long)arg3 metaTrackEventID:(id)arg4;
- (id)description;
- (id)init;
- (void).cxx_destruct;
@end

