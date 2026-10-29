@interface MMFinderLiveGiftStarPanel : MMFinderLiveGiftStarBasePanel <UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _isLoading; // +0x8
    BOOL _exposureReported; // +0x9
    FinderLiveGiftStarInfo * _giftStarInfo; // +0x10
    UIScrollView * _scrollView; // +0x18
    UIView * _headerView; // +0x20
    UIView * _levelBadgeView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _progressLabel; // +0x38
    MMUIButton * _lightAllButton; // +0x40
    UICollectionView * _gridView; // +0x48
    UIControl * _recordRow; // +0x50
    MMUILabel * _recordTitleLabel; // +0x58
    MMUILabel * _recordSubTitleLabel; // +0x60
    UIImageView * _recordArrowView; // +0x68
    MMUILabel * _stateLabel; // +0x70
    MMUIActivityIndicatorView * _loadingView; // +0x78
}
- (long long)navLeftStyle;
- (BOOL)showRuleButton;
- (id)panelBackgroundColor;
- (id)initWithTaskId:(id)arg1;
- (void)reloadData;
- (void)applyData;
- (BOOL)shouldShowLightAll;
- (BOOL)canLightAll;
- (void)setupContent;
- (void)layoutContentWithBounds:(CGRect)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)onClickLightAll;
- (void)onClickRecordRow;
- (id)giftStarInfo;
- (void)setGiftStarInfo:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)levelBadgeView;
- (void)setLevelBadgeView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)progressLabel;
- (void)setProgressLabel:(id)arg1;
- (id)lightAllButton;
- (void)setLightAllButton:(id)arg1;
- (id)gridView;
- (void)setGridView:(id)arg1;
- (id)recordRow;
- (void)setRecordRow:(id)arg1;
- (id)recordTitleLabel;
- (void)setRecordTitleLabel:(id)arg1;
- (id)recordSubTitleLabel;
- (void)setRecordSubTitleLabel:(id)arg1;
- (id)recordArrowView;
- (void)setRecordArrowView:(id)arg1;
- (id)stateLabel;
- (void)setStateLabel:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (BOOL)isLoading;
- (void)setIsLoading:(BOOL)arg1;
- (BOOL)exposureReported;
- (void)setExposureReported:(BOOL)arg1;
- (void).cxx_destruct;
@end
