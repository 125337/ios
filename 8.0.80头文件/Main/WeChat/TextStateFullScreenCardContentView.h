@interface TextStateFullScreenCardContentView : TextStateBaseCardContentView <UIScrollViewDelegate>
{
    BOOL _expandContent; // +0x8
    BOOL _showSameFriendDescription; // +0x9
    BOOL _scrollingToTop; // +0xa
    BOOL _expanding; // +0xb
    BOOL _needsCreateOrUpdateLayout; // +0xc
    BOOL _needsLayoutText; // +0xd
    unsigned int _footerComponents; // +0x10
    double _topPadding; // +0x18
    double _bottomPadding; // +0x20
    double _horizonPadding; // +0x28
    UIScrollView * _noopScrollView; // +0x30
    UIScrollView * _contentContainerView; // +0x38
    CAGradientLayer * _gradientMaskLayer; // +0x40
    RichTextView * _expandTextView; // +0x48
    UIViewPropertyAnimator * _shrinkAnimator; // +0x50
    UIView * _backgroundView; // +0x58
    TextStateSectionView * _footerView; // +0x60
    UIView * _iconSourceSeparator; // +0x68
    UIView * _defaultHeadImageSourceSeparator; // +0x70
    WCFinderFullDoubleLikeEduView * _doubleTapFavoriteGuideView; // +0x78
}
+ (id)verticalSeparator;
- (void)showDoubleTapFavoriteGuideIfNeeded;
- (id)getDoubleTapFavoriteGuideView;
- (void)showDoubleTapFavoriteGuide;
- (void)hideDoubleTapFavoriteGuideIfNeeded;
- (id)doubleTapFavoriteGuideView;
- (void)dealloc;
- (void)initSubviews;
- (void)initBackgroundView;
- (void)initContentContainerView;
- (void)initFooterView;
- (void)setFrame:(CGRect)arg1;
- (void)setTopPadding:(double)arg1;
- (void)setBottomPadding:(double)arg1;
- (void)setShowSameFriendDescription:(BOOL)arg1;
- (void)setShowResendWhenPublishFailed:(BOOL)arg1;
- (id)expandTextView;
- (BOOL)enableExpandContent;
- (BOOL)isExpandContent;
- (void)toggleExpandContent;
- (void)setExpandContent:(BOOL)arg1;
- (void)setExpandContent:(BOOL)arg1 animated:(BOOL)arg2;
- (void)expandContentCoordinateWithDragDown;
- (void)setExpandContent:(BOOL)arg1 animated:(BOOL)arg2 coordinatingDragDown:(BOOL)arg3;
- (BOOL)trySetExpandContent:(BOOL)arg1;
- (void)expandContentAnimated:(BOOL)arg1 coordinatingDragDown:(BOOL)arg2;
- (void)resetExpand;
- (void)shrinkContentAnimated:(BOOL)arg1;
- (double)expandAnimationDuration;
- (id)shrinkAnimator;
- (void)resetShrinkAnimator;
- (id)foldString;
- (double)contentContainerTopInsetForExpandContent:(BOOL)arg1;
- (void)updateContentContainerInset;
- (void)updateContentContainerSize;
- (id)iconSourceSeparator;
- (id)defaultHeadImageSourceSeparator;
- (BOOL)shouldHideDefaultSourceView;
- (BOOL)shouldStartDoubleTapFavorite;
- (unsigned long long)maxLineNumberForFold;
- (void)onContentUpdate;
- (void)shouldUpdateLayout;
- (void)setNeedsLayoutText;
- (void)setNeedsCreateOrUpdateLayout;
- (void)createOrUpdateLayoutIfNeeded;
- (void)updateFooterViewAndLayout;
- (void)updateTextLayout;
- (void)updateGradientLayer;
- (void)safeAreaInsetsDidChange;
- (void)createOrUpdateLayout;
- (void)updateSeparator;
- (void)updateDescriptionTextView;
- (BOOL)handleTapView:(id)arg1 point:(CGPoint)arg2;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)showSameFriendDescription;
- (unsigned int)footerComponents;
- (void)setFooterComponents:(unsigned int)arg1;
- (double)topPadding;
- (double)bottomPadding;
- (double)horizonPadding;
- (void)setHorizonPadding:(double)arg1;
- (id)noopScrollView;
- (void)setNoopScrollView:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (BOOL)isScrollingToTop;
- (void)setScrollingToTop:(BOOL)arg1;
- (id)gradientMaskLayer;
- (void)setGradientMaskLayer:(id)arg1;
- (void)setExpandTextView:(id)arg1;
- (BOOL)isExpanding;
- (void)setExpanding:(BOOL)arg1;
- (void)setShrinkAnimator:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void)setIconSourceSeparator:(id)arg1;
- (void)setDefaultHeadImageSourceSeparator:(id)arg1;
- (id)doubleTapFavoriteGuideView;
- (void)setDoubleTapFavoriteGuideView:(id)arg1;
- (BOOL)needsCreateOrUpdateLayout;
- (void)setNeedsCreateOrUpdateLayout:(BOOL)arg1;
- (BOOL)needsLayoutText;
- (void)setNeedsLayoutText:(BOOL)arg1;
- (void).cxx_destruct;
@end
