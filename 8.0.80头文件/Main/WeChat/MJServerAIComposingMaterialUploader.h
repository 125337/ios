@interface MJServerAIComposingMaterialUploader : NSObject <MJCdnUploadManagerExt>
{
    BOOL _cancelled; // +0x8
    BOOL _completed; // +0x9
    id /* block */ _materialsPreparedBlock; // +0x10
    NSArray * _assetInfoList; // +0x18
    NSString * _sessionID; // +0x20
    id /* block */ _progressBlock; // +0x28
    id /* block */ _completionBlock; // +0x30
    NSMutableArray * _uploadTaskKeys; // +0x38
    NSMutableDictionary * _uploadRequests; // +0x40
    NSMutableDictionary * _uploadResults; // +0x48
    NSString * _uploadBatchID; // +0x50
}
- (id)initWithAssetInfoList:(id)arg1 sessionID:(id)arg2;
- (void)dealloc;
- (void)startWithProgressBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (void)resolveUploadFilePathsWithCompletion:(id /* block */)arg1;
- (void)resolveUploadFilePathWithAssetInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)cancel;
- (void)startUploadingFilePaths:(id)arg1;
- (id)uploadTaskKeyForIndex:(unsigned long long)arg1;
- (BOOL)isLivePhotoForAssetInfo:(id)arg1;
- (BOOL)shouldUseLivePhotoAsVideoForAssetInfo:(id)arg1;
- (int)materialTypeForAssetInfo:(id)arg1;
- (int)cdnFileTypeForAssetInfo:(id)arg1 defaultFileType:(int)arg2;
- (CGSize)pixelSizeForAssetInfo:(id)arg1;
- (void)MJCdnUploadManager:(id)arg1 uploadTaskDidComplete:(id)arg2;
- (void)checkUploadFinished;
- (void)updateProgressWithFinishedCount:(unsigned long long)arg1;
- (void)completeWithError:(id)arg1 materialList:(id)arg2;
- (id /* block */)materialsPreparedBlock;
- (void)setMaterialsPreparedBlock:(id /* block */)arg1;
- (id)assetInfoList;
- (void)setAssetInfoList:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg1;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (id)uploadTaskKeys;
- (void)setUploadTaskKeys:(id)arg1;
- (id)uploadRequests;
- (void)setUploadRequests:(id)arg1;
- (id)uploadResults;
- (void)setUploadResults:(id)arg1;
- (BOOL)cancelled;
- (void)setCancelled:(BOOL)arg1;
- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (id)uploadBatchID;
- (void)setUploadBatchID:(id)arg1;
- (void).cxx_destruct;
@end
