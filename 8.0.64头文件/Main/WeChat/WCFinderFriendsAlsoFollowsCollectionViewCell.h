@interface WCFinderFriendsAlsoFollowsCollectionViewCell : UICollectionViewCell <WCFinderShareAbstractCell>
{
    WCFinderFeedImageCDNView * _coverView; // +0x8
    WCFinderStaticCoverInfoView * _infoView; // +0x10
}
+ (id)cellID;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)updateWithDataItem:(id)arg1 commentScene:(int)arg2;
- (void)layoutSubviews;
- (id)transitionStartImage;
- (CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(BOOL)arg2;
- (void)doShareAnimation;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)infoView;
- (void)setInfoView:(id)arg1;
- (void).cxx_destruct;
@end
