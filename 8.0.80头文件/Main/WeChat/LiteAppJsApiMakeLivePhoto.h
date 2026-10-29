@interface LiteAppJsApiMakeLivePhoto : LiteAppJsApi <LiteAppLivePhotoTrimDelegate>
{
    BOOL _terminated; // +0x20
    LiteAppLivePhotoTrimVideoViewController * _editVideoVC; // +0x28
    AVAssetExportSession * _trimExportSession; // +0x30
    WCLivePhotoMaker * _livePhotoMaker; // +0x38
    unsigned long long _trimRequestGeneration; // +0x40
    NSString * _sourceVideoPath; // +0x48
    NSString * _trimmedVideoPath; // +0x50
    NSString * _compressedVideoPath; // +0x58
    NSString * _downloadedVideoPath; // +0x60
    LiteAppLivePhotoRemoteDownloadDelegate * _remoteDownloadDelegate; // +0x68
    NSString * _coverSourceImagePath; // +0x70
    NSString * _compatCoverPath; // +0x78
    NSString * _compatVideoPath; // +0x80
    long long _coverTimeMs; // +0x88
    long long _sourceEffectiveCoverTimeMs; // +0x90
    long long _effectiveCoverTimeMs; // +0x98
    long long _exportTimeMs; // +0xa0
    unsigned long long _maxExportSize; // +0xa8
    NSString * _coverLocalId; // +0xb0
    NSString * _videoLocalId; // +0xb8
}
+ (long long)errCodeForReason:(id)arg1;
+ (BOOL)supportsLivePhoto;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (BOOL)containsURLScheme:(id)arg1;
- (BOOL)isRemoteVideoURLString:(id)arg1;
- (long long)resolvedCoverTimeMs:(long long)arg1 durationMs:(long long)arg2;
- (long long)remappedCoverTimeMs:(long long)arg1 trimStartMs:(long long)arg2 trimDurationMs:(long long)arg3;
- (struct)normalizedTrimTimeRange:(struct)arg1 forAsset:(id)arg2;
- (void)handleResolvedVideoPath:(id)arg1;
- (id)remoteDownloadTempPathForURL:(id)arg1;
- (void)downloadRemoteVideoFromURLString:(id)arg1 completion:(id /* block */)arg2;
- (void)launchTrimEditorWithVideoPath:(id)arg1 asset:(id)arg2;
- (void)livePhotoTrimVC:(id)arg1 didConfirmWithTimeRange:(struct)arg2;
- (void)livePhotoTrimVCDidCancel:(id)arg1;
- (void)livePhotoTrimVCDidTimeout:(id)arg1;
- (void)exportTrimmedVideoFromPath:(id)arg1 timeRange:(struct)arg2 completion:(id /* block */)arg3;
- (void)composeLivePhotoWithVideoPath:(id)arg1;
- (void)compressVideoAtPath:(id)arg1 completion:(id /* block */)arg2;
- (void)doComposeLivePhotoWithVideoPath:(id)arg1;
- (id)avCompatPathForPath:(id)arg1 defaultExt:(id)arg2 compatPathRef:(id *)arg3;
- (id)reasonForLivePhotoMakerError:(id)arg1;
- (id)extractCoverImageFromVideo:(id)arg1 atTimeMs:(long long)arg2;
- (void)failWithReason:(id)arg1;
- (void)cleanupTrimmedVideo;
- (void)cleanupCompressedVideo;
- (void)cleanupCoverSourceImage;
- (void)cleanupCompatCover;
- (void)cleanupCompatVideo;
- (void)cleanupDownloadedVideo;
- (void)cleanupCompatFiles;
- (void)cleanupTemporaryFiles;
- (void)failWithReason:(id)arg1 internalErrorCode:(long long)arg2 internalErrorDomain:(id)arg3;
- (void)successCompose;
- (BOOL)terminated;
- (void)setTerminated:(BOOL)arg1;
- (id)editVideoVC;
- (void)setEditVideoVC:(id)arg1;
- (id)trimExportSession;
- (void)setTrimExportSession:(id)arg1;
- (id)livePhotoMaker;
- (void)setLivePhotoMaker:(id)arg1;
- (unsigned long long)trimRequestGeneration;
- (void)setTrimRequestGeneration:(unsigned long long)arg1;
- (id)sourceVideoPath;
- (void)setSourceVideoPath:(id)arg1;
- (id)trimmedVideoPath;
- (void)setTrimmedVideoPath:(id)arg1;
- (id)compressedVideoPath;
- (void)setCompressedVideoPath:(id)arg1;
- (id)downloadedVideoPath;
- (void)setDownloadedVideoPath:(id)arg1;
- (id)remoteDownloadDelegate;
- (void)setRemoteDownloadDelegate:(id)arg1;
- (id)coverSourceImagePath;
- (void)setCoverSourceImagePath:(id)arg1;
- (id)compatCoverPath;
- (void)setCompatCoverPath:(id)arg1;
- (id)compatVideoPath;
- (void)setCompatVideoPath:(id)arg1;
- (long long)coverTimeMs;
- (void)setCoverTimeMs:(long long)arg1;
- (long long)sourceEffectiveCoverTimeMs;
- (void)setSourceEffectiveCoverTimeMs:(long long)arg1;
- (long long)effectiveCoverTimeMs;
- (void)setEffectiveCoverTimeMs:(long long)arg1;
- (long long)exportTimeMs;
- (void)setExportTimeMs:(long long)arg1;
- (unsigned long long)maxExportSize;
- (void)setMaxExportSize:(unsigned long long)arg1;
- (id)coverLocalId;
- (void)setCoverLocalId:(id)arg1;
- (id)videoLocalId;
- (void)setVideoLocalId:(id)arg1;
- (void).cxx_destruct;
@end
