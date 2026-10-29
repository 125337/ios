@interface WCFinderLiveFeedCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, LOTColorValueDelegate, WCGeneralMonitorDelegate, WCFinderFinderTopLiveCellDelegate>
{
    BOOL _isInDarkMode; // +0x8
    BOOL _stopPlayLive; // +0x9
    id <WCFinderFriendLiveSectionTableViewCellDelegate> _delegate; // +0x10
    unsigned long long _displayType; // +0x18
    UIView * _liveHeaderView; // +0x20
    UICollectionView * _collectionView; // +0x28
    CAGradientLayer * _gradientLayer; // +0x30
    NSMutableArray * _dataSource; // +0x38
    WCFinderFeedLayoutContentVM * _layoutContentVM; // +0x40
    UILabel * _titleLabel; // +0x48
    NSString * _titleText; // +0x50
}
+ (double)cellHeight;
- (id)initWithFrame:(CGRect)arg1 isInDarkMode:(BOOL)arg2;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)updateTitle:(id)arg1;
- (id)getVisibleFeedVM;
- (void)scrollToTop;
- (void)startLiveAnimation;
- (void)startPlay;
- (void)stopPlay;
- (void)initGradientLayer;
- (void)initLiveHeaderView;
- (void)initCollectionView;
- (void)updateWithDataSource:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)liveSectionNoMoreData;
- (void)liveDataFetchFinish:(BOOL)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (CGColor *)colorForFrame:(double)arg1 startKeyframe:(double)arg2 endKeyframe:(double)arg3 interpolatedProgress:(double)arg4 startColor:(CGColor *)arg5 endColor:(CGColor *)arg6 currentColor:(CGColor *)arg7;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)displayType;
- (void)setDisplayType:(unsigned long long)arg1;
- (id)liveHeaderView;
- (void)setLiveHeaderView:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (id)layoutContentVM;
- (void)setLayoutContentVM:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (BOOL)isInDarkMode;
- (void)setIsInDarkMode:(BOOL)arg1;
- (BOOL)stopPlayLive;
- (void)setStopPlayLive:(BOOL)arg1;
- (void).cxx_destruct;
@end

