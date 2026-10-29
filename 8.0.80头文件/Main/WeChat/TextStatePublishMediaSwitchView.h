@interface TextStatePublishMediaSwitchView : UIView <TextStateBaseMediaViewDelegate>
{
    BOOL _isInInputState; // +0x8
    BOOL _isPlayLiveByLongPress; // +0x9
    BOOL _useSystemFilterToGenerateBlur; // +0xa
    unsigned int _switchValue; // +0xc
    TextStateMediaContainerView * _containerView; // +0x10
    id /* block */ _tapLiveButtonHandler; // +0x18
    id /* block */ _longPreesPlayLiveHandler; // +0x20
    NSString * _defaultImageId; // +0x28
    TextStatePublishMediaInfo * _mediaInfo; // +0x30
    TextStatePublishSourceInfo * _sourceInfo; // +0x38
    TextStatePublishMediaView * _innerMediaView; // +0x40
    UIImageView * _innerCoverView; // +0x48
    UIImageView * _innerBackgroundView; // +0x50
    MMUIButton * _blurButton; // +0x58
    MMUIButton * _liveButton; // +0x60
    id /* block */ _tapBlurButtonHandler; // +0x68
    id /* block */ _mediaSwitchHandler; // +0x70
    UILongPressGestureRecognizer * _longPressRecognizer; // +0x78
}
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)handleLongPress:(id)arg1;
- (void)layoutSubviews;
- (double)contentBottomY;
- (void)clearSwitch;
- (void)switchToDefaultImage:(id)arg1;
- (void)switchToMediaInfo:(id)arg1;
- (void)switchToSourceInfo:(id)arg1;
- (void)restoreContainerToInner;
- (void)onTapBlurButton;
- (void)onTapLiveButton;
- (BOOL)isBlur;
- (BOOL)isUseLivePhoto;
- (void)onMediaSwitchWithImage:(id)arg1;
- (void)onMediaSwitchWithView:(id)arg1;
- (CGSize)mediaScreenSize;
- (void)checkUseCustomBlurEffect;
- (void)requestUpdateDataSource;
- (unsigned int)switchValue;
- (void)setSwitchValue:(unsigned int)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (BOOL)isInInputState;
- (void)setIsInInputState:(BOOL)arg1;
- (id /* block */)tapLiveButtonHandler;
- (void)setTapLiveButtonHandler:(id /* block */)arg1;
- (id /* block */)longPreesPlayLiveHandler;
- (void)setLongPreesPlayLiveHandler:(id /* block */)arg1;
- (id)defaultImageId;
- (void)setDefaultImageId:(id)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (id)sourceInfo;
- (void)setSourceInfo:(id)arg1;
- (id)innerMediaView;
- (void)setInnerMediaView:(id)arg1;
- (id)innerCoverView;
- (void)setInnerCoverView:(id)arg1;
- (id)innerBackgroundView;
- (void)setInnerBackgroundView:(id)arg1;
- (id)blurButton;
- (void)setBlurButton:(id)arg1;
- (id)liveButton;
- (void)setLiveButton:(id)arg1;
- (id /* block */)tapBlurButtonHandler;
- (void)setTapBlurButtonHandler:(id /* block */)arg1;
- (id /* block */)mediaSwitchHandler;
- (void)setMediaSwitchHandler:(id /* block */)arg1;
- (id)longPressRecognizer;
- (void)setLongPressRecognizer:(id)arg1;
- (BOOL)isPlayLiveByLongPress;
- (void)setIsPlayLiveByLongPress:(BOOL)arg1;
- (BOOL)useSystemFilterToGenerateBlur;
- (void)setUseSystemFilterToGenerateBlur:(BOOL)arg1;
- (void).cxx_destruct;
@end
