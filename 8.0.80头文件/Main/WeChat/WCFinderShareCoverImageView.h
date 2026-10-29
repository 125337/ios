@interface WCFinderShareCoverImageView : UIView <MMWebImageViewDelegate>
{
    BOOL _blurEnabled; // +0x8
    UIImageView * _imageView; // +0x10
    UIImageView * _tinyIcon; // +0x18
    UILabel * _nameLabel; // +0x20
    WCFinderAuthInfoIconView * _authIconView; // +0x28
    MMWebImageView * _tailTagView; // +0x30
    UIView * _photoDotsView; // +0x38
    MMWebImageView * _maskImageView; // +0x40
    CAGradientLayer * _gradientLayer; // +0x48
    RichTextView * _mediaTitleTextView; // +0x50
    UIImageView * _liveGradientView; // +0x58
}
- (void)renderWithFinderShareItem:(id)arg1 size:(CGSize)arg2;
- (void)renderWithLiveShareItem:(id)arg1 size:(CGSize)arg2;
- (void)layoutImageWithURL:(id)arg1 coverResourceIdentifier:(id)arg2;
- (void)layoutAuthorInfoWithAuthIconURL:(id)arg1 authIconType:(unsigned long long)arg2 nickname:(id)arg3 tailTagURL:(id)arg4;
- (void)layoutPhotoDotsIfNeededWithFinderShareItem:(id)arg1;
- (void)layoutTitle:(id)arg1;
- (id)imageView;
- (id)nameLabel;
- (id)authIconView;
- (id)tailTagView;
- (id)tinyIcon;
- (id)gradientLayer;
- (id)liveGradientView;
- (id)maskImageView;
- (id)photoDotsView;
- (id)mediaTitleTextView;
- (void)setBlurEnabled:(BOOL)arg1;
- (void)onLoadImageOK;
- (void)updateBlurEnabled;
- (void)setImageView:(id)arg1;
- (BOOL)blurEnabled;
- (void)setTinyIcon:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (void)setTailTagView:(id)arg1;
- (void)setPhotoDotsView:(id)arg1;
- (void)setMaskImageView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setMediaTitleTextView:(id)arg1;
- (void)setLiveGradientView:(id)arg1;
- (void).cxx_destruct;
@end
