@interface WCFinderFeedPhotoCollectionViewCell : UICollectionViewCell <WCFinderFeedImageViewProtocol, UIGestureRecognizerDelegate, WCFinderHalfScreenListenProtocol, WCFinderSimplePhotoViewDelegate>
{
    BOOL _enableTapAction; // +0x8
    BOOL _isSubScene; // +0x9
    unsigned int _attrFuncFlag; // +0xc
    id <WCFinderFeedContentMediaActionProtocol> _delegate; // +0x10
    id <WCFinderFeedPhotoCollectionViewCellDelegate> _cellDelegate; // +0x18
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate; // +0x20
    WCFinderMediaInfo * _mediaInfo; // +0x28
    unsigned long long _displayMode; // +0x30
    UITapGestureRecognizer * _likeGes; // +0x38
    UITapGestureRecognizer * _tapGesture; // +0x40
    WCFinderFeedMediaWrap * _mediaWrap; // +0x48
    WCFinderFeedImageView * _imageContainer; // +0x50
    WCFinderSimplePhotoView * _photoView; // +0x58
    MMUIButton * _livePhotoButton; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setEnableTapAction:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setUpUI;
- (void)setupGestureIfNeeded;
- (void)removeGestureIfNeeded;
- (void)_updateImage:(id)arg1;
- (void)setMediaInfo:(id)arg1;
- (void)reloadImage;
- (CGRect)getImageViewRect;
- (CGRect)getImageViewRectWithAspectFit;
- (CGRect)getMediaViewFrame;
- (CGRect)getMediaCollectionViewFrame;
- (double)getInteractivePanelTop;
- (CGRect)getImageViewRectWithFullScreen;
- (CGRect)getImageViewRectWithDetailFill;
- (void)onLikeFeed:(id)arg1;
- (void)onTap:(id)arg1;
- (void)onFinderImageDownloadFail:(id)arg1;
- (void)onFinderImageLoadSuccess:(id)arg1;
- (BOOL)canBrowseLivePhoto;
- (void)loadingRetry;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getPhotoThumb;
- (void)changeFeedImageViewBackgroundColor:(id)arg1;
- (BOOL)isMediaContentReady;
- (CGRect)imageContainerFrame;
- (void)startPlayPhotoIfNeeded;
- (void)pausePlayPhotoIfNeeded;
- (void)finderSimplePhotoView:(id)arg1 updateVideoPosition:(double)arg2 videoDuration:(double)arg3;
- (void)finderSimplePhotoViewDidPlayLivePhotoToEnd:(id)arg1;
- (void)halfScreenMoveProgressChanged;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)halfScreenDelegate;
- (void)setHalfScreenDelegate:(id)arg1;
- (id)mediaInfo;
- (unsigned long long)displayMode;
- (void)setDisplayMode:(unsigned long long)arg1;
- (unsigned int)attrFuncFlag;
- (void)setAttrFuncFlag:(unsigned int)arg1;
- (BOOL)enableTapAction;
- (BOOL)isSubScene;
- (void)setIsSubScene:(BOOL)arg1;
- (id)likeGes;
- (void)setLikeGes:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)imageContainer;
- (void)setImageContainer:(id)arg1;
- (id)photoView;
- (void)setPhotoView:(id)arg1;
- (id)livePhotoButton;
- (void)setLivePhotoButton:(id)arg1;
- (void).cxx_destruct;
@end
