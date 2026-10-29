@interface WCFinderNotifyCenterTopBannerCell : UITableViewCell
{
    WCFinderCustomImageRichTextView * _bannerTextView; // +0x8
    ThankRedPackageInfo * _bannerInfo; // +0x10
    double _layoutWidth; // +0x18
}
+ (BOOL)shouldShowWithBannerInfo:(id)arg1;
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (void)layoutSubviews;
- (void)updateWithBannerInfo:(id)arg1;
- (void)layoutUI;
- (id)bannerTextView;
- (void)setBannerTextView:(id)arg1;
- (id)bannerInfo;
- (void)setBannerInfo:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end

