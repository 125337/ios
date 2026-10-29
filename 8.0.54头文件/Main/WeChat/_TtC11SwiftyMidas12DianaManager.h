@interface _TtC11SwiftyMidas12DianaManager : NSObject <SKPaymentQueueDelegate>
{
     previousSign; // +0x8
     logDelegate; // +0x48
     shouldContinueWhenStorefrontChanged; // +0x70
     storefrontInfo; // +0x78
     $__lazy_storage_$_storefrontInfoList; // +0x88
     cachedSensitive; // +0x90
     installedFlags; // +0x98
}
- (BOOL)paymentQueue:(id)arg1 shouldContinueTransaction:(id)arg2 inStorefront:(id)arg3;
- (id)init;
- (void).cxx_destruct;
@end

