@interface WCFinderAVAssetCoverSliderHandler : NSObject <WCFinderCoverSliderHandler>
{
    AVAsset * _avAsset; // +0x8
    double _keyFrameRate; // +0x10
    AVAssetImageGenerator * _coverGenerator; // +0x18
}
- (id)initWithAVAsset:(id)arg1 keyFrameRate:(double)arg2;
- (void)snapshotAtTime:(struct)arg1 targetSize:(CGSize)arg2 completionHandler:(id /* block */)arg3;
- (void)generateThumbnailsForTimes:(id)arg1 targetSize:(CGSize)arg2 completion:(id /* block */)arg3;
- (void)cancelPendingSnapshots;
- (double)videoTrackDuration;
- (id)avAsset;
- (void)setAvAsset:(id)arg1;
- (double)keyFrameRate;
- (void)setKeyFrameRate:(double)arg1;
- (id)coverGenerator;
- (void)setCoverGenerator:(id)arg1;
- (void).cxx_destruct;
@end
