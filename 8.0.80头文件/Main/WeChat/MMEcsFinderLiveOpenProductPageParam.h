@interface MMEcsFinderLiveOpenProductPageParam : NSObject
{
    BOOL _usePushAnimationForFinderMiniShopPurchasePage; // +0x8
    BOOL _usePushAnimation; // +0x9
    BOOL _isAnchorOrAssistant; // +0xa
    BOOL _forceLightMode; // +0xb
    BOOL _forbidReplayWidget; // +0xc
    BOOL _isSheetMode; // +0xd
    FinderWindowProductInfo * _product; // +0x10
    MMFinderLiveGoodsItem * _goods; // +0x18
    FinderWindowProductInfo_DetailPage * _page; // +0x20
    unsigned long long _type; // +0x28
    NSString * _entranceGMsgID; // +0x30
    NSString * _liveScene; // +0x38
    NSString * _sceneNote; // +0x40
    id /* block */ _nativeProductShare; // +0x48
    id /* block */ _eventAction; // +0x50
    id /* block */ _openWxaAspect; // +0x58
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x60
    EcsJumpInfo * _ecsJumpInfo; // +0x68
    EcsOpenContext * _openContext; // +0x70
}
+ (id)param;
+ (id)paramWithProduct:(id)arg1 type:(unsigned long long)arg2;
- (id)init;
- (void)setGoods:(id)arg1;
- (id)product;
- (void)setProduct:(id)arg1;
- (id)goods;
- (id)page;
- (void)setPage:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)usePushAnimationForFinderMiniShopPurchasePage;
- (void)setUsePushAnimationForFinderMiniShopPurchasePage:(BOOL)arg1;
- (BOOL)usePushAnimation;
- (void)setUsePushAnimation:(BOOL)arg1;
- (BOOL)isAnchorOrAssistant;
- (void)setIsAnchorOrAssistant:(BOOL)arg1;
- (BOOL)forceLightMode;
- (void)setForceLightMode:(BOOL)arg1;
- (id)entranceGMsgID;
- (void)setEntranceGMsgID:(id)arg1;
- (id)liveScene;
- (void)setLiveScene:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id /* block */)nativeProductShare;
- (void)setNativeProductShare:(id /* block */)arg1;
- (BOOL)forbidReplayWidget;
- (void)setForbidReplayWidget:(BOOL)arg1;
- (id /* block */)eventAction;
- (void)setEventAction:(id /* block */)arg1;
- (id /* block */)openWxaAspect;
- (void)setOpenWxaAspect:(id /* block */)arg1;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (id)ecsJumpInfo;
- (void)setEcsJumpInfo:(id)arg1;
- (id)openContext;
- (void)setOpenContext:(id)arg1;
- (BOOL)isSheetMode;
- (void)setIsSheetMode:(BOOL)arg1;
- (void).cxx_destruct;
@end
