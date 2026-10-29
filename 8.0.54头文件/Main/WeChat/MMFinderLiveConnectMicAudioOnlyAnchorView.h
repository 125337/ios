@interface MMFinderLiveConnectMicAudioOnlyAnchorView : UIView <MMWebImageViewDelegate>
{
    UIImageView * _coverImageView; // +0x8
    MMFinderLiveWcPlayerView * _backgroundVideoView; // +0x10
    MMLiveAudioModeAnimatedBackgroundPlayerViewModel * _backgroundVideoViewModel; // +0x18
    NSString * _coverImageViewName; // +0x20
    NSString * _backgroundVideoViewName; // +0x28
    UIView * _shadingView; // +0x30
    MMFinderLiveTaskId * _finderTaskId; // +0x38
    NSString * _sdkUserId; // +0x40
    NSString * _backgroundVideoUri; // +0x48
    MMLiveResourceFetcherRootFlowAction * _downloadMgr; // +0x50
    CGRect _backgroundVideoViewNormalizedFrame; // +0x58
}
- (id)initWithTaskId:(id)arg1 sdkUserId:(id)arg2;
- (id)initWithTaskId:(id)arg1 sdkUserId:(id)arg2 coverImageViewName:(id)arg3 backgroundVideoViewName:(id)arg4;
- (void)setBackgroundVideoViewNormalizedFrame:(CGRect)arg1;
- (void)configureCoverViewWithBackgroundConfiguration:(id)arg1 fallbackImageUri:(id)arg2;
- (void)layoutSubviews;
- (void)createBackgroundVideoView;
- (void)startAudioModeBackgroundPlayerWithPath:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)backgroundVideoView;
- (void)setBackgroundVideoView:(id)arg1;
- (id)backgroundVideoViewModel;
- (void)setBackgroundVideoViewModel:(id)arg1;
- (CGRect)backgroundVideoViewNormalizedFrame;
- (id)coverImageViewName;
- (void)setCoverImageViewName:(id)arg1;
- (id)backgroundVideoViewName;
- (void)setBackgroundVideoViewName:(id)arg1;
- (id)shadingView;
- (void)setShadingView:(id)arg1;
- (id)finderTaskId;
- (void)setFinderTaskId:(id)arg1;
- (id)sdkUserId;
- (void)setSdkUserId:(id)arg1;
- (id)backgroundVideoUri;
- (void)setBackgroundVideoUri:(id)arg1;
- (id)downloadMgr;
- (void)setDownloadMgr:(id)arg1;
- (void).cxx_destruct;
@end

