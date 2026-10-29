@interface MMFinderLiveOpenProductPageParam : NSObject
{
    BOOL _isSheetMode; // +0x8
    BOOL _usePushAnimationForFinderMiniShopPurchasePage; // +0x9
    BOOL _usePushAnimation; // +0xa
    BOOL _isAnchorOrAssistant; // +0xb
    BOOL _forbidReplayWidget; // +0xc
    FinderWindowProductInfo * _product; // +0x10
    MMFinderLiveGoodsItem * _goods; // +0x18
    FinderWindowProductInfo_DetailPage * _page; // +0x20
    MMFinderLiveTaskId * _taskID; // +0x28
    unsigned long long _type; // +0x30
    NSString * _entranceGMsgID; // +0x38
    NSString * _liveScene; // +0x40
    NSString * _sceneNote; // +0x48
    id /* block */ _nativeProductShare; // +0x50
    MMFinderLiveOpenProductPageAspect * _aspect; // +0x58
}
+ (id)param;
+ (id)paramWithProduct:(id)arg1;
+ (id)paramWithProduct:(id)arg1 type:(unsigned long long)arg2;
- (id)aspect;
- (void)setGoods:(id)arg1;
- (id)product;
- (void)setProduct:(id)arg1;
- (id)goods;
- (id)page;
- (void)setPage:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)isSheetMode;
- (void)setIsSheetMode:(BOOL)arg1;
- (BOOL)usePushAnimationForFinderMiniShopPurchasePage;
- (void)setUsePushAnimationForFinderMiniShopPurchasePage:(BOOL)arg1;
- (BOOL)usePushAnimation;
- (void)setUsePushAnimation:(BOOL)arg1;
- (BOOL)isAnchorOrAssistant;
- (void)setIsAnchorOrAssistant:(BOOL)arg1;
- (id)entranceGMsgID;
- (void)setEntranceGMsgID:(id)arg1;
- (id)liveScene;
- (void)setLiveScene:(id)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id /* block */)nativeProductShare;
- (void)setNativeProductShare:(id /* block */)arg1;
- (void)setAspect:(id)arg1;
- (BOOL)forbidReplayWidget;
- (void)setForbidReplayWidget:(BOOL)arg1;
- (void).cxx_destruct;
@end
