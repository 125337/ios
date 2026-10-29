@interface EcsJsApiHandler_giveGift : EcsBaseAsyncJsApiHandler
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handle:(id)arg1 params:(id)arg2 callback:(id)arg3;
- (void)handleGiveGiftCgi:(id)arg1 callback:(id)arg2;
- (void)handleGiveGiftResp:(id)arg1 ticket:(id)arg2 callback:(id)arg3;
@end
