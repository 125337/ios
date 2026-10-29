@interface EcsConfigService : MMUserService <MMServiceProtocol>
{
    EcsConfig * _config; // +0x8
}
- (void)onServiceInit;
- (void)updateConfig:(id)arg1;
- (id)getConfigAppidWhitelist;
- (BOOL)isEcsWeApp:(id)arg1;
- (id)getWordingConfig;
- (BOOL)isWhitelistWeAppJumpInfo:(id)arg1;
- (unsigned long long)getJsapiKvLimitedSize;
- (id)getSamplingPolicy;
- (BOOL)getShopCardExposePreload;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end
