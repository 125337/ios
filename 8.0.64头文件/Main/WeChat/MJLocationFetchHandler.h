@interface MJLocationFetchHandler : NSObject <ILocationMgrExt>
{
    unsigned long long _taskToken; // +0x8
    id /* block */ _successBlock; // +0x10
    id /* block */ _failureBlock; // +0x18
    CLLocationCoordinate2D _coordinate; // +0x20
}
- (id)init;
- (BOOL)isFetching;
- (void)fetcherWithLocation:(CLLocationCoordinate2D)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)fetchUserLocationWithSuccess:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)dealloc;
- (void)clear;
- (void)callbackBusy:(id /* block */)arg1;
- (void)onTimeout;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)onGPSAccurateLocationChanged:(id)arg1 withTag:(unsigned long long)arg2;
- (CLLocationCoordinate2D)coordinate;
- (void)setCoordinate:(CLLocationCoordinate2D)arg1;
- (unsigned long long)taskToken;
- (void)setTaskToken:(unsigned long long)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
