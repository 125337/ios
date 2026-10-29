@interface MMFinderLiveAnchorCustomizeRewardImageUploader : NSObject
+ (void)startUploadCustomImage:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
+ (void)compressAndCacheImage:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
+ (void)uploadImageWithUploadImageFilePath:(id)arg1 filePinningToken:(id)arg2 successBlock:(id /* block */)arg3 failBlock:(id /* block */)arg4;
@end
