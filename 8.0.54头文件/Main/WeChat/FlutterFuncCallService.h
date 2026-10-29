@interface FlutterFuncCallService : MMRootService <MMServiceProtocol, FlutterCommonServiceBase>
{
    NSMutableDictionary * _funcImpl; // +0x8
}
- (id)callHost:(id)arg1;
- (void)registerFunc:(id)arg1;
- (void)unRegisterFunc:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)funcImpl;
- (void)setFuncImpl:(id)arg1;
- (void).cxx_destruct;
@end

