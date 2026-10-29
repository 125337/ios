@interface VoipRecentStatusImagesView : UIView <UIScrollViewDelegate>
{
    id /* block */ _loadedAction; // +0x8
    id /* block */ _refreshBlock; // +0x10
    id /* block */ _didSlideCallback; // +0x18
    unsigned long long _count; // +0x20
    unsigned long long _currentIndex; // +0x28
    UIScrollView * _scrollView; // +0x30
    UIImageView * _leftImageView; // +0x38
    UIImageView * _centerImageView; // +0x40
    UIImageView * _rightImageView; // +0x48
    NSTimer * _timer; // +0x50
    VoipRecentStatusFadeView * _topFadeView; // +0x58
    VoipRecentStatusFadeView * _bottomFadeView; // +0x60
}
- (id)initWithCount:(unsigned long long)arg1;
- (void)terminateTimer;
- (void)startUpTimer;
- (void)layoutSubviews;
- (void)scrollAutomatically;
- (void)refreshContents;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (id /* block */)loadedAction;
- (void)setLoadedAction:(id /* block */)arg1;
- (id /* block */)refreshBlock;
- (void)setRefreshBlock:(id /* block */)arg1;
- (id /* block */)didSlideCallback;
- (void)setDidSlideCallback:(id /* block */)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)leftImageView;
- (void)setLeftImageView:(id)arg1;
- (id)centerImageView;
- (void)setCenterImageView:(id)arg1;
- (id)rightImageView;
- (void)setRightImageView:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (id)topFadeView;
- (void)setTopFadeView:(id)arg1;
- (id)bottomFadeView;
- (void)setBottomFadeView:(id)arg1;
- (void).cxx_destruct;
@end

