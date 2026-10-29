@interface OAKImageRequestEntity : NSObject
{
    BOOL _isRequestLivePhotoVideo; // +0x8
    unsigned int _taskID; // +0xc
    int _phRequestID; // +0x10
    id /* block */ _imageDataCompletionHandler; // +0x18
    id /* block */ _assetCompletionHandler; // +0x20
    id /* block */ _livePhotoCompletionHandler; // +0x28
}
+ (id)entityWithTaskID:(unsigned int)arg1 imageDataCompletionHandler:(id /* block */)arg2;
+ (id)entityWithTaskID:(unsigned int)arg1 assetCompletionHandler:(id /* block */)arg2;
+ (id)entityWithTaskID:(unsigned int)arg1 livePhotoCompletionHandler:(id /* block */)arg2;
- (unsigned int)taskID;
- (void)setTaskID:(unsigned int)arg1;
- (int)phRequestID;
- (void)setPhRequestID:(int)arg1;
- (BOOL)isRequestLivePhotoVideo;
- (void)setIsRequestLivePhotoVideo:(BOOL)arg1;
- (id /* block */)imageDataCompletionHandler;
- (void)setImageDataCompletionHandler:(id /* block */)arg1;
- (id /* block */)assetCompletionHandler;
- (void)setAssetCompletionHandler:(id /* block */)arg1;
- (id /* block */)livePhotoCompletionHandler;
- (void)setLivePhotoCompletionHandler:(id /* block */)arg1;
- (void).cxx_destruct;
@end

