@interface TPPlayerPlayStopEventInfo : TPPlayerEventInfo
{
    TPGeneralPlayFlowParams * _generalPlayFlowParams; // +0x20
    TPDynamicStatisticParams * _dynamicStatisticParams; // +0x28
}
- (id)init;
- (id)generalPlayFlowParams;
- (void)setGeneralPlayFlowParams:(id)arg1;
- (id)dynamicStatisticParams;
- (void)setDynamicStatisticParams:(id)arg1;
- (void).cxx_destruct;
@end

