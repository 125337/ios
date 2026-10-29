@interface FavWarningBannerView : UIButton <MFBanner>
{
    UILabel * m_textLabel; // +0x8
    FavBannerTipBkgView * m_bkgView; // +0x10
    MMUILabel * m_favCapacityMsg; // +0x18
    UIImageView * m_imageView; // +0x20
    int bannerType; // +0x28
    id <FavWarningBannerViewDelegate> delegate; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initUI;
- (void)initText;
- (CGSize)arrowSize;
- (CGRect)arrowFrameForCapacityMsg;
- (void)resetFavCapacityMsg;
- (id)getCapacityString;
- (void)relayoutViews;
- (void)setBannerType:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)bannerType;
- (void).cxx_destruct;
@end
