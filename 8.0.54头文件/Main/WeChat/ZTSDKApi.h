@interface ZTSDKApi : NSObject <SKStoreProductViewControllerDelegate>
{
    id <SKStoreProductViewControllerDelegate> _storeControllerDelegate; // +0x8
}
+ (id)sharedInstance;
+ (id)allocWithZone:(_NSZone *)arg1;
+ (void)initSDK:(id)arg1;
+ (void)initWithDeviceInfo:(id)arg1 model:(id)arg2 brand:(id)arg3 iosver:(id)arg4;
+ (void)setLogLevel:(long long)arg1;
+ (void)enableDeviceCollect:(BOOL)arg1;
+ (void)newOpenUrl:(id)arg1 channelInfo:(id)arg2 completion:(id /* block */)arg3;
+ (void)reportOpenUrl:(id)arg1 channelInfo:(id)arg2;
+ (void)reportClickEvent:(id)arg1;
+ (void)reportExposureEvent:(id)arg1;
+ (void)reportOfferEvent:(id)arg1;
+ (void)reportSearchEvent:(id)arg1 searchword:(id)arg2;
+ (void)reportShareEvent:(id)arg1 sharetype:(id)arg2 sharescene:(id)arg3;
+ (void)newJumpToAppStore:(id)arg1 channelInfo:(id)arg2 completion:(id /* block */)arg3;
+ (void)setStoreViewDelegate:(id)arg1;
+ (void)newPresentStoreProductViewController:(id)arg1 storeId:(id)arg2 channelInfo:(id)arg3 completion:(id /* block */)arg4;
+ (void)addCustomStoreProductVC:(id)arg1 storeViewFrame:(CGRect)arg2 storeId:(id)arg3 channelInfo:(id)arg4 completion:(id /* block */)arg5;
+ (id)startOpenStoreProductVC:(id)arg1 storeViewFrame:(CGRect)arg2 productID:(id)arg3 report:(id)arg4 isFull:(BOOL)arg5 completion:(id /* block */)arg6;
+ (id)pressentCustomViewControllerFromViewController:(id)arg1 frame:(CGRect)arg2 productIdentifier:(id)arg3 isFull:(BOOL)arg4 completion:(id /* block */)arg5;
+ (void)reportAppstoreEventInfo:(id)arg1;
+ (void)DoReportToTDM:(id)arg1 report:(id)arg2;
+ (void)reportToTDM:(id)arg1 report:(id)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)initSingleton;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)storeControllerDelegate;
- (void)setStoreControllerDelegate:(id)arg1;
- (void).cxx_destruct;
@end

