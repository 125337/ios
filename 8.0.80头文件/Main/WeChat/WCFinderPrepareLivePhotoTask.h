@interface WCFinderPrepareLivePhotoTask : NSObject <WCPlayerDownloaderExt>
{
    BOOL _isImageReady; // +0x8
    BOOL _isVideoReady; // +0x9
    BOOL _isCompleted; // +0xa
    NSString * _downloadIdentifier; // +0x10
    WCFinderFeedMediaWrap * _preloadWrap; // +0x18
    WCFinderFeedMediaWrap * _parentMediaWrap; // +0x20
    UIImage * _image; // +0x28
    id /* block */ _onPrepared; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)startVideoDownload;
- (void)checkBothReady;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnCdnDownloadError:(id)arg1;
- (id)downloadIdentifier;
- (void)setDownloadIdentifier:(id)arg1;
- (id)preloadWrap;
- (void)setPreloadWrap:(id)arg1;
- (id)parentMediaWrap;
- (void)setParentMediaWrap:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (BOOL)isImageReady;
- (void)setIsImageReady:(BOOL)arg1;
- (BOOL)isVideoReady;
- (void)setIsVideoReady:(BOOL)arg1;
- (BOOL)isCompleted;
- (void)setIsCompleted:(BOOL)arg1;
- (id /* block */)onPrepared;
- (void)setOnPrepared:(id /* block */)arg1;
- (void).cxx_destruct;
@end
