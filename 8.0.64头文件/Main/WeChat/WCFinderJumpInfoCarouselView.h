@interface WCFinderJumpInfoCarouselView : WCFinderJumpInfoView <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderCarouselLayoutDelegate, WCFinderAdCarouselCollectionViewCellDelegate>
{
    NSArray * _jumpInfoArray; // +0x8
    FinderJumpInfo_Style * _appearStyle; // +0x10
    double _maxTextAreaWidth; // +0x18
    double _maxWidth; // +0x20
    UICollectionView * _collectionView; // +0x28
    WCFinderCarouselLayout * _collectionViewLayout; // +0x30
    WCFinderAdCarouselCollectionViewCell * _topCarouselCell; // +0x38
    MMTimer * _carouselTimer; // +0x40
    UIScrollViewAnimator * _scrollViewAnimator; // +0x48
    UIColor * _themeColor; // +0x50
    NSMutableArray * _carouselCountArray; // +0x58
    NSMutableArray * _autoCarouselCountArray; // +0x60
    NSMutableArray * _clickCountArray; // +0x68
    CGRect _targetFrame; // +0x70
}
- (id)init;
- (void)dealloc;
- (void)updateWithJumpInfoArray:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)changeToShow:(BOOL)arg1;
- (void)startExposeAction;
- (void)endExposeAction;
- (void)setMaxWidth:(double)arg1 maxTextAreaWidth:(double)arg2;
- (void)prepareForAppearAnimationFromView:(id)arg1;
- (void)changeToAppear:(BOOL)arg1 duration:(double)arg2;
- (void)completionForAppearAnimation;
- (void)notifyToShow;
- (void)startCarousel;
- (void)stopCarousel;
- (void)scrollToNextCard;
- (void)resetToCenterIfNeeded;
- (double)carouselItemWidth;
- (void)clearReportInfo;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 cellWidthAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)carouseCollectionViewCell:(id)arg1 switchFromPos:(long long)arg2 toPos:(long long)arg3;
- (void)carouseCollectionViewCell:(id)arg1 updateThemeColorWithImage:(id)arg2;
- (id)scrollViewAnimator;
- (id)collectionView;
- (id)collectionViewLayout;
- (id)carouselCellAtIndexPath:(id)arg1;
- (id)carouselCountArray;
- (id)autoCarouselCountArray;
- (id)clickCountArray;
- (id)carouselSequence;
- (id)autoCarouselSequence;
- (id)manualCarouselSequence;
- (id)clickSequence;
- (long long)autoCarouselCount;
- (long long)manualCarouselCount;
- (id)topJumpInfoView;
- (long long)topCardIndex;
- (void)setTopCardIndex:(long long)arg1;
- (id)carouselId;
- (id)jumpInfoArray;
- (void)setJumpInfoArray:(id)arg1;
- (id)appearStyle;
- (void)setAppearStyle:(id)arg1;
- (double)maxTextAreaWidth;
- (void)setMaxTextAreaWidth:(double)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (CGRect)targetFrame;
- (void)setTargetFrame:(CGRect)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setCollectionViewLayout:(id)arg1;
- (id)topCarouselCell;
- (void)setTopCarouselCell:(id)arg1;
- (id)carouselTimer;
- (void)setCarouselTimer:(id)arg1;
- (void)setScrollViewAnimator:(id)arg1;
- (id)themeColor;
- (void)setThemeColor:(id)arg1;
- (void)setCarouselCountArray:(id)arg1;
- (void)setAutoCarouselCountArray:(id)arg1;
- (void)setClickCountArray:(id)arg1;
- (void).cxx_destruct;
@end
