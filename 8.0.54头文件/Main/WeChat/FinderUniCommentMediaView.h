@interface FinderUniCommentMediaView : WCFlexBaseView
{
    unsigned long long _mode; // +0x8
    id /* block */ _deleteHandler; // +0x10
    id /* block */ _clickHandler; // +0x18
    FinderUniCommentImageView * _imageView; // +0x20
    SightIconView * _playButton; // +0x28
    MMUIButton * _closeButton; // +0x30
    FinderUniCommentMediaItem * _mediaItem; // +0x38
    MMUIButton * _backgroundButton; // +0x40
    MMUILabel * _durationLabel; // +0x48
    CAGradientLayer * _durationGradientLayer; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)updateWithMediaItem:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (id)currentImageInfo;
- (id)currentVideoInfo;
- (void)updateDisplay;
- (void)layoutSubviews;
- (void)closeButtonClicked;
- (void)onBackgroundButtonClicked;
- (id)imageView;
- (id)playButton;
- (id)closeButton;
- (id)backgroundButton;
- (id)durationLabel;
- (id)durationGradientLayer;
- (unsigned long long)mode;
- (id /* block */)deleteHandler;
- (void)setDeleteHandler:(id /* block */)arg1;
- (id /* block */)clickHandler;
- (void)setClickHandler:(id /* block */)arg1;
- (void)setImageView:(id)arg1;
- (void)setPlayButton:(id)arg1;
- (void)setCloseButton:(id)arg1;
- (id)mediaItem;
- (void)setMediaItem:(id)arg1;
- (void)setBackgroundButton:(id)arg1;
- (void)setDurationLabel:(id)arg1;
- (void)setDurationGradientLayer:(id)arg1;
- (void).cxx_destruct;
@end

