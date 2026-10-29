@interface MMFinderLiveShopShelfLiveMsgObserver : NSObject <FinderLivePromoteUpdateExt, WCFinderLiveExt>
{
    NSString * _anchorUsername; // +0x8
    LiveShopShelfFlutterApi * _flutterApi; // +0x10
    id /* block */ _isOpeningProvider; // +0x18
}
- (id)initWithAnchorUsername:(id)arg1 flutterApi:(id)arg2 isOpeningProvider:(id /* block */)arg3;
- (void)dealloc;
- (void)onFinderLivePromoteMsgInfoUpdate:(id)arg1;
- (void)onShelfUpdateNotify:(id)arg1 shelfInfo:(id)arg2;
- (void)onGetFinderLiveAppMsgShopInfoWithTaskId:(id)arg1 shopInfo:(id)arg2;
- (void)onGetFinderLiveAnchorFlashSaleConfigAppMsgWithTaskId:(id)arg1 appMsg:(id)arg2;
- (void)onGetPollingFetchEventWithTaskId:(id)arg1 cmdId:(long long)arg2 respBuffer:(id)arg3 ret:(unsigned int)arg4 requestIntervalSec:(double)arg5;
- (void)pushAppMsg:(id)arg1;
- (id)anchorUsername;
- (void)setAnchorUsername:(id)arg1;
- (id)flutterApi;
- (void)setFlutterApi:(id)arg1;
- (id /* block */)isOpeningProvider;
- (void)setIsOpeningProvider:(id /* block */)arg1;
- (void).cxx_destruct;
@end
