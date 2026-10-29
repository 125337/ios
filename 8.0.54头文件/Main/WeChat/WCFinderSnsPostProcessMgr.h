@interface WCFinderSnsPostProcessMgr : NSObject <WCAlbumPickerFooterViewDelegate, WCEditVideoViewControllerDelegate, WCFinderPostViewControllerDelegate, WCEditImageViewControllerDelegate, WCAlbumPreviewBrowserViewControllerDelegate, MJMovieComposingViewControllerDelegate>
{
    id <WCFinderSnsPostProcessMgrDelegate> _delegate; // +0x8
    NSMutableArray * _assetArray; // +0x10
    unsigned long long _enterTime; // +0x18
    MJPublisher * _mjPublisher; // +0x20
}
- (id)init;
- (void)reportEnterPage:(int)arg1 eventCode:(long long)arg2 dismiss:(BOOL)arg3;
- (void)presentEditViewControllerWithLocalPathArray:(id)arg1 mediaType:(long long)arg2 fromVC:(id)arg3 enterScene:(unsigned long long)arg4;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2 sliderContentOffset:(CGPoint)arg3;
- (void)editVideoViewControllerDidCancel:(id)arg1;
- (void)updateVideoPath:(id)arg1 andThumbnail:(id)arg2;
- (void)returnToTimelineOrAlbum;
- (void)editVideoViewController:(id)arg1 didFinishEditingVideo:(id)arg2 andForceChangeToScene:(unsigned int)arg3;
- (void)editImageViewController:(id)arg1 didFinishEditingImage:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (id)mjPublisher;
- (void)onMJPublisherMovieComposingStartFailed;
- (void)onMJPublisherMovieComposingFinishFailed;
- (void)presentMJMovieComposingViewControllerWithLocalPathArray:(id)arg1 mediaType:(long long)arg2 fromVC:(id)arg3 enterScene:(unsigned long long)arg4;
- (void)composingViewControllerDidCancel:(id)arg1;
- (void)composingViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)composingViewController:(id)arg1 didFinishWithVideoFileURL:(id)arg2 userInfo:(id)arg3;
- (void)handleVideoFileURL:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)composingViewController:(id)arg1 didFinishWithActionFlow:(id)arg2 userInfo:(id)arg3;
- (void)handleActionFlow:(id)arg1 composingVC:(id)arg2 userInfo:(id)arg3;
- (void)handleMJAppProducedVideoWithPostSession:(id)arg1 composingVC:(id)arg2;
- (void)processWithSightDraft:(id)arg1 finderTask:(id)arg2 publisherPostInfo:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)assetArray;
- (void)setAssetArray:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (void)setMjPublisher:(id)arg1;
- (void).cxx_destruct;
@end

