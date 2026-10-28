@interface WCFinderNotifyCenterTopBannerCell : UITableViewCell
{
    UIImageView * _iconView; // +0x8
    WCFinderRichTextView * _bannerTextView; // +0x10
    UIImageView * _arrowView; // +0x18
    UIView * _separateLine; // +0x20
    ThankRedPackageInfo * _bannerInfo; // +0x28
}
+ (BOOL)shouldShowWithBannerInfo:(id)arg1;
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupUI;
- (id)separateLine;
- (id)arrowView;
- (id)bannerTextView;
- (id)iconView;
- (void)updateWithBannerInfo:(id)arg1;
- (void)layoutUI;
- (void)setIconView:(id)arg1;
- (void)setBannerTextView:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void)setSeparateLine:(id)arg1;
- (id)bannerInfo;
- (void)setBannerInfo:(id)arg1;
- (void).cxx_destruct;
@end
