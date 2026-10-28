@interface MMFinderLiveShopShelfBulkBuyResponder : NSObject
{
    MMFinderLiveShopShelfCoordinator * _shopShelfCoordinator; // +0x8
}
- (void)onBulkBuy:(id)arg1 memberClicked:(id)arg2;
- (void)onBulkBuyMembersTotalClicked:(id)arg1;
- (void)onBulkBuyClicked:(id)arg1;
- (void)onBulkBuyWillDisplay:(id)arg1;
- (id)shopShelfCoordinator;
- (void)setShopShelfCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
