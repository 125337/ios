@interface MMLiveCompleteStatisticsView : UIView
{
    BOOL _expanded; // +0x8
    MMLiveStatistics * _statistics; // +0x10
    id <MMLiveCompleteStatisticsViewDelegate> _delegate; // +0x18
    UIView * _containerView; // +0x20
    UIImageView * _backgroundImageView; // +0x28
    UIView * _collapsedMonumentalItemViewsContainer; // +0x30
    MMLiveStatisticsItemView * _collapsedMonumentalItemView; // +0x38
    MMLiveIconButton * _expandButton; // +0x40
    UIView * _expandedMonumentalItemViewsContainer; // +0x48
    NSArray * _expandedMonumentalItemViews; // +0x50
    NSArray * _itemViews; // +0x58
    UIView * _horizontalSeparatorBar; // +0x60
    MMUIButton * _detailsButton; // +0x68
    UIView * _verticalSeparatorBar; // +0x70
    MMUIButton * _postersButton; // +0x78
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setStatistics:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onExpandButtonTapped;
- (void)onDetailsButtonTapped;
- (void)onPostersButtonTapped;
- (void)initializeComponents;
- (void)updateContentWithPreviousStatistics:(id)arg1 currentStatistics:(id)arg2;
- (void)updateCollapsedMonumentalItemViewForStatistics:(id)arg1;
- (void)updateExpandedMonumentalItemViewsForStatistics:(id)arg1;
- (void)updateItemViewsForStatistics:(id)arg1;
- (id)statistics;
- (BOOL)expanded;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)collapsedMonumentalItemViewsContainer;
- (void)setCollapsedMonumentalItemViewsContainer:(id)arg1;
- (id)collapsedMonumentalItemView;
- (void)setCollapsedMonumentalItemView:(id)arg1;
- (id)expandButton;
- (void)setExpandButton:(id)arg1;
- (id)expandedMonumentalItemViewsContainer;
- (void)setExpandedMonumentalItemViewsContainer:(id)arg1;
- (id)expandedMonumentalItemViews;
- (void)setExpandedMonumentalItemViews:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)horizontalSeparatorBar;
- (void)setHorizontalSeparatorBar:(id)arg1;
- (id)detailsButton;
- (void)setDetailsButton:(id)arg1;
- (id)verticalSeparatorBar;
- (void)setVerticalSeparatorBar:(id)arg1;
- (id)postersButton;
- (void)setPostersButton:(id)arg1;
- (void).cxx_destruct;
@end
