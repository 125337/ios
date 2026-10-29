@interface MJCamCommonResourcesQuery : WCFinderBaseCgi
{
    BOOL _started; // +0x8
    BOOL _finished; // +0x9
    NSString * _flowID; // +0x10
    NSMutableArray * _completions; // +0x18
    GetCameraBeautifyingMaterialResponse_MaterialInfo * _material; // +0x20
}
- (id)init;
- (void)dealloc;
- (void)checkResourcesForSession:(id)arg1;
- (void)didGetResponse:(id)arg1;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (BOOL)shouldAutoProcessingToastWithError:(id)arg1;
- (void)finishWithMaterial:(id)arg1;
- (id)flowID;
- (void)setFlowID:(id)arg1;
- (id)completions;
- (void)setCompletions:(id)arg1;
- (BOOL)started;
- (void)setStarted:(BOOL)arg1;
- (BOOL)finished;
- (void)setFinished:(BOOL)arg1;
- (id)material;
- (void)setMaterial:(id)arg1;
- (void).cxx_destruct;
@end
