@interface MMLiveSpecialCollectionViewCell : UICollectionViewCell <WCFinderFeedImageCDNViewDelegate>
{
    BOOL _isPlaying; // +0x8
    BOOL _needUpdateLayerColor; // +0x9
    WCFinderDataItem * _dataItem; // +0x10
    WCFinderFeedImageCDNView * _coverView; // +0x18
    WCFinderHeadImageView * _headImageView; // +0x20
    MMUILabel * _nickNameLabel; // +0x28
    UIView * _headImageBorderView; // +0x30
    CAGradientLayer * _mainColorGradientLayer; // +0x38
    CAGradientLayer * _shadowGradientLayer; // +0x40
}
+ (CGSize)cellSize;
+ (id)ReuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateBorderStatus;
- (void)updateContent;
- (void)prepareForReuse;
- (void)finderFeedImageLoadFinish;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)isPlaying;
- (void)setIsPlaying:(BOOL)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)headImageBorderView;
- (void)setHeadImageBorderView:(id)arg1;
- (id)mainColorGradientLayer;
- (void)setMainColorGradientLayer:(id)arg1;
- (id)shadowGradientLayer;
- (void)setShadowGradientLayer:(id)arg1;
- (BOOL)needUpdateLayerColor;
- (void)setNeedUpdateLayerColor:(BOOL)arg1;
- (void).cxx_destruct;
@end

