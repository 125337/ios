@interface WCStoryPreivewPageCollectionController : MMObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionViewFlowLayout * m_collectionLayout; // +0x8
    WCStoryPreviewPageView * m_playingPageView; // +0x10
    double m_startContentOffsetX; // +0x18
    double m_willEndContentOffsetX; // +0x20
    NSHashTable * m_pageViewsToStop; // +0x28
    BOOL _needFixContentOffset; // +0x30
    BOOL _resetToFirstPageWhenUpdateData; // +0x31
    BOOL _isAllMuted; // +0x32
    BOOL _isPlayingVideo; // +0x33
    BOOL _enableDragToClose; // +0x34
    BOOL _canDeleteMyOwnStory; // +0x35
    BOOL _voiceOverEnable; // +0x36
    UICollectionView * m_collectionView; // +0x38
    NSIndexPath * m_currentIndexPath; // +0x40
    id <WCStoryPreivewPageCollectionControllerDelegate> _delegate; // +0x48
    id <WCStoryPreviewPageViewDelegate> _pageViewDelegate; // +0x50
    id <MMUIViewControllerDelegate> _vcDelegate; // +0x58
    WCStoryDataUnit * _dataUnit; // +0x60
    WCStoryPreviewReportObj * _reportObj; // +0x68
    NSIndexPath * _willDisplayIndex; // +0x70
    CGSize _screenSize; // +0x78
}
- (void)configCollectionView;
- (void)updateCollectionViewFrame;
- (void)setScreenSize:(CGSize)arg1;
- (void)setDataUnit:(id)arg1;
- (id)currentPageView;
- (void)resumePlayer;
- (void)stopAllPlayer;
- (void)tryShowCommentsList;
- (void)voiceOverElementEnable:(BOOL)arg1;
- (void)scrollToIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)reloadCollectionView;
- (void)fixContentOffset;
- (void)tilePages;
- (void)changeToPlayingPageView:(id)arg1;
- (void)addSafeStopPageView:(id)arg1;
- (void)clearAllPageView;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView;
- (id)currentIndexPath;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageViewDelegate;
- (void)setPageViewDelegate:(id)arg1;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (CGSize)screenSize;
- (id)dataUnit;
- (BOOL)needFixContentOffset;
- (void)setNeedFixContentOffset:(BOOL)arg1;
- (BOOL)resetToFirstPageWhenUpdateData;
- (void)setResetToFirstPageWhenUpdateData:(BOOL)arg1;
- (BOOL)isAllMuted;
- (void)setIsAllMuted:(BOOL)arg1;
- (BOOL)isPlayingVideo;
- (void)setIsPlayingVideo:(BOOL)arg1;
- (BOOL)enableDragToClose;
- (void)setEnableDragToClose:(BOOL)arg1;
- (BOOL)canDeleteMyOwnStory;
- (void)setCanDeleteMyOwnStory:(BOOL)arg1;
- (id)reportObj;
- (void)setReportObj:(id)arg1;
- (BOOL)voiceOverEnable;
- (void)setVoiceOverEnable:(BOOL)arg1;
- (id)willDisplayIndex;
- (void)setWillDisplayIndex:(id)arg1;
- (void).cxx_destruct;
@end
