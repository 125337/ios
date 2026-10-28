@interface WCListFeedCellView : WCListBaseCellView
{
    UIView * m_tailView; // +0x98
    UILabel * _finderPureTextLabel; // +0xa0
    WCListFeedVideoThumbView * _videoThumbView; // +0xa8
}
+ (double)calculateHeightWithGroup:(id)arg1 groupItem:(id)arg2 width:(double)arg3 isFirstOneInsection:(BOOL)arg4 isLastOneInSection:(BOOL)arg5;
+ (id)titleWithDataItem:(id)arg1;
+ (id)trimDescWithDataItem:(id)arg1;
- (double)maxLabelWidth;
- (double)tailViewHeight;
- (void)initTailView;
- (void)initView;
- (id)titleText;
- (id)trimDesc;
- (id)videoThumbView;
- (void)prepareReuse;
- (void)onClickEvent;
- (void)setNormalColor;
- (void)setHighlightedColor;
- (void)updateAccessibility;
- (id)customAccessibilityComponents;
- (id)finderPureTextLabel;
- (void)setFinderPureTextLabel:(id)arg1;
- (void)setVideoThumbView:(id)arg1;
- (void).cxx_destruct;
@end
