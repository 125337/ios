@interface MMFinderLiveStartLiveParams : NSObject
{
    BOOL _customizeFailureToast; // +0x8
    NSString * _username; // +0x10
    UINavigationController * _fromNC; // +0x18
    WCFinderStarterLiveViewModel * _startModel; // +0x20
    id /* block */ _successBlock; // +0x28
    id /* block */ _failureBlock; // +0x30
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)fromNC;
- (void)setFromNC:(id)arg1;
- (id)startModel;
- (void)setStartModel:(id)arg1;
- (BOOL)customizeFailureToast;
- (void)setCustomizeFailureToast:(BOOL)arg1;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg1;
- (id /* block */)failureBlock;
- (void)setFailureBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
