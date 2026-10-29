@interface MMLocatingCoordinateLogic : NSObject <ILocationMgrExt>
{
    TencentLBSLocationManager * _locationMgr; // +0x8
    NSMutableDictionary * _completionDict; // +0x10
    NSMutableDictionary * _requestObjDict; // +0x18
}
- (id)init;
- (id)completionDict;
- (id)requestObjDict;
- (id)locationMgr;
- (void)requestSelfLocation:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)getSelfLocationCoordinateWithoutReqPermission:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
- (void)requestSelfAddress:(unsigned long long)arg1 params:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)requestAddressByLocation:(CLLocationCoordinate2D)arg1 params:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)requestAddressByPoiId:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)onCancelRequestAddressForTag:(unsigned long long)arg1;
- (void)setLocationMgr:(id)arg1;
- (void)setCompletionDict:(id)arg1;
- (void)setRequestObjDict:(id)arg1;
- (void).cxx_destruct;
@end

