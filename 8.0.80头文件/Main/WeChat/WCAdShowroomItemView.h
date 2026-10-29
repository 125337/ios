@interface WCAdShowroomItemView : MMUIView <WCSightViewDelegate>
{
    BOOL _isTimelineScene; // +0x8
    BOOL _isImageLoadPending; // +0x9
    WCAdShowroomItem * _item; // +0x10
    id <WCAdShowroomItemViewDelegate> _delegate; // +0x18
    WCDataItem * _dataItem; // +0x20
    WCAdURLImageView * _imageView; // +0x28
    NSString * _imageUrl; // +0x30
    WCAdShowroomSightView * _sightView; // +0x38
    MMUIButton * _coverButton; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 item:(id)arg2 dataItem:(id)arg3 isTimelineScene:(BOOL)arg4;
- (void)layoutSubviews;
- (BOOL)isVideo;
- (id)reportItem;
- (void)setupImageView;
- (void)loadImageIfNeeded;
- (void)setVideoWithPlayState:(BOOL)arg1;
- (void)ensureSightViewReady;
- (void)setVideoToStandby:(BOOL)arg1;
- (id)coverButton;
- (void)onCoverButtonClicked:(id)arg1;
- (void)syncPlayInfoToSightView;
- (id)videoPlayInfoForSightView:(id)arg1;
- (void)onPlayEnd:(BOOL)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)isTimelineScene;
- (void)setIsTimelineScene:(BOOL)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (BOOL)isImageLoadPending;
- (void)setIsImageLoadPending:(BOOL)arg1;
- (id)sightView;
- (void)setSightView:(id)arg1;
- (void)setCoverButton:(id)arg1;
- (void).cxx_destruct;
@end
