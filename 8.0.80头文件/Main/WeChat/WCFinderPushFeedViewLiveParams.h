@interface WCFinderPushFeedViewLiveParams : NSObject
{
    BOOL _enterLiveRoom; // +0x8
    BOOL _autoOpenShopShelfView; // +0x9
    BOOL _disableHistoryForLives; // +0xa
    int _mixedFlowScene; // +0xc
    NSString * _channelExtra; // +0x10
    NSString * _enterTid; // +0x18
    unsigned long long _shoppingProductId; // +0x20
    FinderCommByPass * _feedOverridingBypass; // +0x28
}
+ (id)paramsWithJsapiExtendedInfo:(id)arg1;
- (BOOL)enterLiveRoom;
- (void)setEnterLiveRoom:(BOOL)arg1;
- (id)channelExtra;
- (void)setChannelExtra:(id)arg1;
- (id)enterTid;
- (void)setEnterTid:(id)arg1;
- (int)mixedFlowScene;
- (void)setMixedFlowScene:(int)arg1;
- (BOOL)autoOpenShopShelfView;
- (void)setAutoOpenShopShelfView:(BOOL)arg1;
- (unsigned long long)shoppingProductId;
- (void)setShoppingProductId:(unsigned long long)arg1;
- (id)feedOverridingBypass;
- (void)setFeedOverridingBypass:(id)arg1;
- (BOOL)disableHistoryForLives;
- (void)setDisableHistoryForLives:(BOOL)arg1;
- (void).cxx_destruct;
@end
