@interface WCFinderPersonalCenterController : NSObject <MMFinderLivePurchasedFeedViewModelDelegate>
{
    id <WCFinderPersonalCenterControllerDelegate> _delegate; // +0x8
    WCFinderPersonalCenterParams * _params; // +0x10
    MMUIViewController * _hostVC; // +0x18
    WCFinderContact * _contact; // +0x20
    FinderNewUserPrepareResponse * _prepare; // +0x28
    WCFinderWebViewOpener * _creatorWebVCOpener; // +0x30
    id /* block */ _waittingPrepareBlock; // +0x38
    MMFinderLivePurchasedFeedViewModel * _purchasedFeedViewModel; // +0x40
}
+ (id)controllerWithHostVC:(id)arg1 params:(id)arg2;
- (id)init;
- (void)_onVCDidBePushOrPresend;
- (void)_updateCreator;
- (id)creatorCenterUrl;
- (unsigned long long)reportPostScene;
- (void)openSetting;
- (void)openHistory;
- (void)openLikeFav;
- (void)openFollow;
- (void)openPayment;
- (unsigned long long)purchasedCount;
- (unsigned long long)paidMicCount;
- (unsigned long long)paidCollectionCount;
- (unsigned long long)joinedMembershipCount;
- (void)openMsg;
- (void)openPrivateMsg;
- (void)openContact;
- (void)openFinderMsg;
- (void)openMemberMsg;
- (void)openFinderPrivateMsg;
- (void)openCreator;
- (void)openIncome:(BOOL)arg1;
- (void)openCamera;
- (void)openLive;
- (void)openUnAuth;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)onPurchasedFeedViewModelUpdated:(BOOL)arg1 hasMoreData:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)hostVC;
- (void)setHostVC:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)prepare;
- (void)setPrepare:(id)arg1;
- (id)creatorWebVCOpener;
- (void)setCreatorWebVCOpener:(id)arg1;
- (id /* block */)waittingPrepareBlock;
- (void)setWaittingPrepareBlock:(id /* block */)arg1;
- (id)purchasedFeedViewModel;
- (void)setPurchasedFeedViewModel:(id)arg1;
- (void).cxx_destruct;
@end
