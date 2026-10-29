@interface WCLiveBlurPowerModeAdjustParamConfigMgr : NSObject
{
    NSMutableArray * _mutaAdjustStrategyParamList; // +0x8
    NSMutableArray * _mutaAdjustStrategyParamLevelList; // +0x10
}
+ (id)shareInstance;
- (id)init;
- (void)initDefaultData;
- (id)mutaAdjustStrategyParamList;
- (id)mutaAdjustStrategyParamLevelList;
- (id)adjustStrategyParamList;
- (id)adjustStrategyParamLevelList;
- (void)setMutaAdjustStrategyParamList:(id)arg1;
- (void)setMutaAdjustStrategyParamLevelList:(id)arg1;
- (void).cxx_destruct;
@end

