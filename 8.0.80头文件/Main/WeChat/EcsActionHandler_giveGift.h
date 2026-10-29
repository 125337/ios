@interface EcsActionHandler_giveGift : EcsActionHandler_Base
- (id)name;
- (long long)version;
- (long long)supportEnvs;
- (void)handleAction:(id)arg1;
- (void)handleGiveGiftCgi:(id)arg1;
- (void)handleGiveGiftResp:(id)arg1 ticket:(id)arg2;
@end
