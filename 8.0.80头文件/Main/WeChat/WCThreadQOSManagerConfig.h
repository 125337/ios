@interface WCThreadQOSManagerConfig : NSObject <PBCoding>
{
    BOOL _enableDynamicQOS; // +0x8
    BOOL _enableGlobalQueue; // +0x9
    BOOL _enablePowerSaveMode; // +0xa
    unsigned int _jscQOS; // +0xc
    NSString * _qosStrategyStr; // +0x10
}
+ (void)PBArrayAdd_enableDynamicQOS;
+ (void)PBArrayAdd_enableGlobalQueue;
+ (void)PBArrayAdd_enablePowerSaveMode;
+ (void)PBArrayAdd_jscQOS;
+ (void)PBArrayAdd_qosStrategyStr;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)init;
- (void)updateWithXLabConfig:(id)arg1;
- (BOOL)enableDynamicQOS;
- (void)setEnableDynamicQOS:(BOOL)arg1;
- (BOOL)enableGlobalQueue;
- (void)setEnableGlobalQueue:(BOOL)arg1;
- (BOOL)enablePowerSaveMode;
- (void)setEnablePowerSaveMode:(BOOL)arg1;
- (unsigned int)jscQOS;
- (void)setJscQOS:(unsigned int)arg1;
- (id)qosStrategyStr;
- (void)setQosStrategyStr:(id)arg1;
- (void).cxx_destruct;
@end
