@interface WCListenLyricsViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _isFirstLocation; // +0x70
    BOOL _hasSetContentOffset; // +0x71
    BOOL _isSelectLyric; // +0x72
    BOOL _isDragging; // +0x73
    BOOL _isReloadData; // +0x74
    BOOL _shouldForceResetHeaderViewAnimation; // +0x75
    id <WCListenLyricsViewControllerDelegate> _delegate; // +0x78
    id <WCListenLyricsViewControllerDataSource> _dataSource; // +0x80
    WCListenLyricsCollectionView * _collectionView; // +0x88
    UIView * _lyricsContainerView; // +0x90
    WCListenLyricsLoadingHeaderView * _loadingHeaderView; // +0x98
    CAGradientLayer * _gradientLayer; // +0xa0
    WCListenLyricHintView * _hintView; // +0xa8
    MMMusicLyricResolver * _resolver; // +0xb0
    long long _lastIndex; // +0xb8
    long long _curIndex; // +0xc0
    double _currentTime; // +0xc8
    unsigned long long _lyricCellAlphaMode; // +0xd0
    WCListenLyricsPlayCell * _cell; // +0xd8
    NSMutableDictionary * _cacheRowHeightMap; // +0xe0
    long long _cacheFirstDisabledSelectRow; // +0xe8
    CGSize _curContentSize; // +0xf0
}
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (id)init;
- (id)initWithLyrics:(id)arg1;
- (void)dealloc;
- (void)internalInit:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateWithLyrics:(id)arg1;
- (void)updateMusicCurrentTime:(double)arg1;
- (void)didMusicPaused;
- (void)didMusicResume;
- (void)showLoading;
- (void)createResolverWithLyrics:(id)arg1;
- (void)tryGetLyricAndReloadData;
- (long long)getFirstDisabledSelectRow;
- (void)calculateFirstDisabledSelectRow;
- (void)reloadHintView:(unsigned long long)arg1;
- (void)resetFlag;
- (void)resetAllValue;
- (BOOL)hasLyric;
- (UIEdgeInsets)collectionViewContentInsets;
- (UIEdgeInsets)getPaddingInsetForDisabledSelectLyricRow:(long long)arg1;
- (void)setLyricCellAlphaMode:(unsigned long long)arg1;
- (void)delayChangeLyricModeToImmersive;
- (void)setLyricsModeToImmersive;
- (void)refreshCellDisplay:(BOOL)arg1;
- (void)internalRefreshCellsDisplay:(BOOL)arg1;
- (void)internalRefreshSingleCellDisplay:(id)arg1 row:(long long)arg2 animated:(BOOL)arg3;
- (void)startLyricLoadingAnimation;
- (BOOL)isCollectionViewContainLoadingHeaderView;
- (void)removeCollectionHeaderView;
- (void)scrollToIndex:(long long)arg1;
- (void)_scrollToIndex:(long long)arg1;
- (void)internalLocateLyric;
- (void)tryToLocateFirstProperLyricInMiddlePos;
- (BOOL)tryToLocateProperLyricInMiddleArea;
- (void)internalLocateProperLyricInMiddle;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)lyricsContainerView;
- (id)collectionLayout;
- (id)collectionView;
- (id)loadingHeaderView;
- (id)gradientLayer;
- (id)hintView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setLyricsContainerView:(id)arg1;
- (void)setLoadingHeaderView:(id)arg1;
- (void)setGradientLayer:(id)arg1;
- (void)setHintView:(id)arg1;
- (id)resolver;
- (void)setResolver:(id)arg1;
- (long long)lastIndex;
- (void)setLastIndex:(long long)arg1;
- (long long)curIndex;
- (void)setCurIndex:(long long)arg1;
- (BOOL)isFirstLocation;
- (void)setIsFirstLocation:(BOOL)arg1;
- (BOOL)hasSetContentOffset;
- (void)setHasSetContentOffset:(BOOL)arg1;
- (BOOL)isSelectLyric;
- (void)setIsSelectLyric:(BOOL)arg1;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (unsigned long long)lyricCellAlphaMode;
- (CGSize)curContentSize;
- (void)setCurContentSize:(CGSize)arg1;
- (BOOL)isDragging;
- (void)setIsDragging:(BOOL)arg1;
- (BOOL)isReloadData;
- (void)setIsReloadData:(BOOL)arg1;
- (BOOL)shouldForceResetHeaderViewAnimation;
- (void)setShouldForceResetHeaderViewAnimation:(BOOL)arg1;
- (id)cell;
- (void)setCell:(id)arg1;
- (id)cacheRowHeightMap;
- (void)setCacheRowHeightMap:(id)arg1;
- (long long)cacheFirstDisabledSelectRow;
- (void)setCacheFirstDisabledSelectRow:(long long)arg1;
- (void).cxx_destruct;
@end
