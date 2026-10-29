@interface MMFinderLiveRewardGiftWallCollectionViewCell : UICollectionViewCell
{
    BOOL _isDarkMode; // +0x8
    MMWebImageView * _topOneUserHeadImageView; // +0x10
    MMWebImageView * _thumbnailView; // +0x18
    MMUILabel * _displayNameLabel; // +0x20
    MMUILabel * _giftCountLabel; // +0x28
    UIView * _topOneUserView; // +0x30
    CAGradientLayer * _topOneUserGradientLayer; // +0x38
    FinderLiveGiftWallInfo_GiftMetaInfo * _giftMetaInfo; // +0x40
    MMFinderLiveTaskId * _taskId; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithGiftMetaInfo:(id)arg1 taskId:(id)arg2;
- (void)initUI;
- (void)layoutSubviews;
- (id)finderLiveTask;
- (id)topOneUserHeadImage;
- (double)imageAlpha;
- (id)topOneUserHeadImageView;
- (void)setTopOneUserHeadImageView:(id)arg1;
- (BOOL)isDarkMode;
- (id)thumbnailView;
- (void)setThumbnailView:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)giftCountLabel;
- (void)setGiftCountLabel:(id)arg1;
- (id)topOneUserView;
- (void)setTopOneUserView:(id)arg1;
- (id)topOneUserGradientLayer;
- (void)setTopOneUserGradientLayer:(id)arg1;
- (id)giftMetaInfo;
- (void)setGiftMetaInfo:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (void).cxx_destruct;
@end

