@interface MJClipBundleCoverSliderHandler : NSObject <WCFinderCoverSliderHandler>
{
    MJPublisherMovieCompositionTask * _compositionTask; // +0x8
}
- (id)initWithCompositionTask:(id)arg1;
- (double)videoTrackDuration;
- (void)snapshotAtTime:(struct)arg1 targetSize:(CGSize)arg2 completionHandler:(id /* block */)arg3;
- (void)generateThumbnailsForTimes:(id)arg1 targetSize:(CGSize)arg2 completion:(id /* block */)arg3;
- (void)_generateThumbnailAtIndex:(unsigned long long)arg1 times:(id)arg2 targetSize:(CGSize)arg3 completion:(id /* block */)arg4;
- (void)cancelPendingSnapshots;
- (id)compositionTask;
- (void)setCompositionTask:(id)arg1;
- (void).cxx_destruct;
@end
