@interface WCAdSliderCardCellView : UICollectionViewCell <WCSightViewDelegate, WCCanvasImageLoaderObserver>
{
    BOOL _isDetail; // +0x8
    id <WCAdSliderCardCellViewDelegate> _delegate; // +0x10
    WCAdSliderCardBaseItem * _cardInfo; // +0x18
    long long _cardType; // +0x20
    long long _cardIndex; // +0x28
    WCDataItem * _dataItem; // +0x30
    MMUIView * _contentContainer; // +0x38
    MMUIView * _mediaView; // +0x40
    WCAdSliderCardSightView * _mediaSightView; // +0x48
    MMUIView * _mediaSightViewHolder; // +0x50
    MMUIImageView * _mediaImageThumbView; // +0x58
    MMUIButton * _maskButton; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setData:(id)arg1 cardType:(long long)arg2 cardIndex:(long long)arg3 dataItem:(id)arg4 isDetail:(BOOL)arg5 fullUpdate:(BOOL)arg6;
- (void)initView;
- (void)configCellContentView;
- (id)getCellContentViewMaskPath:(CGRect)arg1;
- (void)initContentContainer;
- (id)createContentContainer;
- (void)initMediaView;
- (void)initBackBorderView;
- (void)initFrontBorderView;
- (void)initDetailView;
- (void)initMaskButton;
- (void)configMaskButton:(id)arg1;
- (void)onMaskButtonClick:(id)arg1 forEvent:(id)arg2;
- (void)updateUI:(BOOL)arg1;
- (void)updateContentUI;
- (void)updateMediaUI:(BOOL)arg1;
- (id)createSightView:(id)arg1;
- (void)mediaPlay;
- (void)mediaPause;
- (void)mediaStop;
- (void)onPlayEnd:(BOOL)arg1;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onImageShowEnd;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (long long)fetchMediaType;
- (BOOL)shouldDownloadImageUseCDN;
- (id)fetchReportItem;
- (double)fetchImageShowDuration;
- (void)startImageTimer;
- (void)stopImageTimer;
- (void)playSight;
- (void)pauseSight;
- (void)stopSight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cardInfo;
- (void)setCardInfo:(id)arg1;
- (long long)cardType;
- (void)setCardType:(long long)arg1;
- (long long)cardIndex;
- (void)setCardIndex:(long long)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)isDetail;
- (void)setIsDetail:(BOOL)arg1;
- (id)contentContainer;
- (void)setContentContainer:(id)arg1;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (id)mediaSightView;
- (void)setMediaSightView:(id)arg1;
- (id)mediaSightViewHolder;
- (void)setMediaSightViewHolder:(id)arg1;
- (id)mediaImageThumbView;
- (void)setMediaImageThumbView:(id)arg1;
- (id)maskButton;
- (void)setMaskButton:(id)arg1;
- (void).cxx_destruct;
@end
