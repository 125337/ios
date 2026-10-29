@interface WCFinderFeedPickerCollectionViewCell : UICollectionViewCell
{
    WCFinderFeedImageCDNView * _coverImageView; // +0x8
    CAGradientLayer * _maskLayer; // +0x10
    MMUILabel * _timeLabel; // +0x18
    UIView * _unenableMask; // +0x20
}
+ (id)cellID;
+ (double)cellHeightWidthWidth:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setup;
- (BOOL)enable;
- (void)setEnable:(BOOL)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)updateWithContentVM:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)unenableMask;
- (void)setUnenableMask:(id)arg1;
- (void).cxx_destruct;
@end

