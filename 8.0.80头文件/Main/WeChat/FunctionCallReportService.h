@interface FunctionCallReportService : MMUserService <MMServiceProtocol, IFunctionCallNotifyExt>
{
    NSMutableDictionary * _paramExtractors; // +0x8
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)registerParamExtractor:(id /* block */)arg1 forFunction:(id)arg2;
- (void)unregisterParamExtractorForFunction:(id)arg1;
- (void)registerExtractorsFromService;
- (void)onFunctionCallStart:(id)arg1 moduleName:(id)arg2 functionName:(id)arg3 parameters:(id)arg4;
- (void)onFunctionCallEnd:(id)arg1 moduleName:(id)arg2 functionName:(id)arg3 parameters:(id)arg4 returnValue:(id)arg5;
- (void)fillChatIdParams:(id)arg1 reportParams:(id)arg2;
- (void)fillSubMsgTypeFromXml:(id)arg1 reportParams:(id)arg2;
- (id)paramExtractors;
- (void)setParamExtractors:(id)arg1;
- (void).cxx_destruct;
@end
