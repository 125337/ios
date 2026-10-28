@interface WCFinderMusicSelectView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, WCVideoProducerMusicSearcherDelegate>
{
    id <WCFinderMusicSelectViewDelegate> _delegate; // +0x8
    id <WCFinderMusicSelectViewDataSource> _dataSource; // +0x10
    unsigned long long _currentIndex; // +0x18
    UICollectionView * _collectionView; // +0x20
    MMUIButton * _bgmButton; // +0x28
    MMUIButton * _osButton; // +0x30
    MMUIButton * _closeButton; // +0x38
    WCFinderMusicSelectViewInitParams * _params; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 params:(id)arg2;
- (void)commonInit;
- (void)setupViews;
- (void)layoutOptionButton:(id)arg1;
- (void)resetIndex;
- (void)reloadData;
- (double)contentHeight;
- (BOOL)isBgmButtonSelected;
- (BOOL)isOstButtonSelected;
- (void)manualChangeOstButtonEnable:(BOOL)arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (void)scrollToIndex:(unsigned long long)arg1;
- (id)getViewController;
- (void)onSearchBtnClick:(id)arg1;
- (void)onClickCloseBtn:(id)arg1;
- (void)onMusicOnOffBtnClick:(id)arg1;
- (void)onOriginSoundOnOffBtnClick:(id)arg1;
- (void)_setOriginSoundSelected:(BOOL)arg1 triggerByAction:(BOOL)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didRequestSearchKey:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didSelectMusic:(id)arg2 atIndex:(id)arg3;
- (void)musicSearcherVC:(id)arg1 didCommitMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didCancelWithMusic:(id)arg2;
- (void)musicSearcherVC:(id)arg1 didRequestAudioModule:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)getButton;
- (void)hideOSTButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataSource;
- (void)setDataSource:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)bgmButton;
- (void)setBgmButton:(id)arg1;
- (id)osButton;
- (void)setOsButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end
