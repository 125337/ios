@interface WCFinderLiveCompleteRecommendContentView : UIView <WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCFinderLiveHomePageRecommendGuideFooterViewDelegate>
{
    BOOL _openAudienceNewLiveRecomend; // +0x8
    BOOL _autoPlaying; // +0x9
    id <WCFinderLiveCompleteRecommendContentViewDelegate> _delegate; // +0x10
    double _containerViewHeight; // +0x18
    FinderLiveSquareStyleInfo * _styleInfo; // +0x20
    UIView * _videoContainerView; // +0x28
    UIViewController<WCFinderFeedBaseViewControllerProtocol> * _currentViewController; // +0x30
    NSIndexPath * _leftIndexPath; // +0x38
    NSIndexPath * _rightIndexPath; // +0x40
    NSString * _sessionExtraKey; // +0x48
    NSArray * _itemArr; // +0x50
    UIView * _verticalLineView; // +0x58
    UICollectionView * _videoCollectionView; // +0x60
    MMUILabel * _titleLabel; // +0x68
    MMUILabel * _timeLabel; // +0x70
    MMUILabel * _goSquareLabel; // +0x78
    MMUILabel * _goSquareActionLabel; // +0x80
    MMUIImageView * _arrowImageView; // +0x88
    double _itemBottom; // +0x90
    unsigned long long _tabId; // +0x98
    double _videoCollectionViewHeight; // +0xa0
}
+ (double)contentViewWidthAndHeightScale;
- (id)init;
- (void)layoutSubviews;
- (void)stopAutoPlay;
- (void)startPlayWithIndexPath:(id)arg1;
- (BOOL)isCellFullExpose:(id)arg1 topMargin:(double)arg2;
- (BOOL)checkAutoPlay:(CGPoint)arg1 topMargin:(double)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)bindNewExposeReport:(id)arg1 elementModel:(id)arg2 collectionView:(id)arg3;
- (void)reportNewValidRatioExposeStart:(id)arg1;
- (void)reportFeedExpose:(id)arg1;
- (void)reportNewValidRatioExposeEnd:(id)arg1;
- (void)updateFeedExpose:(id)arg1;
- (void)reportFeedExposeEnd:(id)arg1;
- (void)updateFeedExposeEnd:(id)arg1;
- (void)reportFeedAutoPlayIfNeeded:(id)arg1 play:(BOOL)arg2 index:(unsigned long long)arg3;
- (void)report21053ExposeActionWithDataItem:(id)arg1 index:(unsigned long long)arg2;
- (void)report21053ClickActionWithDataItem:(id)arg1 index:(unsigned long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)onRecommendGuideClickAction:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)getCollectionViewCellWidth;
- (double)getLiveCompleteRecommendContentViewHeight:(double)arg1 openAudienceNewLiveRecomend:(BOOL)arg2;
- (double)getCollectionViewCellHeight;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)itemMargin;
- (double)videoContainerViewPadding;
- (double)containerViewHeight;
- (void)layoutCardItem:(id)arg1;
- (void)updateJumpInfoTabId:(unsigned long long)arg1;
- (void)updateVideoContainerViewHeight;
- (void)onViewWillAppear;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onClickRecommendItem:(id)arg1 dataItem:(id)arg2;
- (void)actionButtonClick:(id)arg1;
- (id)videoCollectionView;
- (id)titleLabel;
- (id)verticalLineView;
- (id)goSquareLabel;
- (id)arrowImageView;
- (id)goSquareActionLabel;
- (void)onClickedGoSquare;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)openAudienceNewLiveRecomend;
- (void)setOpenAudienceNewLiveRecomend:(BOOL)arg1;
- (void)setContainerViewHeight:(double)arg1;
- (id)styleInfo;
- (void)setStyleInfo:(id)arg1;
- (id)videoContainerView;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (BOOL)autoPlaying;
- (void)setAutoPlaying:(BOOL)arg1;
- (id)leftIndexPath;
- (void)setLeftIndexPath:(id)arg1;
- (id)rightIndexPath;
- (void)setRightIndexPath:(id)arg1;
- (id)sessionExtraKey;
- (void)setSessionExtraKey:(id)arg1;
- (id)itemArr;
- (void)setItemArr:(id)arg1;
- (void)setVerticalLineView:(id)arg1;
- (void)setVideoCollectionView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (void)setGoSquareLabel:(id)arg1;
- (void)setGoSquareActionLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (double)itemBottom;
- (void)setItemBottom:(double)arg1;
- (unsigned long long)tabId;
- (void)setTabId:(unsigned long long)arg1;
- (double)videoCollectionViewHeight;
- (void)setVideoCollectionViewHeight:(double)arg1;
- (void).cxx_destruct;
@end

