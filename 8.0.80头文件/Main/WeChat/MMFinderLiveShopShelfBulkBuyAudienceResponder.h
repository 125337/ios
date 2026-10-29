@interface MMFinderLiveShopShelfBulkBuyAudienceResponder : NSObject
{
    MMFinderLiveShopShelfCoordinator * _shopShelfCoordinator; // +0x8
}
- (void)onBulkBuy:(id)arg1 buttonClicked:(id)arg2;
- (void)onAskForPromotingButtonClicked:(id)arg1;
- (void)onWatchPromotingButtonClicked:(id)arg1;
- (void)openBulkBuyPromotionReplayWithBulkBuy:(id)arg1 url:(id)arg2;
- (id)shopShelfCoordinator;
- (void)setShopShelfCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
