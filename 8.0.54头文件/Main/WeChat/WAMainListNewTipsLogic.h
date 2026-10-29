@interface WAMainListNewTipsLogic : MMObject <MMNewTipsMgrExt>
{
    id <WAMainListNewTipsLogicDelegate> _delegate; // +0x8
}
+ (id)GenerateRedDotInfoParamStringForSimulatedNativeMainList;
- (id)initWithDelegate:(id)arg1;
- (id)getShowInfoWithPathKey:(id)arg1;
- (void)disposeNewTipsWithPathKey:(id)arg1;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

