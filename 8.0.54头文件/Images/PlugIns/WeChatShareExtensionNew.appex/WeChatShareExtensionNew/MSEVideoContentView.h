@interface MSEVideoContentView : UIView
{
    BOOL _compressSuceessAndLegal; // +0x8
    NSURL * _videoUrl; // +0x10
    UIImageView * _videoThumbnailImgView; // +0x18
    UIView * _compressResultView; // +0x20
    UIView * _bottomPannelView; // +0x28
    UILabel * _bottomPannelTipsLabel; // +0x30
    MSEVideoPlayerView * _videoPlayerView; // +0x38
}
- (double)getContentViewHeight;
- (id)initVideoContentViewWithContainerWidth:(double)arg1 videoUrl:(id)arg2;
- (void)initSubViews;
- (void)initVideoPlayerView;
- (void)initVideoSizeOutOfLimitTipsView;
- (void)hanldeVideoCompressing;
- (void)handleVideo:(id)arg1 CompressSize:(id)arg2 outOfLimit:(BOOL)arg3;
- (void)handleVideoCompressFail;
- (BOOL)compressSuceessAndLegal;
- (void)setCompressSuceessAndLegal:(BOOL)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)videoThumbnailImgView;
- (void)setVideoThumbnailImgView:(id)arg1;
- (id)compressResultView;
- (void)setCompressResultView:(id)arg1;
- (id)bottomPannelView;
- (void)setBottomPannelView:(id)arg1;
- (id)bottomPannelTipsLabel;
- (void)setBottomPannelTipsLabel:(id)arg1;
- (id)videoPlayerView;
- (void)setVideoPlayerView:(id)arg1;
- (void).cxx_destruct;
@end

