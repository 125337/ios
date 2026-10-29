@interface WCTimeLineAdFlipCardMediaBaseView : UIView <WCSightViewDelegate>
{
    BOOL _bTimelineScene; // +0x8
    WCDataItem * _dataItem; // +0x10
    WCMediaItem * _mediaData; // +0x18
    unsigned long long _mediaIndex; // +0x20
    id <WCTimeLineAdFlipCardMediaBaseViewDelegate> _delegate; // +0x28
    UIView * _containerView; // +0x30
    WCAdURLImageView * _imageView; // +0x38
    WCSightView * _sightView; // +0x40
    WCTimeLineAdFlipCardTitleView * _cardTitleView; // +0x48
    WCAdFlipCardReportItem * _reportItem; // +0x50
}
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 mediaData:(id)arg3 bTimelineScene:(BOOL)arg4 index:(unsigned long long)arg5;
- (void)generateSubviews;
- (id)containerView;
- (id)imageView;
- (id)reportItem;
- (void)getSightViewReady;
- (void)appendTitleViewWithFlipCardInfo:(id)arg1;
- (void)setVideoWithPlayState:(BOOL)arg1;
- (void)setVideoToStandby:(BOOL)arg1;
- (void)setVideoSeekToBegin;
- (void)updateContentsWithSize:(CGSize)arg1;
- (void)updateContentsWithRadius:(double)arg1;
- (void)updateContentsWithMaskSize:(CGSize)arg1 radius:(double)arg2;
- (void)updateContentsWithHoles:(id)arg1;
- (void)applyMaskWithHoles:(id)arg1 toView:(id)arg2;
- (void)onPlayEnd:(BOOL)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)mediaData;
- (void)setMediaData:(id)arg1;
- (BOOL)bTimelineScene;
- (void)setBTimelineScene:(BOOL)arg1;
- (unsigned long long)mediaIndex;
- (void)setMediaIndex:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setImageView:(id)arg1;
- (id)sightView;
- (void)setSightView:(id)arg1;
- (id)cardTitleView;
- (void)setCardTitleView:(id)arg1;
- (void)setReportItem:(id)arg1;
- (void).cxx_destruct;
@end
