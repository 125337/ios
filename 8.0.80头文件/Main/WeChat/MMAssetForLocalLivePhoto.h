@interface MMAssetForLocalLivePhoto : MMAssetForLocalImage
+ (id)assetWithImagePath:(id)arg1 pairedVideoPath:(id)arg2;
- (BOOL)isLivePhoto;
- (void)asyncGetLivePhotoVideoWithSuccess:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
- (void)getHighResolutionImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4 FaceCountBlock:(id /* block */)arg5;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(id /* block */)arg2 ResultBlock:(id /* block */)arg3 ErrorBlock:(id /* block */)arg4;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(id /* block */)arg2 ErrorBlock:(id /* block */)arg3;
- (void)asyncImageOriginSourceData:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
- (void)asyncImageOriginData:(BOOL)arg1 completion:(id /* block */)arg2 errorBlock:(id /* block */)arg3;
- (void)asyncGetImageExifLogInfo:(id /* block */)arg1;
- (void)fetchLivePhotoInfoWithResultBlock:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
@end
