@interface MMFinderLiveGoodsViewModel : NSObject <WCFinderLiveLogReportValueProvider, MMFinderLiveShopShelfItemViewModelProtocol, MMFinderLiveShopShelfManagedItemViewModelProtocol>
{
    BOOL _showPromoteActionButton; // +0x8
    BOOL _isInGoodsWithCouponsList; // +0x9
    BOOL _alwaysHideSerialNumber; // +0xa
    BOOL _showHotSaleCounts; // +0xb
    BOOL _isAddToLikeFromMenuButton; // +0xc
    MMFinderLiveShopShelfCoordinator * _shopShelfCoordinator; // +0x10
    id <MMFinderLiveGoodsViewModelDelegate> _delegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    MMFinderLiveGoodsItem * _goodsItem; // +0x28
    NSDate * _willShineBefore; // +0x30
    NSString * _tabName; // +0x38
    long long _listType; // +0x40
    NSString * _searchKeyword; // +0x48
}
- (id)finderLiveLogReportValueForKey:(id)arg1;
- (void)onLittleTailClicked;
- (void)onAnchorShowBoxItemClicked:(id)arg1;
- (void)onAnchorOpenPriceViewClicked:(id)arg1;
- (void)onAnchorEditRecommendWordingClicked:(id)arg1;
- (void)onAuctionButtonClicked;
- (void)onAnchorAuctionBidRecordsClicked:(id)arg1;
- (id)init;
- (BOOL)needActionButton;
- (BOOL)needReplayButton;
- (id)liveTask;
- (id)shopContext;
- (void)onGetFinderLiveAppMsgShopInfoWithTaskId:(id)arg1 shopInfo:(id)arg2;
- (void)onShelfUpdateNotify:(id)arg1 shelfInfo:(id)arg2;
- (void)refreshShelfAction:(id)arg1;
- (void)onSubInfosViewClicked;
- (void)onPreHotButtonClicked;
- (void)onShowPriceButtonClicked;
- (BOOL)isPromoting;
- (void)setIsPromoting:(BOOL)arg1;
- (id)productReplayInfo;
- (id)idUnit;
- (BOOL)willDisplayInvalidReplayTips;
- (id)shopShelfCoordinator;
- (void)setShopShelfCoordinator:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)goodsItem;
- (void)setGoodsItem:(id)arg1;
- (BOOL)showPromoteActionButton;
- (void)setShowPromoteActionButton:(BOOL)arg1;
- (id)willShineBefore;
- (void)setWillShineBefore:(id)arg1;
- (BOOL)isInGoodsWithCouponsList;
- (void)setIsInGoodsWithCouponsList:(BOOL)arg1;
- (BOOL)alwaysHideSerialNumber;
- (void)setAlwaysHideSerialNumber:(BOOL)arg1;
- (BOOL)showHotSaleCounts;
- (void)setShowHotSaleCounts:(BOOL)arg1;
- (id)tabName;
- (void)setTabName:(id)arg1;
- (BOOL)isAddToLikeFromMenuButton;
- (void)setIsAddToLikeFromMenuButton:(BOOL)arg1;
- (long long)listType;
- (void)setListType:(long long)arg1;
- (id)searchKeyword;
- (void)setSearchKeyword:(id)arg1;
- (void).cxx_destruct;
@end
