@interface EcsOracleSessionBuilder : NSObject
{
    id /* block */ _exposureAction; // +0x8
    id /* block */ _touchDownAction; // +0x10
    id /* block */ _clickAction; // +0x18
    id /* block */ _config; // +0x20
    id /* block */ _bindTo; // +0x28
    id /* block */ _bindToWithIdentifier; // +0x30
    EcsOracleService * _service; // +0x38
    id /* block */ _exposureActionBlock; // +0x40
    id /* block */ _touchDownActionBlock; // +0x48
    id /* block */ _clickActionBlock; // +0x50
    EcsOracleConfig * _configValue; // +0x58
}
- (id)initWithService:(id)arg1;
- (id)buildSession;
- (id /* block */)exposureAction;
- (id /* block */)touchDownAction;
- (id /* block */)clickAction;
- (id /* block */)config;
- (id /* block */)bindTo;
- (id /* block */)bindToWithIdentifier;
- (id)service;
- (void)setService:(id)arg1;
- (id /* block */)exposureActionBlock;
- (void)setExposureActionBlock:(id /* block */)arg1;
- (id /* block */)touchDownActionBlock;
- (void)setTouchDownActionBlock:(id /* block */)arg1;
- (id /* block */)clickActionBlock;
- (void)setClickActionBlock:(id /* block */)arg1;
- (id)configValue;
- (void)setConfigValue:(id)arg1;
- (void).cxx_destruct;
@end
