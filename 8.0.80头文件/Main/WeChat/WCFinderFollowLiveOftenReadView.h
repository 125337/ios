@interface WCFinderFollowLiveOftenReadView : UIView <UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, WCFinderLiveExt, WCFinderLiveHomePageFooterViewActionDelegate>
{
    BOOL _isAnimating; // +0x8
    BOOL _isDismissing; // +0x9
    int _commentScene; // +0xc
    WCFinderFollowLiveOftenReadVM * _viewModel; // +0x10
    id /* block */ _collapsedBlock; // +0x18
    UIScrollView * _contentView; // +0x20
    UICollectionView * _collectionView; // +0x28
    UICollectionViewDiffableDataSource * _diffableDataSource; // +0x30
    WCFinderLiveHomePageFooterView * _footerView; // +0x38
    id /* block */ _showBlock; // +0x40
    id /* block */ _dismissBlock; // +0x48
    UIView * _showView; // +0x50
    UIControl * _collapsedBubble; // +0x58
    UILabel * _bubbleTextLabel; // +0x60
    unsigned long long _mode; // +0x68
    double _lastRefreshTimestamp; // +0x70
    WCFinderExtStatsReporter * _extStatsReporter; // +0x78
}
+ (double)viewHeight;
- (id)initWithShowView:(id)arg1 viewModel:(id)arg2 showBlock:(id /* block */)arg3 dismissBlock:(id /* block */)arg4;
- (void)removeFromSuperview;
- (void)didMoveToWindow;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)isShow;
- (unsigned long long)barMode;
- (void)reloadOftenReadBar:(id)arg1;
- (void)show;
- (void)showWithoutAnimation;
- (void)reloadSort;
- (void)_setUpUI;
- (void)_setupDiffableDataSource;
- (void)_applySnapshot;
- (void)_setUpBubble;
- (void)_setUpBubbleReport;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)didClickFooterRefresh:(id)arg1;
- (BOOL)isEnableFooterTrigerLoading:(id)arg1;
- (void)_expandWithAnimation:(BOOL)arg1;
- (void)_performCollapseAnimated:(BOOL)arg1 showBubble:(BOOL)arg2 completionBlock:(id /* block */)arg3;
- (void)_collapseToBubbleWithAnimation:(BOOL)arg1;
- (void)_dismissBar;
- (void)_updateBubbleText;
- (void)_onPan;
- (void)_onTapOutside;
- (void)_onLongPress:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)_onTapBubble;
- (void)_refreshIfNeeded;
- (void)onFinderLiveCloseWithTidByExtention:(id)arg1;
- (void)_onClickItemVM:(id)arg1;
- (void)_reportLiveCardExposeIfNeeded:(id)arg1;
- (id)footerView;
- (void)collapseContentAndThenHide;
- (void)collapseWithoutAnimation;
- (void)setCollapsedBubbleAlpha:(double)arg1;
- (void)_flushExtStatsReport;
- (id)_oftenReadBarExtStatForItemVM:(id)arg1 feedActionType:(unsigned int)arg2 value:(unsigned long long)arg3;
- (void)_reportExtStatsExpose:(id)arg1;
- (void)_reportExtStatsClick:(id)arg1;
- (void)_reportFocusPackLiveListExpose;
- (void)_reportFocusPackLiveListClick;
- (id)_focusPackLiveListEidUdfKv;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id /* block */)collapsedBlock;
- (void)setCollapsedBlock:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)diffableDataSource;
- (void)setDiffableDataSource:(id)arg1;
- (void)setFooterView:(id)arg1;
- (id /* block */)showBlock;
- (void)setShowBlock:(id /* block */)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)showView;
- (void)setShowView:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)collapsedBubble;
- (void)setCollapsedBubble:(id)arg1;
- (id)bubbleTextLabel;
- (void)setBubbleTextLabel:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (double)lastRefreshTimestamp;
- (void)setLastRefreshTimestamp:(double)arg1;
- (id)extStatsReporter;
- (void)setExtStatsReporter:(id)arg1;
- (void).cxx_destruct;
@end
