@interface WCFinderMemberShipMoreCollectionCoverView : UIView
{
    WCFinderFeedImageCDNView * _coverImageView1; // +0x8
    WCFinderFeedImageCDNView * _coverImageView2; // +0x10
    WCFinderFeedImageCDNView * _coverImageView3; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)updateImageWithMediaWrapArray:(id)arg1;
- (id)genContainerView;
- (id)genWebImageView;
- (id)coverImageView1;
- (void)setCoverImageView1:(id)arg1;
- (id)coverImageView2;
- (void)setCoverImageView2:(id)arg1;
- (id)coverImageView3;
- (void)setCoverImageView3:(id)arg1;
- (void).cxx_destruct;
@end
