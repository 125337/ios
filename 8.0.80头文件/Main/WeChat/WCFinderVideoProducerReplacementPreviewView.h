@interface WCFinderVideoProducerReplacementPreviewView : UIView <SightAssetPreviewViewDelegate>
{
    BOOL _playbackRequested; // +0x8
    UIImageView * _imagePreviewView; // +0x10
    SightAssetPreviewView * _videoPreviewView; // +0x18
    unsigned long long _requestGeneration; // +0x20
    id /* block */ _completion; // +0x28
    struct _videoPlayTimeRange; // +0x30
}
+ (id)previewError;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)showAssetInfo:(id)arg1 preferredTimeRange:(struct)arg2 completion:(id /* block */)arg3;
- (void)pause;
- (void)clear;
- (void)initializeViews;
- (void)showImageAsset:(id)arg1 requestGeneration:(unsigned long long)arg2;
- (void)showVideoAsset:(id)arg1 preferredTimeRange:(struct)arg2 requestGeneration:(unsigned long long)arg3;
- (void)configureVideoPreviewWithAsset:(id)arg1 preferredTimeRange:(struct)arg2 requestGeneration:(unsigned long long)arg3;
- (void)sightAssetPreviewViewDidFinishPreparing:(id)arg1;
- (void)sightAssetPreviewViewPlaybackDidReachEnd:(id)arg1;
- (void)sightAssetPreviewView:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)isCurrentRequestGeneration:(unsigned long long)arg1;
- (void)completeRequestGeneration:(unsigned long long)arg1 error:(id)arg2;
- (id)imagePreviewView;
- (void)setImagePreviewView:(id)arg1;
- (id)videoPreviewView;
- (void)setVideoPreviewView:(id)arg1;
- (unsigned long long)requestGeneration;
- (void)setRequestGeneration:(unsigned long long)arg1;
- (struct)videoPlayTimeRange;
- (void)setVideoPlayTimeRange:(struct)arg1;
- (BOOL)playbackRequested;
- (void)setPlaybackRequested:(BOOL)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
