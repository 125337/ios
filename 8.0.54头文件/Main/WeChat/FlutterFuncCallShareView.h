@interface FlutterFuncCallShareView : MMRootService <MMServiceProtocol, FlutterCommonFunc>
{
    NSMutableDictionary * _viewMap; // +0x8
}
- (void)registerView:(id)arg1 shareViewProtocol:(id)arg2;
- (id)handleRequest:(id)arg1 request:(id)arg2;
- (id)callHost:(id)arg1 engineId:(id)arg2;
- (id)funcName;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)viewMap;
- (void)setViewMap:(id)arg1;
- (void).cxx_destruct;
@end

