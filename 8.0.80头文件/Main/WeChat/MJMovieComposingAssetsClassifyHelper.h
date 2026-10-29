@interface MJMovieComposingAssetsClassifyHelper : NSObject
{
    BOOL _isCancelled; // +0x8
    unsigned long long _state; // +0x10
    id /* block */ _completion; // +0x18
    NSMutableArray * _waitingCompletions; // +0x20
    NSData * _classifyResult; // +0x28
    AVAsset * _videoAsset; // +0x30
    UIImage * _imageAsset; // +0x38
    NSArray * _mmAssetInfos; // +0x40
    NSArray * _mjAssetInfos; // +0x48
}
- (id)initWithMMAssetInfos:(id)arg1;
- (id)initWithMJAssetInfos:(id)arg1;
- (void)waitForClassifyResultWithCompletion:(id /* block */)arg1;
- (void)prepareClassifyResultWithCompletion:(id /* block */)arg1;
- (void)prepareClassifyResultWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (void)prepareClassifyResultWithMMAssetInfos:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)prepareClassifyResultWithMJAssetInfos:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (id)getClassifyResult;
- (void)setupTimeoutMechanismWithTimeout:(double)arg1;
- (void)cancel;
- (void)handleAssetClassifyResult:(id)arg1;
- (void)callCompletionOnError:(id)arg1;
- (void)callCompletionOnSucceesWithData:(id)arg1;
- (void)notifyWaitingCompletionsWithData:(id)arg1 error:(id)arg2;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (BOOL)isCancelled;
- (void)setIsCancelled:(BOOL)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id)waitingCompletions;
- (void)setWaitingCompletions:(id)arg1;
- (id)classifyResult;
- (void)setClassifyResult:(id)arg1;
- (id)videoAsset;
- (void)setVideoAsset:(id)arg1;
- (id)imageAsset;
- (void)setImageAsset:(id)arg1;
- (id)mmAssetInfos;
- (void)setMmAssetInfos:(id)arg1;
- (id)mjAssetInfos;
- (void)setMjAssetInfos:(id)arg1;
- (void).cxx_destruct;
@end
