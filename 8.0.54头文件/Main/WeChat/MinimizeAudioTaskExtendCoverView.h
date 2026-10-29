@interface MinimizeAudioTaskExtendCoverView : UIView
{
    unsigned int _style; // +0x8
    UIImage * _image; // +0x10
    double _fadeChangeTime; // +0x18
    MMWebImageView * _coverView; // +0x20
    MMWebImageView * _backgroundImageView; // +0x28
    UIView * _backgroundGraintView; // +0x30
}
+ (CGSize)defaultSize;
+ (id)keyPathsForValuesAffectingImage;
+ (BOOL)automaticallyNotifiesObserversOfImage;
- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setImageURL:(id)arg1;
- (void)setImage:(id)arg1 bgStyle:(unsigned int)arg2;
- (void)updateCurBgStyle:(unsigned int)arg1 image:(id)arg2 imageURL:(id)arg3;
- (id)image;
- (void)setFadeChangeTime:(double)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)setImage:(id)arg1;
- (double)fadeChangeTime;
- (unsigned int)style;
- (void)setStyle:(unsigned int)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)backgroundGraintView;
- (void)setBackgroundGraintView:(id)arg1;
- (void).cxx_destruct;
@end

