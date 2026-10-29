@interface WCFinderFeedPhotoCollectionViewCell : UICollectionViewCell <WCFinderFeedImageViewProtocol, UIGestureRecognizerDelegate, WCFinderHalfScreenListenProtocol>
{
    BOOL _enableTapAction; // +0x8
    BOOL _isSubScene; // +0x9
    unsigned int _attrFuncFlag; // +0xc
    double _loadingTopOffset; // +0x10
    id <WCFinderFeedContentMediaActionProtocol> _delegate; // +0x18
    id <WCFinderHalfScreenListenProtocol> _halfScreenDelegate; // +0x20
    WCFinderMediaInfo * _mediaInfo; // +0x28
    WCFinderFullNewMultiMediaView * _mediaView; // +0x30
    WCFinderFeedImageView * _imageContainer; // +0x38
    unsigned long long _displayMode; // +0x40
    WCFinderFeedImageEffectView * _imageEffectView; // +0x48
    UITapGestureRecognizer * _likeGes; // +0x50
    UITapGestureRecognizer * _tapGesture; // +0x58
    WCFinderFeedMediaWrap * _mediaWrap; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)setEnableTapAction:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setUpUI;
- (void)setupGestureIfNeeded;
- (void)removeGestureIfNeeded;
- (void)setImage:(id)arg1 isThumb:(BOOL)arg2;
- (void)setMediaInfo:(id)arg1;
- (void)updateImageContainerFullScreenState;
- (void)reloadImage;
- (CGRect)getImageViewRect;
- (CGRect)getImageViewRectWithAspectFit;
- (CGRect)getImageViewRectWithFullScreen;
- (CGRect)getImageViewRectWithDetailFill;
- (void)onLikeFeed:(id)arg1;
- (void)onTap:(id)arg1;
- (void)onFinderImageDownloadFail:(id)arg1;
- (void)onFinderImageLoadSuccess:(id)arg1;
- (void)loadingRetry;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getPhotoThumb;
- (void)changeFeedImageViewBackgroundColor:(id)arg1;
- (BOOL)isMediaContentReady;
- (void)halfScreenMoveProgressChanged;
- (double)loadingTopOffset;
- (void)setLoadingTopOffset:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)halfScreenDelegate;
- (void)setHalfScreenDelegate:(id)arg1;
- (id)mediaInfo;
- (id)mediaView;
- (void)setMediaView:(id)arg1;
- (id)imageContainer;
- (void)setImageContainer:(id)arg1;
- (unsigned long long)displayMode;
- (void)setDisplayMode:(unsigned long long)arg1;
- (unsigned int)attrFuncFlag;
- (void)setAttrFuncFlag:(unsigned int)arg1;
- (BOOL)enableTapAction;
- (BOOL)isSubScene;
- (void)setIsSubScene:(BOOL)arg1;
- (id)imageEffectView;
- (void)setImageEffectView:(id)arg1;
- (id)likeGes;
- (void)setLikeGes:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (void).cxx_destruct;
@end

