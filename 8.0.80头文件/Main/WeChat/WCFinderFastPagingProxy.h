@interface WCFinderFastPagingProxy : MMScrollViewProxy
{
    BOOL _isCustomAnimating; // +0x8
    id <WCFinderFluencyPagingDataSource> _dataSource; // +0x10
    id <WCFinderFluencyPagingDelegate> _fluencyDelegate; // +0x18
    UITableView * _tableView; // +0x20
    long long _currentPageIndex; // +0x28
    long long _totalPages; // +0x30
    double _targetContentOffsetY; // +0x38
    double _startContentOffsetY; // +0x40
    double _animationDuration; // +0x48
    double _lastPageIndexUpdateTime; // +0x50
    double _cachedTableViewHeight; // +0x58
    id <WCFinderFastPagingAnimationProtocol> _animator; // +0x60
    double _originalEstimatedHeight; // +0x68
}
- (id)initWithTableView:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (void)refreshPageCount;
- (void)startCustomAnimationToContentOffset:(CGPoint)arg1 duration:(double)arg2;
- (void)stopCustomAnimation;
- (void)handleAnimationCompletion;
- (double)sensitivityThreshold;
- (double)velocityThreshold;
- (long long)targetPageIndexForContentOffset:(double)arg1 velocity:(double)arg2;
- (double)pageHeight;
- (BOOL)shouldIgnoreSystemCallback;
- (double)animationDurationForSensitivityLevel;
- (void)startNewAnimationToPage:(long long)arg1 fromScrollView:(id)arg2;
- (void)handlePageTransitionToIndex:(long long)arg1 fromScrollView:(id)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)updateCurrentPageIndex;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)fluencyDelegate;
- (void)setFluencyDelegate:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (long long)currentPageIndex;
- (void)setCurrentPageIndex:(long long)arg1;
- (long long)totalPages;
- (void)setTotalPages:(long long)arg1;
- (double)targetContentOffsetY;
- (void)setTargetContentOffsetY:(double)arg1;
- (double)startContentOffsetY;
- (void)setStartContentOffsetY:(double)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (BOOL)isCustomAnimating;
- (void)setIsCustomAnimating:(BOOL)arg1;
- (double)lastPageIndexUpdateTime;
- (void)setLastPageIndexUpdateTime:(double)arg1;
- (double)cachedTableViewHeight;
- (void)setCachedTableViewHeight:(double)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (double)originalEstimatedHeight;
- (void)setOriginalEstimatedHeight:(double)arg1;
- (void).cxx_destruct;
@end
