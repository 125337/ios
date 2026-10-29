@interface WCFinderJumpInfoAdModel : WCFinderJumpInfoBaseModel
- (void)jumpToH5:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToNative:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToAdCanvasWithAdParams:(id)arg1 jumpParams:(id)arg2 screenType:(int)arg3 fromVC:(id)arg4;
- (void)jumpToAppStoreWithAppStoreParams:(id)arg1 screenType:(int)arg2 fromVC:(id)arg3;
- (void)jumpToLive:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)reportLivingIconDidClickWithLiveID:(unsigned long long)arg1 params:(id)arg2;
- (void)jumpToAppDirectlyWithAppParams:(id)arg1 jumpParams:(id)arg2 fromVC:(id)arg3;
@end
