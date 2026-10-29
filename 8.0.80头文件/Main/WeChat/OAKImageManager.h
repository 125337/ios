@interface OAKImageManager : NSObject
{
    XMutexPOSIX _mutex; // +0x8
    map<unsigned int, OAKImageRequestEntity *, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, OAKImageRequestEntity *>>> _requestEntitiesByID; // +0x48
}
+ (id)defaultManager;
- (int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestAVAssetForVideo:(id)arg1 options:(id)arg2 resultHandler:(id /* block */)arg3;
- (int)requestLivePhotoVideoWithAsset:(id)arg1 toFile:(id)arg2 livePhotoCompletionHandler:(id /* block */)arg3;
- (void)onLivePhotoRequestDidCompleteWithTaskID:(unsigned int)arg1 error:(id)arg2;
- (void)onRequestDidCompleteWithImageData:(id)arg1 dataUTI:(id)arg2 orientation:(long long)arg3 info:(id)arg4 taskID:(unsigned int)arg5;
- (void)onRequestDidCompleteWithAsset:(id)arg1 audioMix:(id)arg2 info:(id)arg3 taskID:(unsigned int)arg4;
- (void)cancelAllRequests;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
