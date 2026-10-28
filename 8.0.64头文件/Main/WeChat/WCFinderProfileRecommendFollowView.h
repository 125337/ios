@interface WCFinderProfileRecommendFollowView : UIView <WCFinderShowcasePagingViewDatasource, WCFinderShowcasePagingViewDelegate>
{
    BOOL _isExpand; // +0x8
    BOOL _showInfoSecondLine; // +0x9
    WCFinderFriendsAlsoFollowViewModel * _recommends; // +0x10
    double _expandHorizontalPadding; // +0x18
    UIView * _anchorRelateView; // +0x20
    UIView * _backgroundView; // +0x28
    CAGradientLayer * _topInnerShadow; // +0x30
    CAGradientLayer * _bottomInnerShadow; // +0x38
    UILabel * _titleLabel; // +0x40
    UIButton * _moreButton; // +0x48
    double _cacheAnchorPosition; // +0x50
    WCFinderShowcasePagingView * _pagingView; // +0x58
    CGSize _cacheSize; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupPagingView:(BOOL)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)doLayout;
- (void)layoutAnchorPoint;
- (CGRect)calcultePagingRect:(double)arg1;
- (void)setRecommends:(id)arg1;
- (CGSize)itemSizeWithContainerWidth:(double)arg1;
- (void)onClickMore;
- (long long)numberOfShowcaseView:(id)arg1;
- (void)showcaseView:(id)arg1 updateCell:(id)arg2 atIdx:(long long)arg3;
- (void)showcaseView:(id)arg1 onClickCellAtIdx:(long long)arg2;
- (void)showcaseView:(id)arg1 willDisplayCell:(long long)arg2;
- (id)recommends;
- (double)expandHorizontalPadding;
- (void)setExpandHorizontalPadding:(double)arg1;
- (id)anchorRelateView;
- (void)setAnchorRelateView:(id)arg1;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)topInnerShadow;
- (void)setTopInnerShadow:(id)arg1;
- (id)bottomInnerShadow;
- (void)setBottomInnerShadow:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (CGSize)cacheSize;
- (void)setCacheSize:(CGSize)arg1;
- (double)cacheAnchorPosition;
- (void)setCacheAnchorPosition:(double)arg1;
- (BOOL)showInfoSecondLine;
- (void)setShowInfoSecondLine:(BOOL)arg1;
- (id)pagingView;
- (void)setPagingView:(id)arg1;
- (void).cxx_destruct;
@end
