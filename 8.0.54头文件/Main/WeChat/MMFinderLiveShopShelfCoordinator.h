@interface MMFinderLiveShopShelfCoordinator : NSObject <WCFinderLiveExt>
{
    MMFinderLiveShopShelfHeaderViewModel * _headerViewModel; // +0x8
    MMFinderLiveShopShelfView * _shopShelfView; // +0x10
    NSArray * _coupons; // +0x18
    MMFinderLiveTaskId * _taskID; // +0x20
    FinderLiveGetShopShelfResponse * _shopShelfInfo; // +0x28
}
- (id)init;
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
- (void).cxx_destruct;
@end

