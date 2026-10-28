@interface MMFinderLiveShopContext : NSObject
{
    BOOL _hasBeenInitByShopShelfInfo; // +0x8
    BOOL _canUsePreHotOrLiveExclusivePrice; // +0x9
    BOOL _isAskForPromotingOpen; // +0xa
    int _replaySwitch; // +0xc
    int _replayType; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    MMFinderLiveTask * _liveTask; // +0x20
    FinderWxAppInfo * _shopAssistApp; // +0x28
    NSString * _shopRequestId; // +0x30
    NSString * _ecSource; // +0x38
    FinderReplayRecordSetting * _replayRecordSetting; // +0x40
    MMFinderLiveShopContext_AnchorFlashSaleConfig * _anchorFlashSaleConfig; // +0x48
    unsigned long long _extFlag; // +0x50
    FinderWxAppInfo * _shoppingCartAppInfo; // +0x58
    FinderLiveShopCustomerServiceInfo * _customerServiceInfo; // +0x60
    FinderShopShelfOrderSetting * _shopShelfOrderSetting; // +0x68
    FinderWxAppInfo * _orderCenterApp; // +0x70
    FinderLiveGetShopShelfResponse_ShopVipInfo * _shopVIPInfo; // +0x78
    MMFinderLiveShopContext_HintModel * _hintModel; // +0x80
    MMFinderLiveShopContext_AddProductsModel * _addProductsModel; // +0x88
    MMFinderLiveGoodsItem * _currPromotingGoodsItem; // +0x90
    MMFinderLiveECHotSaleLikeAnimationCenter * _hotSaleLikeAnimationCenter; // +0x98
}
- (id)liveTask;
- (id)addProductsModel;
- (id)hotSaleLikeAnimationCenter;
- (id)anchorFlashSaleConfig;
- (id)hintModel;
- (void)updateWithShopShelfInfo:(id)arg1;
- (void)updateWithAppMessageAnchorFlashSaleConfigInfo:(id)arg1;
- (void)updateWithJoinLiveContext:(id)arg1;
- (void)updateCurrPromotingGoodsItem:(id)arg1;
- (BOOL)isReplayRecordEnabled;
- (BOOL)isReplaySwitchOpen;
- (BOOL)isAutoReplayRecording;
- (BOOL)canShowPreHotOrShowPrice;
- (id)description;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void)setLiveTask:(id)arg1;
- (BOOL)hasBeenInitByShopShelfInfo;
- (void)setHasBeenInitByShopShelfInfo:(BOOL)arg1;
- (id)shopAssistApp;
- (void)setShopAssistApp:(id)arg1;
- (id)shopRequestId;
- (void)setShopRequestId:(id)arg1;
- (id)ecSource;
- (void)setEcSource:(id)arg1;
- (id)replayRecordSetting;
- (void)setReplayRecordSetting:(id)arg1;
- (int)replaySwitch;
- (void)setReplaySwitch:(int)arg1;
- (int)replayType;
- (void)setReplayType:(int)arg1;
- (void)setAnchorFlashSaleConfig:(id)arg1;
- (unsigned long long)extFlag;
- (void)setExtFlag:(unsigned long long)arg1;
- (id)shoppingCartAppInfo;
- (void)setShoppingCartAppInfo:(id)arg1;
- (id)customerServiceInfo;
- (void)setCustomerServiceInfo:(id)arg1;
- (id)shopShelfOrderSetting;
- (void)setShopShelfOrderSetting:(id)arg1;
- (BOOL)canUsePreHotOrLiveExclusivePrice;
- (void)setCanUsePreHotOrLiveExclusivePrice:(BOOL)arg1;
- (id)orderCenterApp;
- (void)setOrderCenterApp:(id)arg1;
- (id)shopVIPInfo;
- (void)setShopVIPInfo:(id)arg1;
- (void)setHintModel:(id)arg1;
- (void)setAddProductsModel:(id)arg1;
- (id)currPromotingGoodsItem;
- (void)setCurrPromotingGoodsItem:(id)arg1;
- (void)setHotSaleLikeAnimationCenter:(id)arg1;
- (BOOL)isAskForPromotingOpen;
- (void)setIsAskForPromotingOpen:(BOOL)arg1;
- (void).cxx_destruct;
@end
