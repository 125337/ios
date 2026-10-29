@interface CBTCoopV2TimelineImageMediaView : MMUIView
{
    WCDataItem * _dataItem; // +0x8
    double _contentWidth; // +0x10
    NSArray * _imageViews; // +0x18
    UIView * _moreBadgeShadowView; // +0x20
    CAGradientLayer * _moreBadgeShadowLayer; // +0x28
    UIView * _moreBadgeView; // +0x30
    UIImageView * _moreBadgeIconView; // +0x38
    UILabel * _moreBadgeCountLabel; // +0x40
}
+ (BOOL)isSinglePortraitMediaItem:(id)arg1;
+ (CGSize)singleImageSizeForMediaItem:(id)arg1;
+ (long long)displayCountForDataItem:(id)arg1;
+ (double)multiImageLengthForContentWidth:(double)arg1 displayCount:(long long)arg2;
+ (double)renderedHeightForDataItem:(id)arg1 contentWidth:(double)arg2;
- (id)initWithDataItem:(id)arg1 contentWidth:(double)arg2;
- (void)ensureSubviews;
- (void)layoutSubviews;
- (id)createImageViewWithMediaItem:(id)arg1 isSingleImage:(BOOL)arg2;
- (void)applyLivePhotoIconShadowToImageView:(id)arg1;
- (void)updateMoreBadgeInImageView:(id)arg1 totalCount:(long long)arg2;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (double)contentWidth;
- (void)setContentWidth:(double)arg1;
- (id)imageViews;
- (void)setImageViews:(id)arg1;
- (id)moreBadgeShadowView;
- (void)setMoreBadgeShadowView:(id)arg1;
- (id)moreBadgeShadowLayer;
- (void)setMoreBadgeShadowLayer:(id)arg1;
- (id)moreBadgeView;
- (void)setMoreBadgeView:(id)arg1;
- (id)moreBadgeIconView;
- (void)setMoreBadgeIconView:(id)arg1;
- (id)moreBadgeCountLabel;
- (void)setMoreBadgeCountLabel:(id)arg1;
- (void).cxx_destruct;
@end
