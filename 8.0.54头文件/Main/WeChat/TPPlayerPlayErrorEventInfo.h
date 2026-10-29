@interface TPPlayerPlayErrorEventInfo : TPPlayerEventInfo
{
    long long _errorType; // +0x20
    long long _errorCode; // +0x28
    TPGeneralPlayFlowParams * _generalPlayFlowParams; // +0x30
    TPDynamicStatisticParams * _dynamicStatisticParams; // +0x38
}
- (id)init;
- (long long)errorType;
- (void)setErrorType:(long long)arg1;
- (long long)errorCode;
- (void)setErrorCode:(long long)arg1;
- (id)generalPlayFlowParams;
- (void)setGeneralPlayFlowParams:(id)arg1;
- (id)dynamicStatisticParams;
- (void)setDynamicStatisticParams:(id)arg1;
- (void).cxx_destruct;
@end

