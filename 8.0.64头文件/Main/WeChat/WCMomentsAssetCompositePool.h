@interface WCMomentsAssetCompositePool : NSObject <WCSightVideoCompositeTaskDelegate>
{
    unsigned long long _entrance; // +0x8
    NSMutableArray * _srcAssetList; // +0x10
    NSMutableArray * _completedAssetList; // +0x18
    id /* block */ _resultBlock; // +0x20
    id /* block */ _sightDraftTaskResultBlock; // +0x28
}
+ (id)_getUserWCRootDir;
+ (id)_getUserWCExportCacheDir;
- (id)initWithEntrance:(unsigned long long)arg1;
- (void)dealloc;
- (void)addSrcAssetList:(id)arg1;
- (void)startWithResultBlock:(id /* block */)arg1;
- (void)_startNextCompositeTask;
- (void)_onTaskFinishedWithAssetInfo:(id)arg1 isComplete:(BOOL)arg2;
- (void)_onTaskFailedWithAssetInfo:(id)arg1 error:(id)arg2;
- (void)_startCompositionWithAssetInfo:(id)arg1 editAttr:(id)arg2;
- (id)_copyOutputVideoToTempDirFromPath:(id)arg1 withAssetInfo:(id)arg2;
- (void)startSightDraftTask:(id)arg1 withResultBlock:(id /* block */)arg2;
- (void)sightVideoCompositeTask:(id)arg1 didFinish:(BOOL)arg2 withSightDraft:(id)arg3;
- (id)completedAssetList;
- (unsigned long long)entrance;
- (void)setEntrance:(unsigned long long)arg1;
- (id)srcAssetList;
- (void)setSrcAssetList:(id)arg1;
- (void)setCompletedAssetList:(id)arg1;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (id /* block */)sightDraftTaskResultBlock;
- (void)setSightDraftTaskResultBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
