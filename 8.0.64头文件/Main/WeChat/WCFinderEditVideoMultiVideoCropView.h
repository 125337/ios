@interface WCFinderEditVideoMultiVideoCropView : MMUIView <UICollectionViewDataSource, UIScrollViewDelegate>
{
    BOOL _isScrollingTriggerByPlayer; // +0x8
    BOOL _isScrollingTriggerByCropPanEnd; // +0x9
    BOOL _isPaningForCropTime; // +0xa
    BOOL _ignoreShock; // +0xb
    id <WCFinderEditVideoMultiVideoCropViewDelegate> _delegate; // +0x10
    UIScrollView * _scrollView; // +0x18
    NSMutableArray * _collectionViews; // +0x20
    NSMutableArray * _leftPansView; // +0x28
    NSMutableArray * _rightPansViews; // +0x30
    NSMutableArray * _topLineViews; // +0x38
    NSMutableArray * _bottomLineViews; // +0x40
    MMUIView * _containerView; // +0x48
    UILabel * _titleLabel; // +0x50
    UIButton * _closeBtn; // +0x58
    UIButton * _doneBtn; // +0x60
    UIButton * _playBtn; // +0x68
    UILabel * _cropTipsLabel; // +0x70
    WCFinderEditVideoPorgressInfoViewModel * _progressViewModel; // +0x78
    EditVideoAttr * _attr; // +0x80
    double _minDuration; // +0x88
    unsigned long long _scrollTriggerTime; // +0x90
    NSMutableArray * _backUpSingleAttrs; // +0x98
}
- (BOOL)setupWithAttr:(id)arg1;
- (void)setProgressViewModel:(id)arg1;
- (void)reloadCollectionViews;
- (void)setupSubView;
- (void)adjustScrollViewContentInset;
- (void)setCurserHidden:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (void)updateCropTips;
- (void)updateScrollViewContent;
- (void)saveOriginEditData;
- (void)setProgress:(double)arg1 withAnimatedDuration:(double)arg2;
- (void)setCropTitleHidden:(BOOL)arg1;
- (BOOL)isPaused;
- (void)pauseVideo;
- (void)resumeVideo;
- (BOOL)isShowing;
- (void)changePauseState:(BOOL)arg1;
- (void)playShock;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)updateCollectionViewSelectState;
- (void)onClickCloseBtn:(id)arg1;
- (void)onClickDoneBtn:(id)arg1;
- (void)onClickPlayBtn:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handlePan:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)collectionViews;
- (void)setCollectionViews:(id)arg1;
- (id)leftPansView;
- (void)setLeftPansView:(id)arg1;
- (id)rightPansViews;
- (void)setRightPansViews:(id)arg1;
- (id)topLineViews;
- (void)setTopLineViews:(id)arg1;
- (id)bottomLineViews;
- (void)setBottomLineViews:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)doneBtn;
- (void)setDoneBtn:(id)arg1;
- (id)playBtn;
- (void)setPlayBtn:(id)arg1;
- (id)cropTipsLabel;
- (void)setCropTipsLabel:(id)arg1;
- (id)progressViewModel;
- (id)attr;
- (void)setAttr:(id)arg1;
- (double)minDuration;
- (void)setMinDuration:(double)arg1;
- (BOOL)isScrollingTriggerByPlayer;
- (void)setIsScrollingTriggerByPlayer:(BOOL)arg1;
- (BOOL)isScrollingTriggerByCropPanEnd;
- (void)setIsScrollingTriggerByCropPanEnd:(BOOL)arg1;
- (BOOL)isPaningForCropTime;
- (void)setIsPaningForCropTime:(BOOL)arg1;
- (BOOL)ignoreShock;
- (void)setIgnoreShock:(BOOL)arg1;
- (unsigned long long)scrollTriggerTime;
- (void)setScrollTriggerTime:(unsigned long long)arg1;
- (id)backUpSingleAttrs;
- (void)setBackUpSingleAttrs:(id)arg1;
- (void).cxx_destruct;
@end
