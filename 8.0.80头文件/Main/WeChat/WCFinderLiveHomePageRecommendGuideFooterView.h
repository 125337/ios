@interface WCFinderLiveHomePageRecommendGuideFooterView : UICollectionReusableView
{
    id <WCFinderLiveHomePageRecommendGuideFooterViewDelegate> _delegate; // +0x8
    WCFinderLiveStreamJumpModel * _jumpModel; // +0x10
    UIView * _scrollLabelContainer; // +0x18
    UILabel * _swipeEducationLabel; // +0x20
    UIImageView * _labelArrowView; // +0x28
}
+ (id)footerIdentifier;
+ (double)footerWidth;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithJumpModel:(id)arg1;
- (void)layoutUI;
- (void)initView;
- (id)accessibilityLabel;
- (void)onScrollEducationAction:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)jumpModel;
- (void)setJumpModel:(id)arg1;
- (id)scrollLabelContainer;
- (void)setScrollLabelContainer:(id)arg1;
- (id)swipeEducationLabel;
- (void)setSwipeEducationLabel:(id)arg1;
- (id)labelArrowView;
- (void)setLabelArrowView:(id)arg1;
- (void).cxx_destruct;
@end
