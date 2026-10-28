@interface EmoticonLensInfoBatchCgi : StoreEmotionBaseCgi
{
    BOOL _isRunning; // +0x8
    NSMutableArray * _waitingQueue; // +0x10
    id <EmoticonLensInfoBatchCgiDelegate> _delegate; // +0x18
    NSMutableArray * _successLensInfos; // +0x20
    NSMutableArray * _failLensIds; // +0x28
    NSString * _currentLensId; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)requestLensIds:(id)arg1;
- (void)requestNextLens;
- (void)didGetResponse:(id)arg1;
- (void)didFailWithError:(id)arg1 response:(id)arg2;
- (id)waitingQueue;
- (void)setWaitingQueue:(id)arg1;
- (BOOL)isRunning;
- (void)setIsRunning:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)successLensInfos;
- (void)setSuccessLensInfos:(id)arg1;
- (id)failLensIds;
- (void)setFailLensIds:(id)arg1;
- (id)currentLensId;
- (void)setCurrentLensId:(id)arg1;
- (void).cxx_destruct;
@end
