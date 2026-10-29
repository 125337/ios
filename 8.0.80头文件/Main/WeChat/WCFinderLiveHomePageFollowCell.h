@interface WCFinderLiveHomePageFollowCell : WCFinderLiveFeedBaseStyleableCell <WCFinderFeedImageCDNViewDelegate, WCFinderLiveFeedGenericCardCellProtocol, WCFinderLiveFeedGenericCoverReportProtocol>
{
    WCFinderFeedImageCDNView * _liveImageView; // +0x8
    UIView * _containerView; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    MMUILabel * _nickNameLabel; // +0x20
    UIView * _headImageBorderView; // +0x28
    CAGradientLayer * _mainColorGradientLayer; // +0x30
    CAGradientLayer * _shadowGradientLayer; // +0x38
    WCFinderLiveGenericFeedVM * _feedVM; // +0x40
    WCFinderLiveFeedGenericCoverReportInfo * _coverReportInfo; // +0x48
}
+ (id)cellIdentifier;
+ (double)cellHeightInWidth:(double)arg1 styleInfo:(id)arg2;
+ (double)cellWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViewsIfNeeded;
- (void)updateStyle;
- (void)prepareForReuse;
- (void)updateWithFeedVM:(id)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)finderFeedImageLoadFinish;
- (id)getCoverReportInfo;
- (void)resetCoverReportInfo;
- (id)liveImageView;
- (void)setLiveImageView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
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
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id)coverReportInfo;
- (void)setCoverReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
