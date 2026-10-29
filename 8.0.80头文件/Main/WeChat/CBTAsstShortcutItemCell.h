@interface CBTAsstShortcutItemCell : UICollectionViewCell <MMWebImageViewDelegate>
{
    UILabel * _titleLabel; // +0x8
    UIView * _containerView; // +0x10
    UIImageView * _trailingIconView; // +0x18
    MMWebImageView * _remoteIconView; // +0x20
    NSString * _remoteIconUrl; // +0x28
}
+ (double)widthForItem:(id)arg1;
+ (id)arrowImageWithColor:(id)arg1;
+ (BOOL)isRemoteIconUrl:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateWithItem:(id)arg1;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)trailingIconView;
- (void)setTrailingIconView:(id)arg1;
- (id)remoteIconView;
- (void)setRemoteIconView:(id)arg1;
- (id)remoteIconUrl;
- (void)setRemoteIconUrl:(id)arg1;
- (void).cxx_destruct;
@end
