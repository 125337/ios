@interface WCCommitAskXiaoWeiHandler : NSObject
{
    NSString * _postId; // +0x8
    unsigned long long _versionId; // +0x10
    NSString * _lastContentSnapshot; // +0x18
    NSString * _videoFingerprint; // +0x20
    WCLocationInfo * _locationInfo; // +0x28
    NSString * _miaojianDraftCacheId; // +0x30
    NSMutableDictionary * _videoMediaCache; // +0x38
    NSMutableDictionary * _mediaCache; // +0x40
}
- (void)uploadWithVideo:(id)arg1 sightDraft:(id)arg2 contentText:(id)arg3;
- (void)uploadWithMaterialImageAssets:(id)arg1 videoAssets:(id)arg2 miaojianDraftCacheId:(id)arg3 contentText:(id)arg4;
- (void)_processMaterialVideoAssets:(id)arg1 atIndex:(unsigned long long)arg2 shortSide:(double)arg3 outputDir:(id)arg4 framePaths:(id)arg5 completion:(id /* block */)arg6;
- (void)_processMaterialImageAssets:(id)arg1 atIndex:(unsigned long long)arg2 shortSide:(double)arg3 outputDir:(id)arg4 framePaths:(id)arg5 completion:(id /* block */)arg6;
- (void)_submitMaterialFramePaths:(id)arg1 contentText:(id)arg2;
- (id)_buildVideoMediaListWithFramePaths:(id)arg1 audioPath:(id)arg2 fingerprint:(id)arg3 duration:(unsigned int)arg4;
- (id)_buildVideoUploadTaskWithMediaList:(id)arg1 contentText:(id)arg2;
- (void)finalizeAndSubmitVideoTask:(id)arg1;
- (void)_applyVideoCdnCacheForTask:(id)arg1;
- (id)_currentCacheKey;
- (id)_fileMD5:(id)arg1;
- (void)ensureInitialized;
- (BOOL)updateSnapshotWithText:(id)arg1 assetIds:(id)arg2;
- (void)uploadWithImages:(id)arg1 contentText:(id)arg2;
- (void)submitUploadTask:(id)arg1;
- (id)_buildMediaListFromImages:(id)arg1;
- (id)_jpegDataFromImage:(id)arg1;
- (id)_encodeWxamFromJpg:(id)arg1;
- (CGSize)_pixelSizeOfImageData:(id)arg1;
- (id)_fileFingerprintOfImage:(id)arg1;
- (id)_buildUploadTaskWithMediaList:(id)arg1 contentText:(id)arg2;
- (void)applyCommonFieldsToTask:(id)arg1;
- (void)finalizeAndSubmitTask:(id)arg1;
- (void)_applyCdnCacheForTask:(id)arg1;
- (void)_registerProgressCallbackForTask:(id)arg1;
- (id)postId;
- (void)setPostId:(id)arg1;
- (unsigned long long)versionId;
- (void)setVersionId:(unsigned long long)arg1;
- (id)lastContentSnapshot;
- (void)setLastContentSnapshot:(id)arg1;
- (id)videoFingerprint;
- (void)setVideoFingerprint:(id)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (id)miaojianDraftCacheId;
- (void)setMiaojianDraftCacheId:(id)arg1;
- (id)videoMediaCache;
- (void)setVideoMediaCache:(id)arg1;
- (id)mediaCache;
- (void)setMediaCache:(id)arg1;
- (void).cxx_destruct;
@end
