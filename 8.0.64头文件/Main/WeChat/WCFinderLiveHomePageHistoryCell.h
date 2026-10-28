@interface WCFinderLiveHomePageHistoryCell : WCFinderLiveFeedBaseStyleableCell <WCFinderFeedImageCDNViewDelegate, WCFinderLiveFeedGenericCardCellProtocol, WCFinderLiveFeedGenericCoverReportProtocol>
{
    id <WCFinderLiveHomePageHistoryCellDelegate> _delegate; // +0x8
    WCFinderFeedImageCDNView * _liveImageView; // +0x10
    UIView * _containerView; // +0x18
    CAGradientLayer * _gradientLayer; // +0x20
    MMUILabel * _nickNameLabel; // +0x28
    WCFinderLiveGenericFeedVM * _feedVM; // +0x30
    WCFinderLiveFeedGenericCoverReportInfo * _coverReportInfo; // +0x38
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
- (void)longPress:(id)arg1;
- (void)layoutSubviews;
- (void)finderFeedImageLoadFinish;
- (id)getCoverReportInfo;
- (void)resetCoverReportInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)liveImageView;
- (void)setLiveImageView:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id)coverReportInfo;
- (void)setCoverReportInfo:(id)arg1;
- (void).cxx_destruct;
@end
