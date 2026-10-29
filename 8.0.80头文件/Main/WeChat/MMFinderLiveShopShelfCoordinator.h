@interface MMFinderLiveShopShelfCoordinator : NSObject <MMFinderLiveShopSettingsViewExt, MMFinderLiveShopSettingsViewDelegate, WCFinderLiveExt>
{
    MMFinderLiveShopShelfHeaderViewModel * _headerViewModel; // +0x8
    MMFinderLiveShopShelfView * _shopShelfView; // +0x10
    NSArray * _coupons; // +0x18
    MMFinderLiveTaskId * _taskID; // +0x20
    FinderLiveGetShopShelfResponse * _shopShelfInfo; // +0x28
    MMFinderLiveShopShelfAnchorProductCellsResponder * _anchorProductCellsResponder; // +0x30
    MMFinderLiveShopShelfBulkBuyResponder * _bulkBuyResponder; // +0x38
    MMFinderLiveShopShelfBulkBuyAudienceResponder * _bulkBuyAudienceResponder; // +0x40
    MMFinderLiveShopShelfOpenContext * _openContext; // +0x48
    NSMutableSet * _exposedInvalidReplayIDs; // +0x50
    NSString * _shelfSessionId; // +0x58
}
- (unsigned long long)shopSettingsSource;
- (void)setShopSettingsSource:(unsigned long long)arg1;
- (void)onShopSettingViewHideFor:(long long)arg1;
- (void)shopSettingViewRequestRefreshShelfData:(id)arg1 completion:(id /* block */)arg2;
- (void)hideViewsOnShowShopSettingsView;
- (void)showShopSettingView;
- (void)showViewsOnHideShopSettingsView;
- (void)registerExtensionForSetting;
- (void)onSectionHeaderAddGoodsClicked;
- (void)onSectionHeaderFlashSaleClicked:(id)arg1;
- (void)onSectionHeaderCommonButtonClicked:(id)arg1;
- (void)onAddGoodsButtonClicked;
- (void)onAddPreviousLiveGoodsFail:(id)arg1;
- (id)initWithTaskID:(id)arg1;
- (id)liveViewController;
- (id)navigationController;
- (id)flutterShelfPresenter;
- (void)updateWithShopShelfInfo:(id)arg1;
- (id)liveTask;
- (id)shopContext;
- (BOOL)isAnchorOrAssistant;
- (BOOL)isAssistant;
- (BOOL)isAnchor;
- (BOOL)isNormalAudience;
- (BOOL)isLocalLife;
- (void)performBlockAfterOrientationPortrait:(id /* block */)arg1;
- (id)orientationPortrait;
- (id)audienceLogReporter;
- (id)delegate;
- (void)onGetFinderLiveAppMsgShopInfoWithTaskId:(id)arg1 shopInfo:(id)arg2;
- (void)openEcsJumpInfoWithExitEvent:(id)arg1;
- (void)reloadDataForLiveShopShelfViewWithPullScene:(unsigned int)arg1;
- (id)headerViewModel;
- (void)setHeaderViewModel:(id)arg1;
- (id)shopShelfView;
- (void)setShopShelfView:(id)arg1;
- (id)coupons;
- (void)setCoupons:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (id)shopShelfInfo;
- (void)setShopShelfInfo:(id)arg1;
- (id)anchorProductCellsResponder;
- (void)setAnchorProductCellsResponder:(id)arg1;
- (id)bulkBuyResponder;
- (void)setBulkBuyResponder:(id)arg1;
- (id)bulkBuyAudienceResponder;
- (void)setBulkBuyAudienceResponder:(id)arg1;
- (id)openContext;
- (void)setOpenContext:(id)arg1;
- (id)exposedInvalidReplayIDs;
- (void)setExposedInvalidReplayIDs:(id)arg1;
- (id)shelfSessionId;
- (void)setShelfSessionId:(id)arg1;
- (void).cxx_destruct;
@end
