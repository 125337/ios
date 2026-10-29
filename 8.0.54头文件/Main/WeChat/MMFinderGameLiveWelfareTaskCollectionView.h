@interface MMFinderGameLiveWelfareTaskCollectionView : UIView
{
    BOOL _isAnimating; // +0x8
    UICollectionView * _collectionView; // +0x10
    long long _autoScrollCurrentIndex; // +0x18
    id /* block */ _contentWidthDidChange; // +0x20
    MMFinderGameLiveWelfareCollectionViewModel * _viewModel; // +0x28
    MMTimer * _timer; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (void)updateViewModel:(id)arg1;
- (void)refreshWidth:(double)arg1;
- (void)refreshWidthCurrentIndex:(long long)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (id)collectionView;
- (void)invokeAutoScroll;
- (void)scrollCollectionViewToNext;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (void)setCollectionView:(id)arg1;
- (long long)autoScrollCurrentIndex;
- (void)setAutoScrollCurrentIndex:(long long)arg1;
- (id /* block */)contentWidthDidChange;
- (void)setContentWidthDidChange:(id /* block */)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end

