@interface WCFinderProfileAudioPage : WCFinderStreamProfileViewPage <WCFinderProfileAudioPageModelDelegate, UICollectionViewDelegate, UICollectionViewDataSource, WCFinderStreamLayoutDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderProfileAudioSectionExt, WCFinderProfilePlaylistCellDataSource, WCFinderStreamLoadingStateDelegate, WCFinderProfileAudioPostTabCellDelegate, WCFinderProfileAudioFullPostViewCellDelegate, WCFinderProfileAudioFullPostViewCellDataSource>
{
    WCFinderStreamFooterView * _footerView; // +0x8
}
- (void)setViewModel:(id)arg1;
- (void)dealloc;
- (id)loadView;
- (void)audioPageModelDataChanged:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillApear;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)isSectionAudioListAppendMoreSecs;
- (BOOL)shouldShowCountForSection:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (void)updateFooterView;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (long long)numberOfPlayListCell:(id)arg1;
- (WCFinderProfilePlaylistItem)playListCell:(id)arg1 itemAtIndex:(long long)arg2;
- (void)playListCell:(id)arg1 onClickCellAtIndex:(long long)arg2;
- (void)onClickAllAudio:(id)arg1;
- (void)onClickAllCollection:(id)arg1;
- (void)onLoadingStateChanged:(id)arg1;
- (void)profileAudioSectionDataChanged;
- (void)onProfileAudioFullPostViewClicked:(id)arg1;
- (double)getScrollViewOriginY30percent:(id)arg1;
- (double)originY30percent;
- (void)onProfileAudioPostTabSelectPost:(id)arg1;
- (void)onProfileAudioPostTabSelectManage:(id)arg1;
- (void)onLaunchPostAudioLiteApp;
- (void)onLaunchManageMusicLiteApp;
- (void)onReceiveAudioEventRefreshList;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end

