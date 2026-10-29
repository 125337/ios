@interface WCFinderRedPacketBannerView : UIView
{
    id <WCFinderRedPacketBannerViewDelegate> _delegate; // +0x8
    UIImageView * _iconView; // +0x10
    UIImageView * _arrowView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIView * _separateLine; // +0x28
    ThankRedPackageInfo * _redpackageInfo; // +0x30
}
+ (void)bindRedPackageFromView:(id)arg1 likePanel:(long long)arg2 redPacketProgress:(int)arg3 contentVM:(id)arg4;
- (id)initWithFrame:(CGRect)arg1;
- (id)separateLine;
- (id)titleLabel;
- (id)arrowView;
- (id)iconView;
- (void)updateRedpackageInfo:(id)arg1;
- (void)layoutAllSubviews;
- (void)showSeparateLine;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setArrowView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSeparateLine:(id)arg1;
- (id)redpackageInfo;
- (void)setRedpackageInfo:(id)arg1;
- (void).cxx_destruct;
@end
